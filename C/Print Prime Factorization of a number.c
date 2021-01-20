/*
Input:first line contain an integer N  from STDIN

Output:sequence of P(i) in increasing order separated by space (sequence of P(i) should form N if we multiply them together)

Constraints:2<=N<=10000

Example:

Example 1

40

2 2 2 5

Example 2

15

3 5
*/
#include<stdio.h>
int main()
{
  //declare variable here
  int N;
  scanf("%d",&N);
  int i=2;
  while(1){
    if(N==1)
      break;
    if(N%i==0){
      printf("%d ",i);
      N = N/i;
    }
   else
     i++;
  }
  return 0;
  //write your code here
}

