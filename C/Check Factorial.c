/*
in this problem you should accept a number N and check whether accepted number N belongs to factorial of any number M or not. If N is factorial of M print M otherwise print -1.

Special Case:please note that 1 is factorial of 0 as well as 1 so your program should capable to print these two numbers 0 and 1 in increasing order if N=1.

Input:first line contains an integer N from STDIN

Output:contains an integer M, denoting N is factorial of M and if unbale to found M print -1.

Constraints:2<=N<=500000

Example:

Example 1

120

5

Example 2

25

-1
*/
#include<stdio.h>
#include<stdlib.h>
int find_fact(int *p,int n){
    int fact=1;
    while(n>1){
      if(p[n-1]!=0){
        fact *= p[n-1];
        break;
      }
      fact *= n;
      n--;
    }

  return fact;
}
int main()
{
  int N,*p;
  scanf("%d",&N);
  if(N==0)
    printf("1");
  else if(N==1)
    printf("0 1");
  else{
    int i;
    p = (int*)calloc(sizeof(int),10);// Using Dynamic Programming
    for(i=1;i<=10;i++){
         int take = find_fact(p,i);
       	 if(take==N){
         	printf("%d",i);
         	break;
        	}
      	 p[i-1] = take;
    }
    if(i>10)
      printf("-1");
  }
  free(p);
  return 0;
}

