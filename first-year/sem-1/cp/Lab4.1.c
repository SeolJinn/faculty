#include <stdio.h>
#include <math.h>

/*void HexPrint(int n)    // I did it agan without recursion below (As requested)
{
    int x;
    x=n%16;
    if(n/16!=0)
        HexPrint(n/16);
    if(x<10)
        printf("%d",x);
    else
        putchar('A'+x-10);
}*/

void HexPrint(int n)
{
    int p=0,aux=n,x;
    while(aux/16!=0)
    {
        aux=aux/16;
        p++;
    }
    while(p>=0)
    {
        x=n/(pow(16,p));
        x=x%16;
        if(x<10)
            printf("%d",x);
        else
            printf("%c",'A'+x-10);
        p--;
    } 
}

int main()
{
    HexPrint(168952);
    return 0;
}