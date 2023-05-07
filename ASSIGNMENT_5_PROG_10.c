#include <stdio.h>
int main()
{
    int N;
    printf("Enter the Number whose Table you want to print ::\nN = ");
    scanf("%d",&N);
    printf("The Table of %d is as follows ::\n",N);
    for(int i=1;i<=10;i++)
        printf("%d * %d\t= %d\n",N,i,N*i);
    return 0;
}




