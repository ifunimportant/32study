#include <stdio.h>
#include "sqlist.h"

int main(void)
{
    /* ---- 创建顺序表 s1 ---- */
    sqlist *s1 = sqlist_create();
    if (s1 == NULL) return -1;

    sqlist_push_front(s1, 12);
    sqlist_push_back(s1, 35);
    sqlist_insert(s1, 5, 45);
    sqlist_insert(s1, 3, 55);
    sqlist_insert(s1, 2, 66);
    sqlist_insert(s1, 5, 45);
    sqlist_show(s1);

    sqlist_insert(s1, 8, 66);
    sqlist_insert(s1, 6, 66);
    sqlist_insert(s1, 7, 66);

    /* 查找所有 66 的位置并删除第一个 */
    int n = sqlist_count(s1, 66);
    if (n > 0) {
        int positions[n];
        sqlist_find_all(s1, 66, positions);
        sqlist_delete_at(s1, positions[0]);
        sqlist_show(s1);
    }

    sqlist_sort(s1, 'a');   // 升序
    sqlist_show(s1);
    sqlist_sort(s1, 'd');   // 降序
    sqlist_show(s1);

    sqlist_delete_all(s1, 12);
    sqlist_push_front(s1, 67);

    /* ---- 创建顺序表 s2 ---- */
    sqlist *s2 = sqlist_create();
    if (s2 == NULL) return -1;

    sqlist_push_back(s2, 35);
    sqlist_insert(s2, 1, 85);
    sqlist_insert(s2, 2, 55);
    sqlist_insert(s2, 3, 52);
    sqlist_insert(s2, 3, 77);
    sqlist_show(s2);

    /* 合并 s2 到 s1 */
    sqlist_merge(s1, s2);
    sqlist_show(s1);

    /* 去重 */
    sqlist_dedup(s1);
    sqlist_show(s1);

    /* 展示 s2 后销毁 */
    sqlist_show(s2);
    sqlist_destroy(&s2);
    sqlist_show(s2);   // s2 应为 NULL，sqlist_show 会提示"为空"

    /* s1 继续使用 */
    sqlist_insert(s1, 3, 77);
    sqlist_sort(s1, 'd');
    sqlist_show(s1);

    /* 销毁 s1 */
    sqlist_destroy(&s1);

    return 0;
}
