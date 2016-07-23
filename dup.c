#include<stdio.h>
#include<math.h>
void dup(int a[], int s)
{
  int i;
  for (i = 0; i < s; i++)
  {
    if(a[abs(a[i])] >= 0)
      a[abs(a[i])] = -a[abs(a[i])];
    else
      printf(" %d ", abs(a[i]));
  }
}
 
int main()
{
  int a[] = {3,1,2,3};
  int size = sizeof(a)/sizeof(a[0]);
  dup(a,size);
  getchar();
  return 0;
}
