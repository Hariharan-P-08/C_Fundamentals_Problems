//C PROGRAMMING LV-2 ANSWERS (B)
#include<stdio.h>
int main()
{
    int a;  //1
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        printf("%d",i);
        printf("\n");
    }
}

{
    int a; //2
    scanf("%d",&a);
    for(int i=a;i>=1;i--)
    {
        printf("%d",i);
        printf("\n");
    }
} 

{
    int a,sum=0; //3
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        sum=i+sum;
    }
    printf("%d",sum);
}

{
    int a,sum=0; //4
    scanf("%d",&a);
    for(int i=a;i>=1;i--)
    {
        sum=i+sum;
        printf("%d",i);
        if(i>1) printf("+");
    }
    printf("=%d",sum);
}

{
    int a; //5
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(i%2!=0) printf("%d\n",i);
    }
}

{
    for(int i=1;i<=20;i++) //6 or if we give i=11 and remove i>10 we can achieve same thing
    {
        if(i%2!=0) 
        {
            if(i>10) printf("%d\n",i);
        }
    }
}

{
    int b,c,d; //7 if we simply put i+=2 instead of i++ there is no need of i%2!=0
    for(int i=11;i<=99;i++)
    {
        b=i/10;
        c=i%10;
        d=b+c;
        if(i%2!=0 && d==7) printf("%d\n",i);
    }
}

{
    int b,c,d; //8
    for(int i=10;i<=99;i+=2)
    {
        //b=i/10;
        //c=i%10;
        //d=b+c;
        if(i/10 + i%10 == 6) printf("%d\n",i);
    }
} 

{
    int sum=0; //9
    for(int i=10;i<=99;i++)
    {
        if(i%10==5) sum=sum+i;
    }
    printf("%d",sum);
}

{
    int sum=0; //10
    for(int i=10;i<=99;i++)
    {
        if(i%10==7) sum=sum+i;
    }
    printf("%d",sum);
}

{
    int a,b,count=0; //11
    //scanf("%d",&a);
    for(scanf("%d",&a);a>0;a/=10)
    {
        count++;
    }
    printf("%d",count);
}

{
    int n,digit,sum=0; //12
    scanf("%d",&n);
    for(;n>0;n/=10)
    {
       digit=n%10;
       sum+=digit;
    }
    printf("%d",sum);
}

{
    int a,b,rev=0;  //13
    scanf("%d",&a);
    for(;a>0;a/=10)
    {
        b=a%10;
        rev=rev*10+b;
    }
   printf("%d",rev);
}

{
    int a,b; //14
    scanf("%d",&a);
    b=a%10;
    if(b%2==0) printf("%d",a);
    else
    {
        b=a-1;
        printf("%d",b);
    }
}

{
    int n, temp, first, last, digits = 0, power = 1; //15
    int middle, result;
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    for(; temp >= 10; temp /= 10)
    {
        digits++;
        power *= 10;
    }
    first = temp;
    middle = (n % power) / 10;
    result = last * power + middle * 10 + first;
    printf("%d", result);
    return 0;
}

{
    int a,count = 0; //16
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
      if(a % i == 0) count++;
    }
    if(count == 2) printf("Prime");
    else printf("Not Prime");
}

{
    int a,b,c,d,count=0; //17
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    d=b+c;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0) count++;
    }
    if(count==2) printf("prime & sum of digit is %d",d);
    else printf("not prime & sum of digit is %d",d);
}

{
    int a,last; //18
    scanf("%d",&a);
    last=a%10;
    //first=a;
    while(a>=10)
    {
        a/=10;
    }
    if(a==2||a==3||a==5||a==7&&last==2||last==3||last==5||last==7) 
    printf("prime");
    else
    printf("not prime");
} 

{
    int a,count=0,d; //18 using for loop
    scanf("%d",&a);
    for(int i=1;i<=2;i++)
    {
      d = a%10;
      if(d==2 || d==3 || d==5 || d==7) count++;
      a /= 10;
    }
     if(count==2) printf("Prime");
     else printf("Not Prime");
}

{
    int a,b,count=0,last; //19 for single digit
    scanf("%d",&a);
    for(int i=1;i<=2;i++)
    {
        last=a%10;
        if(last==2||last==3||last==5||last==7) count++;
        a=a/10;
    }
    if(count==2) printf("prime");
    else printf("not prime");
}

{
    int a,b,count=0; //19 for double digit
    scanf("%d",&a);
    b=(a/10)%100;
    for(int i=1;i<=b;i++)
    {
        if(b%i==0) count++;
    }
    if(count ==2) printf("prime");
    else printf("not prime");
}

{ 
    int count=0;
    for(int i=2;i<=9;i++) //20
    {
        int factor =0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0) factor++;
        }
     if(factor ==2) count++;
    }
    printf("%d",count);
}

{
    int a,b,count=0; //21
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        if(b%2!=0) count++;
        a=a/10;
    }
    printf("%d",count);
}

{
    int a,b,count=0; //22
    scanf("%d",&a);
    while(a>0 && a>10)
    {
        b=a%100;
        if(b%2!=0) count++;
        a/=10;
    }
    printf("%d",count);
}

{
    int a,b,count=0; //23
    scanf("%d",&a);
    while(a>0)
    {
        b=(a%100)%10;
        int root=sqrt(b);
        if(root*root==b||b==1) count++;
        a/=10;
    }
    printf("%d",count);
}

{
    int a,b,c=0; //24
    scanf("%d",&a);
    while(a>0 && a>10)
    {
        b=a%100;
        int root=sqrt(b);
        if(root*root==b) c++;
        a/=10;
    }
    printf("%d",c);
}

{
    int a,b,c=0; //25
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        int factor=0;
        for(int i=1;i<=b;i++)
        {
            if(b%i==0) factor++;
        }
        if(factor==2) c++; 
        a/=10;
    }
    printf("%d",c);
}

{ 
    for(int i=9999;i>=1000;i--) //26
    {
        if(i%7==0 && i%9 == 0)
        {
         printf("%d",i);
         break;
        }
    }
}

{
        int count=0;  //27
        for(int i=1;i<100000;i++)
        {
            int temp=i;
            int sum=0;
            while(temp>0)
            {
               sum += temp%10;
               temp/=10;
            }
            if(sum==14) count++;
        }
    printf("%d",count);
}

{
    int a,b,max; //28
    scanf("%d %d",&a,&b);
    if(a>b) max=a;
    else max=b;
    for(int i=max;;i++)
    {
        if(i%a==0 && i%b==0)
        {
         printf("%d",i);
         break;
        }
    }
}

{
    int a,b,c,max; //29 LCM
    scanf("%d %d %d",&a,&b,&c);
    if(a>b) max=a;
    else if(a<b) max=b;
    else max=c;
    for(int i=max;;i++)
    {
        if(i%a==0 && i%b==0 && i%c==0)
        {
         printf("%d",i);
         break;
        }
    }
}

{
    int a,b,min; //30 HCF
    scanf("%d %d",&a,&b);
    if(a>b) min=b;
    else min=a;
    for(int i=min;;i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}          //LCM → Least → Search upward  HCF → Highest → Search downward 

{
    int space,rows; //31
    printf("enter no of rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
       for(space=1;space<=rows-i;space++)
       {
         printf(" ");
       }
       for(int j=1;j<=i*2-1;j++)
      {
        printf("*");
      }
       printf("\n");
}
