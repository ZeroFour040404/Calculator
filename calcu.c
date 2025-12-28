// calculator

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

double mdas(double a, char opr, double b);

int main()
{
    double a, b = 0.00;
    char opr = '\0';
    int count = 1;
        printf("*****CALCULATOR*****\nUse +, -, x, /, ^, \\ to carry operations\n");

        do {
            if(count == 1){
                scanf("%lf", &a);
            }
            scanf(" %c", &opr);
            scanf(" %lf", &b);
            a = mdas(a, opr, b);
            printf( "%.2lf", a);
            count++;
        } while(opr != '=');
    return 0;
}

double mdas(double a, char opr, double b){
    double ans = 0.0;

    switch(opr)
    {
        case 'x':
            ans = a * b;
            break;
        case '/':
            ans = a / b;
            break;
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '^':
            ans = pow(a, b);
            break;
        case '\\':
            ans = pow(a, b);
            break;
    }
    return ans;
}