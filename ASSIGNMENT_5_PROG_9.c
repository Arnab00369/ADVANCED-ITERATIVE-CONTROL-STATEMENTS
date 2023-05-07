#include <stdio.h>
int main()
{
    int N;
    printf("Enter the value upto which you want to print the Cubes of Natural Numbers ::\nN = ");
    scanf("%d",&N);
    printf("The Cubes of First %d Natural Numbers are as follows ::\n",N);
    for(int i=1;i<=N;i++)
        printf("Cube of %d\t= %d\n",i,i*i*i);
    return 0;
}




