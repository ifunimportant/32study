#include <stdio.h>
#include "sqlist.h"

int main()
{
    sqlist*prt=createlist();
    initlist(prt);
    listfrontinsert(prt,12);
    listtailinsert(prt,35);
    listinsertelem(prt,5,45);
    listinsertelem(prt,3,55);
    listinsertelem(prt,2,66);
    listinsertelem(prt,5,45);
    listshow(prt);
    listinsertelem(prt,8,66);
    listinsertelem(prt,6,66);
    listinsertelem(prt,7,66);
    int n=listcountelem(prt,66);
    if(n>0)
    {
    int count[n];
    listsearchelem(prt,66,count);
    listdeletepos(prt,count[0]);
    listshow(prt);
    }
    listsort(prt,'s');
    listshow(prt);
    listsort(prt,'j');
    listshow(prt);
    listdeleteall(prt,12);
    listfrontinsert(prt,67);


    sqlist*sum=createlist();
    listtailinsert(sum,35);
    listinsertelem(sum,1,85);
    listinsertelem(sum,2,55);
    listinsertelem(sum,3,52);
    listinsertelem(sum,3,77);
    listshow(sum);
    listmarge(prt,sum);
    listshow(prt);
    listdeleterepeat(prt);
    listshow(prt);
    
    listshow(sum);
    //initlist(sum);
    destroylist(&sum);
    listshow(sum);
    listinsertelem(prt,3,77);
    listsort(prt,'j');
    listshow(prt);

    return 0;
}
