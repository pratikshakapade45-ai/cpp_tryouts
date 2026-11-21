#include<stdio.h>

int check(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(check(num) == 1)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    return 0;
}

int check(int x)
{
    if(x % 2 == 0)
    {
        return 1; // 1 represents even
    }
    else
    {
        return 0; // 0 represents odd
    }
}
