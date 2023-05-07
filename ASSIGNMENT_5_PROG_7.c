#include <stdio.h>
int main()
{
    int a,b=0,c,n;
     printf("Enter the value upto which you want to print the Even Natural Numbers in Reverse Order ::\nN = ");
    scanf("%d",&n);
    printf("The First %d Even Natural Numbers in Reverse Order ::\n",n);
   for(a=0;a<n;a++)
    {
      b+=2;
    }
    c=b;

    for(a=0;a<n;a++)
    {
        printf("%d\n",c);
        c-=2;
    }
    return 0;
}
