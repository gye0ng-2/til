#include <stdio.h>
#include <string.h>
void sort(char a[],int len);
void swap(char *x,char *y); //생략 가능
int main() {
    int n,i;
    char arr[100];
    
    scanf("%s",arr);
    n=strlen(arr);
    
    sort(arr,n);
    
    for(i=0;i<n;i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}
void swap(char *x,char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void sort(char a[],int len)
{
    int i,j;
    for(i=0;i<len-1;i++)//선택위치
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i]>a[j])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
}