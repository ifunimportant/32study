#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"

/*
 * 创建一个空顺序表，初始容量 MAX，满后每次扩容 ADD
 * 成功返回 sqlist*，失败返回 NULL
 */
sqlist *sqlist_create(void)
{
    sqlist *p = (sqlist *)malloc(sizeof(sqlist));
    if (p == NULL) {
        printf("顺序表结构体分配失败\n");
        return NULL;
    }
    p->array = (elemtype *)malloc(MAX * sizeof(elemtype));
    if (p->array == NULL) {
        printf("顺序表数组分配失败\n");
        free(p);          // 数组分配失败时释放已分配的结构体
        return NULL;
    }
    p->capacity = MAX;
    p->length   = 0;
    printf("顺序表已创建, 容量:%d\n", MAX);
    return p;
}

/*
 * 初始化顺序表（仅将 length 置零，不释放空间）
 * 成功返回 capacity，失败返回 -1
 */
int sqlist_clear(sqlist *l)
{
    if (l == NULL) {
        printf("初始化失败: 顺序表为空\n");
        return -1;
    }
    l->length = 0;
    printf("初始化完成\n");
    return l->capacity;
}

/*
 * 查询 pos 位置上的元素并返回
 * 失败返回 -1（因此 elemtype 不要存负数）
 */
elemtype sqlist_get(sqlist *l, int pos)
{
    if (l == NULL || l->array == NULL) {
        printf("顺序表为空,返回-1\n");
        return -1;
    }
    if (pos < 1 || pos > l->length) {
        printf("查询位置越界, 当前元素个数:%d\n", l->length);
        return -1;
    }
    printf("查询到第%d位的值\n", pos);
    return l->array[pos - 1];
}
/*
 * 查找 elem 首次出现的位置，返回位置编号
 * 未找到返回 0，顺序表错误返回 -1
 */
int sqlist_find(sqlist *l, elemtype elem)
{
    if (l == NULL || l->array == NULL) {
        printf("顺序表为空,返回-1\n");
        return -1;
    }
    for (int i = 0; i < l->length; i++) {
        if (l->array[i] == elem) {
            printf("查询到元素:%"ELEM_FMT" 位置:%d\n", elem, i + 1);
            return i + 1;
        }
    }
    printf("未查询到元素:%"ELEM_FMT"\n", elem);
    return 0;
}
/* ---- 内部删除：删除位置 pos，返回被删元素 ---- */
static inline elemtype delete_internal(sqlist *l, int pos)
{
    if (l == NULL || l->array == NULL || pos < 1 || pos > l->length) {
        return -1;
    }
    elemtype elem = l->array[pos - 1];
    for (int i = pos; i < l->length; i++) {
        l->array[i - 1] = l->array[i];
    }
    l->length--;
    return elem;
}


/*
 * 删除第一个值为 elem 的元素，返回其位置
 * 未找到返回 0，顺序表错误返回 -1
 */
int sqlist_delete(sqlist *l, elemtype elem)
{
    if (l == NULL || l->array == NULL) {
        printf("顺序表错误,返回-1\n");
        return -1;
    }
    for (int i = 0; i < l->length; i++) {
        if (l->array[i] == elem) {
            delete_internal(l, i + 1);
            printf("已删除元素:%"ELEM_FMT" 位置:%d\n", elem, i + 1);
            return i + 1;
        }
    }
    printf("未找到可删除的元素:%"ELEM_FMT"\n", elem);
    return 0;
}

/*
 * 删除所有值为 elem 的元素
 */
int sqlist_delete_all(sqlist *l, elemtype elem)
{
    if (l == NULL || l->array == NULL) {
        printf("顺序表错误,返回-1\n");
        return -1;
    }
    for (int i = 0; i < l->length; i++) {
        if (l->array[i] == elem) {
            delete_internal(l, i + 1);
            i--;             // 删除后回退，避免跳过前移的元素
        }
    }
    printf("已删除所有元素:%"ELEM_FMT"\n", elem);
    return 1;
}

