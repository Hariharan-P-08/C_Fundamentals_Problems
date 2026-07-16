//C PROGRAMMING LV-3 ANSWERS (B)
#include<stdio.h>

int fn(int); // 1

int main()
{
    int a,s;
    printf("enter a i/p no:");
    scanf("%d",&a);
    s=fn(a);
    printf("o/p=%d",s);
}

int fn(int no)
{
    int q;
    q=no+2;
    return q;
}

int fn(int); // 2

int main()
{
    int a,b;
    printf("enter a no:");
    scanf("%d",&a);
    b=fn(a);
    printf("o/p=%d",b);
}   
int fn(int no)
{
    return no-5;
}

int fn(int); //3

int main()
{
    int no,res;
    printf("enter a no:");
    scanf("%d",&no);
    res=fn(no);
    if(res==14)
    printf("sum of digit is 14");
    else 
    printf("sum of digit is not 14");
}

int fn(int no)
{
    int a,b;
    a=no%10;
    b=no/10;
    return a+b;
}

int fn(int); // 4

int main()
{
    int no,res;
    printf("enter a no:");
    scanf("%d",&no);
    res=fn(no);
    if (res==2)
    printf("o/p is prime no");
    else
    printf("o/p is not prime no");
}

int fn(int no)
{
    int count=0;
    for(int i=1;i<=no;i++)
    {
        if(no%i==0) count++;
    }
    return count;
}

int fn(int); //5

int main()
{
    int a,res;
    printf("enter a no:");
    scanf("%d",&a);
    res=fn(a);
    printf("no of zeros is %d",res);
}

int fn(int a)
{
    int count=0;
    if(a==0) count=1;
    while(a!=0)
    {
        if(a%10==0) count++;
        a=a/10;
    }
    return count;
}

int fn(int); //6

int main()
{
    int n,res;
    printf("Enter a number: ");
    scanf("%d", &n);
    res=fn(n);
    printf("reversed no is %d",res);
}
    
int fn(int n)
{
    int rev =0,last;
    while(n!=0)
    {
        last=n % 10;          // Get the last digit
        rev=rev*10+last;  // Add it to the reversed number
        n=n/10;            // Remove the last digit
    }
    return rev;
}

int compare_numbers(int no1,int no2);  //7

int main() 
{
   int number1,number2,result; 
   scanf("%d",&number1); 
   scanf("%d",&number2); 
   result = compare_numbers(number1,number2); 
   if(result == 1) printf("Same"); 
   else printf("Not Same");
   return 0; 
}

int compare_numbers(int no1,int no2) 
{ 
    return (no1==no2);
}

int check_assending(int no); //8

int main() 
{ 
  int no,result; 
  scanf("%d",&no); 
  result = check_assending(no); 
  if(result == 1) printf("Yes");  
  else printf("No");
  return 0;
}

int check_assending(int no)
{
    int result=1;
    int last,prev;
    last=no%10;
    no=no/10;
    while(no != 0)
    {
        prev = no % 10;
        if(prev > last)
        {
            result = 0;
            break;
        }
        last = prev;
        no = no / 10;
    }
    return result;
}

int swap_digits(int no); //9

int main()
{
    int number,result;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    result = swap_digits(number);
    printf("%d", result);
    return 0;
}

int swap_digits(int no)
{
    int first,last,result;
    first=no/10;      // First digit
    last=no%10;       // Last digit
    result=last*10+first;
    return result;
}

int count_digits(int no); //10
int main()
{
    int number,result;
    printf("Enter a number: ");
    scanf("%d",&number);
    result=count_digits(number);
    printf("%d", result);
    return 0;
}

int count_digits(int no)
{
    int result=0;
    while(no!=0)
    {
        result++;
        no=no/10;
    }
    return result;
}
