/* 1.an array A of length N and an integer  K, choose two elements at index j and i such that
- index j > index i
- (j-i)%k=0
print the maximum possible value of [Ai - Aj].
I/P: 6, 2 (N and K)
     : {-1 3 4 -2 5 9} (Elements of an array A)
O/P: 11  */

#include <stdio.h>
#include <limits.h>
int main () {
  int a[] = {-1, 3, 4, -2, 5, 9};
  int K = 2,i,j;
  int N = sizeof(a) / sizeof(a[0]);
  int diff = 0;
  for (i = 0; i < N; i++) 
  {
    for ( j =  1; j < N; j++) 
    {
      if ((j - i) % K == 0) 
      {
       printf("1_if_i = %d   j = %d\n",i,j);
        if (a[i] - a[j] > diff) 
        {
          printf("2_if_i = %d   j = %d\n",i,j);  
          diff = a[i] - a[j];
          printf("diff = %d\n",diff);
        }
      }
    }
  }  
  printf("%d\n", diff);
  return 0;
}
