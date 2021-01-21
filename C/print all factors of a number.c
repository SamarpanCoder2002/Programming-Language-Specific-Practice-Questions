/*
Statement:Any  number we divide using formula  "dividend ÷ divisor =quotient". For Example,12 ÷ 3 = 4, here 12 is dividend 3 is the divisor and 4 is quotient.

If we divide 12 by 5 like12 ÷ 5then quotient will be 2 but we also get remainder= 2. So here 5 is also a divisor of 12 but it is not dividing 12 completely.

A factor is a special divisor that divides an integer completely (remainder should be zero).

So, your task is to write a program such that it finds all the factors F(i) (including1 and N) of a number N and print them strictly in increasing order.

Input:first line contains an integer N from STDIN.

Output:print all factors F(i) of N in increasing order each separated by a space

Constraints:1<=N<=10000

Example:

4

1 2 4
*/
#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  for(int i=1;i<=N;i++){
    if(N%i==0)
      printf("%d ",i);
  }
}
