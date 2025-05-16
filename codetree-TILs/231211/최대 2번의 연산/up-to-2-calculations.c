#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        a = a/2;
        if(a%2==1)
        {
            a = (a+1)/2;
            printf("%d",a);
        }
        else
        {
            printf("%d",a);
        }
    }
    else if(a==1)
    {
        printf("%d",1);
    }
    return 0;
}