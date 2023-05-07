#include <stdio.h>
int main()
{
    int N;
    printf("Enter the value upto which you want to print the Natural Numbers ::\nN = ");
    scanf("%d",&N);
    printf("The First %d Natural Numbers are as follows ::\n",N);
    for(int i=0;i<N;i++)
        printf("%d\n",i+1);
    return 0;
}
