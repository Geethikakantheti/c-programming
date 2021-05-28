#include<stdio.h>
int main()
{
int big,small,b_and,b_or,b_not,l_shift1,l_shift2,R_shift1,R_shift2;
printf("enter big &small values:\n");
scanf("%d%d",big,&small);
b_and=big&small;
printf("bitwise_and result is:%d",b_and);
b_or=big/small;
printf("bitwise-or result is:&d",b_or);
b_not=!big;
printf("bitwise_not result is:%d",b_not);
l_shift1=big<<1;
l_shift2=big<<2;
printf("lshift result is:%d%d",l_shift1,l_shift2);
R_shift1=small>>1;
R_shift2=small>>2;
printf("right shift result is: %d%d",R_shift1,R_shift2);
return 0;
}
