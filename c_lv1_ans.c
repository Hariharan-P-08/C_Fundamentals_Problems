//C PROGRAMMING LV-1 ANSWERS (B)
#include <stdio.h>
int main()
{
    int a,sum,sum1,sum2;  //12
    printf("enter a no:");
    scanf("%d",&a);
    sum=a/100; //5
    sum1=(a%100)/10; //6
    sum2=a%10; //2
    printf("%d %d %d \n",sum,sum1,sum2);
    printf("%d",sum+sum1+sum2);
}

{
    int a,b; //13
    printf("enter a no:")                             ;
    scanf("%d",&a);
    b=a%10;
    int c;
    c=a/10;
    printf("%d%d",b,c);
}
{
    int a,b,c,d; //14
    scanf("%d",&a);
    b=a/100;
    c=(a%100)/10;
    d=a%10;
    printf("%d%d%d",d,c,b);
}
{
    int a,b,q,f,s; //15
    scanf("%d",&a);
    q=a/100;
    f=a%100;
    s=f/10;
    b=f%10;
    printf("%d%d%d",q,b,s);
}
{
    int a,b,c,d,e; //16
    scanf("%d",&a);
    b=a/100;
    c=b/10;
    d=b%10;
    e=a%100;
    printf("%d%d%d",d,c,e);
}
{
    int a,f;  //17
    scanf("%d",&a);
    f=(a/10)*10;
    printf("%d",f);
}
{
 int a,f; //18
 scanf("%d",&a);
 f=a%10;
 int d=10;
 printf("%d",f+d);
}
{
    int a,b,c,d; //19
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=c/10;
    printf("%d%d2",b,d);
}
{
    int a,b,c,d,e; //20
    scanf("%d",&a);
    b=a/100;
    c=(b/10)*0;
    e=a%100;
    d=e%10;
    printf("%d%d%d",b,c,d);
}
{
    int a,b; //21
    scanf("%d",&a);
    b=a-5*a%2;
    printf("%d",b);
}
{
    int a,b,c; //22
    scanf("%d",&a);
    c=(a/10)%10;
    b=a-5*(c%2);
    printf("%d",b);
}
{
    int a,b,c,d,e; //23
    scanf("%d",&a);
    b=(a/10)%10;
    c=a%10;
    d=b+c;
    e=a-5*(d%2);
    printf("%d",e);
}
{
    int a,b,c,d,e; //24
    scanf("%d",&a);
    //b=a-5;
    c=a/100;
    d=a%10;
    e=a-5*(c==d);
    printf("%d %d %d",c,d,e);
}
{      
    int a,b,c,d,e; //25
    scanf("%d",&a);
    b=(a%100);
    c=b/10;
    d=(a/100)%10;
    e=a-5*(c==d);
    printf("%d",e);
    
}
{
  int a,b,c,d; //26
  scanf("%d",&a);
  b=a/10;
  c=a%10;
  d=b+c;
  if(d==10)
  printf("success");
  else
  printf("failure");
}
{
  int a,b,c,d,e; //27
  scanf("%d",&a);
  e=a/100;
  b=(a/10)%10;
  c=a%10;
  d=b+c+e;
  if(d==10)
  printf("success");
  else
  printf("failure");
}
{
    int a,b,c,d; //28
    scanf("%d",&a);
    b=a/100;
    c=b%10;
    d=b+c;
    printf("%s", (d == 10) ? "Success" : "Failure");
}
{
    int a,b,c,d,e; //29
    scanf("%d",&a);
    b=(a/100)%10;
    c=(a/10)%10;
    d=b+c;
    printf("%s",d>10 ? "success" : "failure");
}
{
    int a,b,c,d,e,f; //30
    scanf("%d",&a);
    b=(a/1000)%10; //1000
    c=(a/100)%10; //100
    d=(a/10)%10; //10
    e=(a%10); //ones
    f=b+c;
    printf("%s",(f==10 && (b>7 || c>7 || d>7 || e>7)) ? "success" : "failure");
}
{
    int a,b,c,d,e,f,g,h; //31
    scanf("%d",&a);
    b=(a/100)%10;
    c=(a/10)%10;
    d=a%10;
    e=b+c+d;
    if(e>=10)
    {
        f=(e/10);
        g=(e%10);
        e=f+g;
    }
    printf("%d",e);
}
{
    int x,y;
    printf("Enter Number :");
    scanf("%d",&x);
    int ones,tens,hundreds,sum;
    ones = x % 10;
    tens = (x / 10) % 10;
    hundreds = x/100;
    sum = ones + tens+hundreds;
    if(sum < 10)
    printf("%d",sum);
    else
    {
      ones = sum % 10;
        tens  = sum/10;
        sum = ones + tens;
         if(sum < 10)
           printf("%d",sum);
            else
            {
             ones = sum % 10;
             tens  = sum/10;
             sum = ones + tens;
             printf("%d",sum);
            }
    }
}
{
    int a,b,c; //32
    printf("enter a no 1:");
    scanf("%d",&a);
    printf("enter a no 2:");
    scanf("%d",&b);
    c=a+b;
    if(c<100)
    {
       printf("%d",c); 
    }
    else
    {
        printf("%d",abs(a-b)); //for abs we must use #include<stdlib.h> library
    }
}
{
    int a,b,c,d,e,f; //33
    scanf("%d%d",&a,&b);

    c = a/10;
    d = a%10;

    e = b/10;
    f = b%10;

    if(a > b)
        printf("%d", c+d);
    else
        printf("%d", e+f);
}
{
    int a,b,c,d,e,f,g,h; //34
    printf("enter no 1:");
    scanf("%d",&a);
    printf("enter a no2:");
    scanf("%d",&b);
    c=(a/10)%10; //t
    d=(a/100);
    e=a%10;
    f=(b/10)%10; //t
    g=(b/100);
    h=b%10;
    if(c>f)
        printf("%d",abs(d-e));
    else
        printf("%d",abs(g-h));
}
{
    int a,b,ha,ta,oa,hb,tb,ob; //35
    printf("enter no 1:");
    scanf("%d",&a);
    printf("enter no 2:");
    scanf("%d",&b);
    
    ha=(a/100);
    ta=(a/10)%10;
    oa=a%10;
    
    hb=(b/100);
    tb=(b/10)%10;
    ob=b%10;
    
    if(ha+oa>hb+ob)
    printf("%d",ha+ta+oa);
    else
    printf("%d",hb+tb+ob);
}
