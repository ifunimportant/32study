#include <stdio.h>
#include "sqlist.h"

int main(void)
{
    /* ---- 创建顺序表 s1 ---- */
    sqlist *s1 = createlist();
    if (s1 == NULL) return -1;

    listfrontinsert(s1, 12);
    listtailinsert(s1, 35);
    listinsertelem(s1, 5, 45);
    listinsertelem(s1, 3, 55);
    listinsertelem(s1, 2, 66);
    listinsertelem(s1, 5, 45);
    listshow(s1);

    listinsertelem(s1, 8, 66);
    listinsertelem(s1, 6, 66);
    listinsertelem(s1, 7, 66);

    /* 查找所有 66 的位置并删除第一个 */
    int n = listcountelem(s1, 66);
    if (n > 0) {
        int positions[n];
        listsearchallelem(s1, 66, positions);
        listdeletepos(s1, positions[0]);
        listshow(s1);
    }

    listsort(s1, 'a');   // 升序
    listshow(s1);
    listsort(s1, 'd');   // 降序
    listshow(s1);

    listdeleteall(s1, 12);
    listfrontinsert(s1, 67);

    /* ---- 创建顺序表 s2 ---- */
    sqlist *s2 = createlist();
    if (s2 == NULL) return -1;

    listtailinsert(s2, 35);
    listinsertelem(s2, 1, 85);
    listinsertelem(s2, 2, 55);
    listinsertelem(s2, 3, 52);
    listinsertelem(s2, 3, 77);
    listshow(s2);

    /* 合并 s2 到 s1 */
    listmerge(s1, s2);
    listshow(s1);

    /* 去重 */
    listremovedup(s1);
    listshow(s1);

    /* 展示 s2 后销毁 */
    listshow(s2);
    destroylist(&s2);
    listshow(s2);   // s2 应为 NULL，listshow 会提示"为空"

    /* s1 继续使用 */
    listinsertelem(s1, 3, 77);
    listsort(s1, 'd');
    listshow(s1);

    /* 销毁 s1 */
    destroylist(&s1);

    return 0;
}
