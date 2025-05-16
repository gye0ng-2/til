#include <stdio.h>
void sort(int a[],int len);
void swap(int *x,int *y); //생략 가능
int main() {
    int n,i;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void sort(int a[],int len)
{
    int i,j;
    for(i=0;i<len-1;i++)//선택위치
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i]<a[j])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
}