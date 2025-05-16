#include <stdio.h>
#include <stdlib.h>
int n;
void proc(int a, int b,int c, int *p)
{
    int i;
    if(a==1)
    {
        printf("%d\n",p[b-1]); // 0번째
    }
    else if(a==2)
    {
        for(i=0;i<n;i++)
        {
            if(p[i]==b)
            {
                printf("%d\n",i+1);
                return;
            }
        }
        printf("0\n");
    }
    else
    {
        for(i=b;i<=c;i++)
        {
            printf("%d ",p[i-1]);
        }
        printf("\n");
        
    }
}
int main() {
    int m,i;
    int a,b,c;
    int *p;
    int arr[100];
    scanf("%d %d",&n,&m);
    p=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&a);
        if(a==3)
        {
            scanf("%d %d",&b,&c);
        }
        else{
            scanf("%d",&b);
        }
        proc(a,b,c,p);
    }
    free(p);


    return 0;
}