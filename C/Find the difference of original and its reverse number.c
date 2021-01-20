/*
Input:first line contains an integer F denoting the first number.

Output:an integer R denoting subtraction result of F-S

Constraints:n=4

1000=<F<=9999



Example:

9999

0
*/
#include<stdio.h>
#include<math.h>
int reverse(int n,int power, int real_power){
    static int sum_is = 0;
    if(power == 1)
        sum_is+=(n/power)*real_power;
    else{
        reverse(n%power,power/10,real_power*10);
        return sum_is+=(n/power)*real_power;
    }
}
int main()
{
   int F,S;
   scanf("%d",&F);
   S = reverse(F,pow(10,(int)log10(F)),1);
   printf("%d",F-S);
}
