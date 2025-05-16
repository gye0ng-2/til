#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,cnt=0;
    int *p;
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
        if(p[i]==2)
            {
                cnt++;
                if(cnt==3){
                    printf("%d",i);
                    break;
                }
            }
        
    }

    return 0;
}