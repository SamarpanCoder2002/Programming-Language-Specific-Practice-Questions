/*
Note:while converting digit into word starts each word with capital letter in output and N should only be 5 digit number.

Input:one integer N from STDIN.

Output:print all the digits of numbers in words separated by space

Constraints:10000<=N<=99999

N=5

Example:

31265

Three One Two Six Five
*/
int main()
{
  int N;
  scanf("%d",&N);
  int power = 10000;
  while(power){
    switch(N/power){
      case 0:
        printf("Zero ");
        break;
      case 1:
        printf("One ");
        break;
      case 2:
        printf("Two ");
      	break;
      case 3:
        printf("Three ");
        break;
      case 4:
        printf("Four ");
        break;
      case 5:
        printf("Five ");
        break;
      case 6:
        printf("Six ");
        break;
      case 7:
        printf("Seven ");
        break;
      case 8:
        printf("Eight ");
        break;
      case 9:
        printf("Nine ");
        break;
    }
    N=N%power;
    power=power/10;
  }
}
