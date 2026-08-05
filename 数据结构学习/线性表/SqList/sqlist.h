#ifndef _SQLIST_H_
#define _SQLIST_H_

/* ============================================================
   顺序表 —— 动态数组实现
   初始容量 MAX=5，满时自动扩容 ADD=2
   ============================================================ */

#define MAX       5      // 初始容量
#define ADD       2      // 每次扩容增量
#define ELEM_FMT  "d"    // elemtype(int) 对应的 printf 格式符，用法: printf("%"ELEM_FMT, val)

typedef int elemtype;

typedef struct sqlist {
    int capacity;         // 已分配空间大小
    int length;           // 当前元素个数
    elemtype *array;      // 数据指针
} sqlist;

/* ---- 创建 / 销毁 ---- */
sqlist *createlist(void);
int     destroylist(sqlist **l);
int     initlist(sqlist *l);

/* ---- 插入 ---- */
int     listinsertelem(sqlist *l, int pos, elemtype elem);
int     listfrontinsert(sqlist *l, elemtype elem);
int     listtailinsert(sqlist *l, elemtype elem);

/* ---- 删除 ---- */
int     listdeletepos(sqlist *l, int pos);
int     listdeleteelem(sqlist *l, elemtype elem);
int     listdeleteall(sqlist *l, elemtype elem);
void    listremovedup(sqlist *l);

/* ---- 查询 ---- */
elemtype listqueryelem(sqlist *l, int pos);                     // 按位置取值
int      listlocateelem(sqlist *l, elemtype elem);              // 按值找首个位置，找不到返回0
int      listsearchpos(sqlist *l, int pos);                     // 按位查询并打印
int      listcountelem(sqlist *l, elemtype elem);               // 统计 elem 出现次数
int      listsearchallelem(sqlist *l, elemtype elem, int pos[]); // 找出所有匹配位置存入 pos[]

/* ---- 工具 ---- */
sqlist  *expendsqlist(sqlist *l, int add);
int      listsort(sqlist *l, char order);   // 'a'=升序, 'd'=降序
int      listshow(sqlist *l);
void     listmerge(sqlist *dest, sqlist *src);

#endif
