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

    printf("叫块计1:\n");
    scanf("%d", &num1);
    printf("叫块计2:\n");
    scanf("%d", &num2);

    int anser = get_divisor(num1,num2);

    printf("程そ计:%d", anser);

    return 0;
}