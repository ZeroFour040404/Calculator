// calculator

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

double a, b, ans = 0.00;
char opr = '\0';
char eql = '\0';


double mdas(double, char, double)
{
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
    }

    return ans;
}

int main()
{
        printf("*****CALCULATOR*****\n");
        scanf( "%lf", &a);
        scanf( "%c", &opr);
        scanf( "%lf", &b);
        scanf( "%c", &eql);
        mdas(a, opr, b);
        printf( "%lf\n", ans);
        if(eql == '='){
            printf( "%lf\n", ans);
            return 0;
        }

        while(eql != '=')
        {
            ans = a;
            printf( "%c", eql);
            switch(eql){
            case '+':
                opr = '+';
                break;
            case '-':
                opr = '-';
                break;
            case 'x':
                opr = 'x';
                break;
            case '/':
                opr = '/';
                break;
            default:
                break;
            }
            b = 0;
            scanf( "%lf", &b);
            mdas(a, opr, b);
            printf( "%lf", ans);
            scanf( "%c", &eql);
        }



    return 0;
}