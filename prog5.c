//10 9 8 7 6
//_  9 8 7 6
//_  _ 8 7 6
//_ _ _ _ 7 6
//_ _ _ _ _ 6
#include <stdio.h>
int main()
{
    int i,j;

    for(i=10;i>=6;i--)
    {
        for(j=10;j>=i;j--)
        printf("_ ");

        for(j=i;j>=6;j--)
        printf("%d ",j);

        printf("\n");
    }
    return 0;
    
}
