#include <iostream>
#include <stdio.h>

using namespace std;

int get_divisor(int a, int b)
{
    int x,y,i,j;
    if (a>b){
        x = a;
        y = b;
    }
    else{
        x = b;
        y = a;
    }

    if (x!=0 && y!=0){
        while (i!=0){
            i = x%y;
            x = y;
            if (i==0)
                return y;
            y = i;
        }
    }

    return 0;
}

int main()
{
    int num1,num2;

    printf("�п�J�Ʀr1:\n");
    scanf("%d", &num1);
    printf("�п�J�Ʀr2:\n");
    scanf("%d", &num2);

    int anser = get_divisor(num1,num2);

    printf("�̤j���]��:%d", anser);

    return 0;
}