#include <stdio.h>

int main()
{
    int a[5], b[5], c[5];
    int *p1, *p2, *p3;
    int i;

    p1 = a;
    p2 = b;
    p3 = c;

    printf("Enter first array:\n");
    for(i=0;i<5;i++)
    scanf("%d",*p1+i);

    printf("Enter second array:\n");
    for(i=0;i<5;i++)
    scanf("%d",*p2+i);

    for(i=0;i<5;i++)
    *(p3+i)=*(p1+i)+*(p2+i);

    printf("Sum Array:\n");

    for(i=0;i<5;i++)
    printf("%d ",(*p3+i));

    return 0;
}
