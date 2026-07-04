#include <stdio.h>

void check(int num)
{
    if(num % 5 == 0)
    printf("Divisible by 5");
    else
    printf("Not Divisible by 5 /n ");
        
    if(num% 3==0)
	printf("Divisible by 3");
	else
	printf("Not Divisible by 3");    
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    check(num);

    return 0;
}
