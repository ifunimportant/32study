#ifndef _SQLIST_H_
#define _SQLIST_H_


/* ============================================================
   顺序表 —— 动态数组实现
   初始容量 MAX=5，满时自动扩容 ADD=2
   ============================================================ */

#define MAX       5
#define ADD       2
#define ELEM_FMT  "d"    // elemtype(int) 对应的 printf 格式符

typedef int elemtype;

typedef struct sqlist {
    int capacity;
    int length;
    elemtype *array;
} sqlist;

/* ---- 创建 / 销毁 ---- */
sqlist *sqlist_create(void);
int     sqlist_destroy(sqlist **l);
int     sqlist_clear(sqlist *l);

/* ---- 插入 ---- */
int     sqlist_insert(sqlist *l, int pos, elemtype elem);
int     sqlist_push_front(sqlist *l, elemtype elem);
int     sqlist_push_back(sqlist *l, elemtype elem);

/* ---- 删除 ---- */
int     sqlist_delete_at(sqlist *l, int pos);
int     sqlist_delete(sqlist *l, elemtype elem);
int     sqlist_delete_all(sqlist *l, elemtype elem);
void    sqlist_dedup(sqlist *l);

/* ---- 查询 ---- */
elemtype sqlist_get(sqlist *l, int pos);
int      sqlist_find(sqlist *l, elemtype elem);
int      sqlist_count(sqlist *l, elemtype elem);
int      sqlist_find_all(sqlist *l, elemtype elem, int pos[]);

/* ---- 工具 ---- */
sqlist  *sqlist_expand(sqlist *l, int add);
int      sqlist_sort(sqlist *l, char order);   // 'a'=升序, 'd'=降序
int      sqlist_show(sqlist *l);
void     sqlist_merge(sqlist *dest, sqlist *src);


/* ============================================================
   命名对照表

   新名                  旧名                  含义
   ─────────────────────────────────────────────────────────
   sqlist_create         createlist            创建顺序表
   sqlist_destroy        destroylist           销毁（释放内存）
   sqlist_clear          initlist              清空（仅置零长度）
   sqlist_insert         listinsertelem        按位置插入
   sqlist_push_front     listfrontinsert       头插
   sqlist_push_back      listtailinsert        尾插
   sqlist_delete_at      listdeletepos         按位置删除
   sqlist_delete         listdeleteelem        按值删除（首个匹配）
   sqlist_delete_all     listdeleteall         按值删除（全部匹配）
   sqlist_dedup          listdeleterepeat         去重
   sqlist_get            listquertelem / listsearchpos    按位置取值（合并同名函数）
   sqlist_find           listlocateelem        按值查位置（首个）
   sqlist_count          listcountelem         统计出现次数
   sqlist_find_all       listsearchelem        找出所有匹配位置
   sqlist_expand         expendsqlist          扩容
   sqlist_sort           listsort              排序 (a/d)
   sqlist_show           listshow              打印顺序表
   sqlist_merge          listmarge             合并顺序表
   ============================================================ */

#endif