/*
 * 删除 pos 位置上的元素
 */
int sqlist_delete_at(sqlist *l, int pos)
{
    if (l == NULL || l->array == NULL) {
        printf("顺序表错误,返回-1\n");
        return -1;
    }
    if (pos < 1 || pos > l->length) {
        printf("删除位置越界, 当前元素个数:%d\n", l->length);
        return -1;
    }
    elemtype deleted = delete_internal(l, pos);
    printf("已删除位置:%d 元素:%"ELEM_FMT"\n", pos, deleted);
    return 0;
}
/*
 * 在 pos 位置插入 elem
 * 容量满时自动扩容，成功返回位置，失败返回 -1
 */
int sqlist_insert(sqlist *l, int pos, elemtype elem)
{
    if (l == NULL || l->array == NULL) {
        printf("顺序表错误,返回-1\n");
        return -1;
    }
    if (pos < 1 || pos > l->length + 1) {
        printf("插入位置越界, 当前可插入范围:1~%d\n", l->length + 1);
        return -1;
    }
    if (l->capacity == l->length) {
        if (sqlist_expand(l, ADD) == NULL) {
            printf("扩容失败, 无法插入\n");
            return -1;
        }
        printf("已扩容, 增量:%d\n", ADD);
    }
    // 从最后一个元素开始后移，直到 pos 位置
    for (int i = l->length; i >= pos; i--) {
        l->array[i] = l->array[i - 1];
    }
    l->array[pos - 1] = elem;
    l->length++;
    printf("已插入:%"ELEM_FMT" -> 位置:%d\n", elem, pos);
    return pos;
}

/*
 * 销毁顺序表，释放所有内存并将调用方指针置 NULL
 */
int sqlist_destroy(sqlist **l)
{
    if (l == NULL || *l == NULL || (*l)->array == NULL) {
        printf("顺序表已释放或不存在\n");
        return -1;
    }
    printf("开始顺序表销毁\n");
    free((*l)->array);
    (*l)->array = NULL;
    free(*l);
    *l = NULL;
    printf("顺序表已销毁\n");
    return 1;
}

/*
 * 统计 elem 出现的次数
 */
int sqlist_count(sqlist *l, elemtype elem)
{
    if (l == NULL || l->array == NULL) {
        printf("顺序表错误,返回-1\n");
        return -1;
    }
    int count = 0;
    for (int i = 0; i < l->length; i++) {
        if (l->array[i] == elem)
            count++;
    }
    printf("元素:%"ELEM_FMT" 出现次数:%d\n", elem, count);
    return count;
}

/*
 * 找出 elem 所有出现的位置，存入 positions[]
 * 返回匹配个数（通过内部变量 count，遍历后打印）
 */
int sqlist_find_all(sqlist *l, elemtype elem, int positions[])
{
    if (l == NULL || l->array == NULL) {
        printf("顺序表错误,返回-1\n");
        return -1;
    }
    int count = 0;
    for (int i = 0; i < l->length; i++) {
        if (l->array[i] == elem) {
            positions[count] = i + 1;
            count++;
        }
    }
    printf("元素:%"ELEM_FMT" 出现位置: ", elem);
    for (int i = 0; i < count; i++) {
        printf("%d  ", positions[i]);
    }
    printf("\n");
    return count;  // 返回匹配个数
}
/*
 * 扩容：增加 add 个容量，保留原有数据
 * 成功返回 l，失败返回 NULL
 */
sqlist *sqlist_expand(sqlist *l, int add)
{
    if (l == NULL || l->array == NULL) {
        printf("扩容失败: 顺序表错误\n");
        return NULL;
    }
    elemtype *p = (elemtype *)malloc((l->capacity + add) * sizeof(elemtype));
    if (p == NULL) {
        printf("扩容失败: 内存不足\n");
        return NULL;
    }
    for (int i = 0; i < l->length; i++) {
        p[i] = l->array[i];
    }
    free(l->array);
    l->array    = p;
    l->capacity = l->capacity + add;
    printf("扩容完成, 新容量:%d\n", l->capacity);
    return l;
}

