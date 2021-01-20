/*Input:one integer N from STDIN

Output:print first N Fibonacci numbers F(i) in reverse order each separated by space.

Constraints:1<=N<=100

Example:

3

1 1 0
*/

#include<stdio.h>
int fibo(int *p, int term){
   if(term == 0)
     return p[0];
   else if(term == 1)
     return p[1];
   return fibo(p,term-1) + fibo(p,term-2);
}
int main()
{
  int N;
  scanf("%d",&N);
  int *p = (int*)calloc(sizeof(int),N);
  p[0]=0;p[1]=1;
  for(int i=N-1;i>=0;i--){
    if(i>1)
    	p[i] = fibo(p,i);
    printf("%d ",p[i]);
  }
  return 0;
}
