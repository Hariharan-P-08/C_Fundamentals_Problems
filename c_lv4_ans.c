//1D_ARRAY
#include<stdio.h>
 int main()
{
    int count0=0,count1=0,i;  //1
    int a[10];
    printf("enter no's:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0) count0++;
        else count1++;
    }
    printf("total no of even no's:%d\n",count0);
    printf("total no of odd no's:%d\n",count1);
}

{
 int i,j,k,sum0=0,sum1=0,sum2=0; //2
 int a1[5];
 printf("enter first array no's:\n");
 for(i=0;i<5;i++)
{
    scanf("%d",&a1[i]);
    sum0=sum0+a1[i];
}
 int a2[5];
 printf("enter second array no's:\n");
 for(j=0;j<5;j++)
{
    scanf("%d",&a2[j]);
    sum1=sum1+a2[j];
}
 int a3[5];
 for(k=0;k<5;k++)
{
   a3[k]=a1[k]+a2[k];
   sum2=sum2+a3[k];
   printf("a3[%d]=%d\n",k,a3[k]);
}
 printf("third array no's:\n");
  for(k=0;k<5;k++)
  {
    printf("%d ",a3[k]);
  }
    printf("\n");
    printf("sum of a1=%d\n",sum0);
    printf("sum of a2=%d\n",sum1);
    printf("sum of a3=%d\n",sum2);
}
