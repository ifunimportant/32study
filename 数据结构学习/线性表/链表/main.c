#include <stdio.h>
#include "listnode.h"


int main()
{
  listnode *listtest=listnodecreate(521);
  listnode_tail_insert(&listtest,111);
  listnode_tail_insert(&listtest,111);
  listnode_tail_insert(&listtest,999);
  listshow(listtest); 
  printf("------------\n"); 
  listnodedelete(&listtest,1234);
  listnodedelete(&listtest,111);
  listshow(listtest);  
  listnodedelete(&listtest,521);
  listnodedelete(&listtest,999);
  listnodedelete(&listtest,111);
  listshow(listtest);  


}