/*
Statement:Prime numbers are those natural numbers which can have only two integer factors, 1 and the number itself. 1 is neither Prime nor composite. You have to write a code to print first N prime numbers.

Input:first line contains an integer N.

Output:print prime numbers each separated by a space.

Constraints:1<=N<=10000

Example:

5

2 3 5 7 11
*/
// Here I done it by Sieve of Eratothenes method
#include<stdio.h>
#include<string.h>
int main()
{
  int n; //you can create variables here
  scanf("%d",&n);
  //start your code from here
  int primes[10000+1];
  memset(primes,1,10000+1);
  int start = 2;
  while(start*start<=10000+1){
      for(int j=start*start;j<=10000+1;j=j+start)
        primes[j]=0;
      start++;
  }
  int i=2;
  while(n){
    if(primes[i]){
      printf("%d ",i);
  	  n--;
    }
    i++;
  }
return 0;
}
