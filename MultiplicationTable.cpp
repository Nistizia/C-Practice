#include <stdio.h>
int main(void) {
  
  int i;
  int num;
  int result;
  printf("Enter the number = ");
  scanf("%d",&num);
  printf("multiplication table %d\n",num);
  for(i=1;i<13;i++)
  {
    result = num * i;
    printf("%d x %2d = %2d\n",num,i,result);
  }
  return 0;
}
