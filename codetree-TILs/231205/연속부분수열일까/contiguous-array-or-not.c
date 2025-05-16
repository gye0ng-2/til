#include <stdio.h>
#include <stdlib.h>
void input(int *p,int k)
{
    int i;
    for(i=0;i<k;i++)
    {
        scanf("%d",&p[i]);//
    }
}
/*int fun(int *x,int *y,int n, int m)
{
    int i,j,start=0;//
    for(i=0;i<n;i++)
    {
        if(x[i]==y[0])
        {
            start=i;
            break;
        }
    }
    for(i=start+1;i<n;i++)
    {
        if(x[i]!=y[i-start]) 
        {
            return 0;
        }
    }
    return 1;
}*/
int fun(int *x, int *y, int n, int m)
{
    int i,j;
    int flag=0;

    for(i=0;i<n;i++)
    {
        flag=1;
        for(j=1;j<m;j++)
        {
            if(i+j>=n)
            {
                flag=0;
                break;
            }
            if(x[i+j]!=y[j])
            {
                flag=0;
                break;
            }
            if(j==m)
            {
                break;
            }
        }

    }
}
int main() {
    int n,m;
    int i,j;
    int sw;
    int *p1,*p2;
    scanf("%d %d",&n,&m);
    p1=(int *)malloc(sizeof(int)*n);
    p2=(int *)malloc(sizeof(int)*m);
    input(p1,n);
    input(p2,m);
    sw = fun(p1,p2,n,m);
    if(sw==1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    free(p1);
    free(p2);

    return 0;
}