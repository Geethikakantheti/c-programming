#include<stdio.h>
int main()
{
int w,x,y,z,result;
w=x=y=z=1;
printf("given w=%d,x=%d,y=%d,andz=%d,\n",w,x,y,z);
result=++x;
printf("++x gives:%d\n",result);
result=x++;
printf("x++gives :%d\n",result);
result=--y;
printf("--y gives:%d\n",result);
result=z--;
printf("z--gives:%d\n",result);
return 0;
}
