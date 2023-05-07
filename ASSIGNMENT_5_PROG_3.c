#include <stdio.h>
int main()
{
    int N;
    printf("Enter the value upto which you want to print the Natural Numbers in Reverse Order ::\nN = ");
    scanf("%d",&N);
    printf("The First %d Natural Numbers in Reverse Order are as follows ::\n",N);
    for(int i=N;i>0;i--)
        printf("%d\n",i);
    return 0;
}

