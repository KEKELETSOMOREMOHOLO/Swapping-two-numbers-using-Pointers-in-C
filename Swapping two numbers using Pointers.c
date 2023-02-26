#include<stdio.h>
swap(int *p, int *p)
  int main()
{
  int a,b;
  printf("Enter values for a and b\n");
  scanf("%d%d",&a,&b);
  printf("Before swapping: a = %d and b = %d \n",a,b);
  swap(&a,&b);
  printf("After swapping: a = %d and b = %d \n");
  return 0;
}

swap(int *px,int *py)
{
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}