/*
 * 尾插：在顺序表末尾追加元素
 */
int sqlist_push_back(sqlist *l, elemtype elem)
{
    return sqlist_insert(l, l->length + 1, elem);
}

/*
 * 头插：在顺序表头部插入元素
 */
int sqlist_push_front(sqlist *l, elemtype elem)
{
    return sqlist_insert(l, 1, elem);
}

int sqlist_show(sqlist*l)
{
    if(l==NULL||l->array==NULL)
    {
        printf("展示的数组为空\n");
        return -1;
    }
    printf("--------------------------\n");
    printf("目前数组容器为:%d\n数组含有数据数量:%d\n",l->capacity,l->length);
    for(int i=0;i<l->length;i++)
    {
        printf("  %d  ",l->array[i]);
    }
    printf("\n");
    printf("--------------------------\n");
    return l->length;
}

/*
 * 排序：order='a' 升序, order='d' 降序
 * 非法 order 值返回 -1，不做任何排序
 */
int sqlist_sort(sqlist *l, char order)
{
    if (l == NULL || l->array == NULL) {
        printf("排序失败: 顺序表错误\n");
        return -1;
    }
    if (l->length <= 1) {
        printf("空表或单元素，无需排序\n");
        return 1;
    }

    /* 校验排序指令 */
    int descending;
    const char *dir;
    switch (order) {
    case 'a':
        descending = 0;
        dir = "升序";
        break;
    case 'd':
        descending = 1;
        dir = "降序";
        break;
    default:
        printf("排序指令错误: '%c' (请用 'a'=升序 / 'd'=降序)\n", order);
        return -1;
    }

    printf("开始%s排序...\n", dir);

    elemtype tmp;
    for (int i = 1; i < l->length; i++) {
        for (int j = 0; j < i; j++) {
            int need_swap;
            if (descending) {
                need_swap = (l->array[i] > l->array[j]);
            } else {
                need_swap = (l->array[i] < l->array[j]);
            }
            if (need_swap) {
                tmp          = l->array[i];
                l->array[i]  = l->array[j];
                l->array[j]  = tmp;
                printf("*");
            } else {
                printf("^");
            }
        }
        printf("\n");
    }
    printf("排序完成\n");
    return 1;
}

/*
 * 去除重复元素：保留第一次出现，删除后续重复
 */
void sqlist_dedup(sqlist *l)
{
    if (l == NULL || l->array == NULL) {
        printf("去重失败: 顺序表错误\n");
        return;
    }
    int removed = 0;
    for (int i = 1; i < l->length; i++) {
        for (int j = 0; j < i; j++) {
            if (l->array[i] == l->array[j]) {
                removed++;
                printf("发现重复:%"ELEM_FMT" 位置:%d 与 %d\n",
                       l->array[i], i + 1, j + 1);
                sqlist_delete_at(l, i + 1);
                i--;
                break;
            }
        }
    }
    printf("共去重 %d 项\n", removed);
}

/*
 * 将 src 的全部元素合并到 dest 末尾，src 不会被释放
 */
void sqlist_merge(sqlist *dest, sqlist *src)
{
    if (dest == NULL || src == NULL) {
        printf("合并失败: 顺序表错误\n");
        return;
    }
    printf("--- 合并开始 ---\n");
    // 确保 dest 有足够容量
    int needed = dest->length + src->length;
    while (dest->capacity < needed) {
        if (sqlist_expand(dest, ADD) == NULL) {
            printf("合并失败: 扩容不足\n");
            return;
        }
    }
    for (int i = 0; i < src->length; i++) {
        sqlist_push_back(dest, src->array[i]);
    }
    printf("--- 合并完成, 元素个数:%d ---\n", dest->length);
}
