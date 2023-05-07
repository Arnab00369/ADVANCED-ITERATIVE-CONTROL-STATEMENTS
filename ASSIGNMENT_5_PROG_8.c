#include <stdio.h>
int main()
{
    int N;
    printf("Enter the value upto which you want to print the Squares of Natural Numbers ::\nN = ");
    scanf("%d",&N);
    printf("The Squares of First %d Natural Numbers are as follows ::\n",N);
    for(int i=1;i<=N;i++)
        printf("Square of %d\t= %d\n",i,i*i);
    return 0;
}



