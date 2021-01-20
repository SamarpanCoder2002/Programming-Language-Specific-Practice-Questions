/*
For Example, complete divisors or factor of 6 is 1 2 and 3 and sum of 1+2+3 is 6 itself so 6 is a perfect number.

The first few of these perfect numbers are 6, 28, 496, and 8128.

your task is to write a program to accept a number N and find N is perfect number or not if N is a perfect number print 1 if N is not a perfect number print -1.

Input:one integer value N from STDIN

Output:if N is perfect number print 1 if N is not a perfect number print -1.

Constraints:1<=N<=10000

Example:

6

1
*/
#include<stdio.h>
int main() {
  int N,sum=0;
  scanf("%d",&N);
  for(int i=1;i<=N/2;i++){
    if(N%i==0)
      sum+=i;
  }
  if(N==sum)
    printf("1");
  else
    printf("-1");
}
