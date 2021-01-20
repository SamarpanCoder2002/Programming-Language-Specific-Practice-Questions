/*
Input:first line contain an integer N denoting number of elements in list/array.

second line contains N unique integers denoting elements of list/array.

Output:contains two integers G S  separated by space denoting greatest and smallest element of list L.

Constraints:5<=N<=20

take array of size 20.

Example:

5

50 1 72 18 23

72 1
*/
#include<stdio.h>
int find(int *p, int size, int ind)//remove blank and fill arguments here
{
  //write your code here
  if(ind){
    int max=p[size-1];
    for(int i=0;i<size;i++){
      if(max<p[i])
        max=p[i];
    }
   return max;
  }
  else{
    int min=p[0];
    for(int i=0;i<size;i++){
      if(min>p[i])
        min=p[i];
    }
   return min;
  }
}

main()
{
   //Declare variables here
  int N;
  int *p;
  scanf("%d",&N);
  p = (int*)malloc(sizeof(int)*N);
  for(int i=0;i<N;i++)
    scanf("%d",&p[i]);
  printf("%d %d",find(p,N,1),find(p,N,0));
  free(p);
  //rest code here
}

