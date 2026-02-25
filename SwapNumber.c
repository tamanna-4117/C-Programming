#include <stdio.h>
int main()
{
    int n1,n2,temp;

    printf("Enter two values: ");
    scanf("%d %d",&n1,&n2);

    printf("Before Swapping : a=%d , b=%d\n",n1,n2);

    temp=n1;
    n1=n2;
    n2=temp;

    printf("After Swapping : a=%d , b=%d",n1,n2);

    return 0;
}