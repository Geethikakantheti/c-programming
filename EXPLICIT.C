#include<stdio.h>
int main()
{
 int x=7,y=5;
 float z;
 z=x/y;
 printf("%f",z);
 z=(float)x/(float)y;
 printf("%f",z);
 return 0;
 }