#include<stdio.h>
int main()
{
    int i,j,n1,n2;
    int a[10][10],sum=0;
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(i==j||j==n1-1-i)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}