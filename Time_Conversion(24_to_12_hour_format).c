#include<stdio.h>
int main()
{
    char str[100];
    int sum=0;
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=':';i++)
    {
        sum=sum*10+(int)str[i]-'0';
    }
     if(sum==0)
     {
         printf("12:00 AM");
     }
     else if(sum<12)
     {
         printf("%s AM",str);
     }
     else if(sum==12)
     {
         printf("%s PM",str);
     }
     else if(sum>12 && sum<22)
     {
         printf("0");
         sum=sum-12;
         printf("%d:%c%c PM",sum,str[3],str[4]);
     }
     else
     {
          sum=sum-12;
         printf("%d:%c%c PM",sum,str[3],str[4]);
     }
}