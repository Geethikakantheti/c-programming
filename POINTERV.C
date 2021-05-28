#include<stdio.h>
int main()
{
int a;
int *ptr1;
int **ptr2;
int ***ptr3;
 ptr1=&a;
 ptr2=&ptr1;
 ptr3=&ptr2;
 printf("\n address of normal variable 'a'=%u\n",ptr1);
 printf("address of pointer variable '*ptr1'=%u\n",ptr2);
 printf("addressof pointer_to_pointer '**ptr2'=%u\n",ptr3);
 return 0;
 }