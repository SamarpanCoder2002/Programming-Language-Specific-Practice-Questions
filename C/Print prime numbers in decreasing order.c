/*
Input:first line contain two integers N and M separated by space.

Output:contains all prime numbers P(i) available between N and M(including N and M)in decreasing order separated by space in a line.

Constraints:2<=N<=50000

2<=M<=50000

N != M

Example:

5 15

13 11 7 5
*/
#include<stdio.h>
int main(){
     int N,M;
     scanf("%d %d", &N, &M);
     if(N>M){
       N=N+M;
       M=N-M;
       N=N-M;
     }
     while(M>=N){
        int flag=1;
        for(int i=2;i<M;i++){
            if(M%i==0){
                flag=0;
                break;
            }
        }
        if(flag)
            printf("%d ",M);
        M--;
     }
     }
