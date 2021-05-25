#include<stdio.h>
void main()
{
  int var1;
  var1=19;
  printf("var1 value is : %d",var1);
   {
    int var2;
    var2=29;
    printf("var2 local variable val is :%d",var2);
    printf("var1 inside block is:%d",var1);'
    }
  printf("var2  value outside the block is : %d",var1);
  printf("var2  value outside the block is : %d",var2);
}
