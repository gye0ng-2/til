#include <stdio.h>
#include <string.h>

int main() {
    char str[2][100];
    int i;
    int len=0;
    for(i=0;i<2;i++)
    {
        scanf("%s",str[i]);
        len+=strlen(str[i]);
    }
    printf("%d",len);
    return 0;
}