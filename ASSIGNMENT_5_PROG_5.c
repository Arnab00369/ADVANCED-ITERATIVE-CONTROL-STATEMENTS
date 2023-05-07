#include <stdio.h>
int main()
{
    int a,b=-1,c,n;
    {
    printf("Enter the value upto which you want to print the Odd Natural Numbers in Reverse Order ::\nN = ");
    scanf("%d",&n);
    printf("The First %d Odd Natural Numbers in Reverse Order ::\n",n);
    {
     for(a=1;a<=n;a++)
    {
        b+=2;
    }
    c=b;
    for(a=1;a<=n;a++)
    {
        printf("%d\n",c);
        c-=2;
    }
    }
    }
    return 0;
}
