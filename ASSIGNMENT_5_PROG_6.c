#include <stdio.h>
int main()
{
    int N,b=2;
    printf("Enter the value upto which you want to print the Even Natural Numbers ::\nN = ");
    scanf("%d",&N);
    printf("The First %d Even Natural Numbers are as follows ::\n",N);
    for(int i=1;i<=N;i++)
    {
        printf("%d\n",b);
        b+=2;
    }
    return 0;
}


