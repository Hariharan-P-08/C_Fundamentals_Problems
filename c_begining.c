#include<stdio.h> //incrementor decrementor
int main()
{
    int a=5,b,c,d,z;
    b = ++a ;
    c = --a ;
    d = a-- ;
    z = b+c+d;
   // c=a++;
    //d=++a;
    printf("%d\n",a);
    printf("%d\n",b);//6
    printf("%d\n",c);//6
    printf("%d\n",d);//8
    printf("%d\n",z);
}

#include<stdio.h> //relational opr
{
    char z;//int a;
     z = 'a'>'b'; // a= 3+9 < 5+4 ;
    printf("%d",z);
}

#include<stdio.h> //relational opr
{
    int a=18,b=9,c,d,e=10;
    c=b++;
    d=b;
    printf("%d\n",a<b<c>d); //0
    printf("%d\n",b==e); //1
    printf("%d\n",c+1 > e); //0
    printf("%d\n",a+c == b > e < c+d); //0
    printf("%d\n",a+c == b >= e < c+d != 1); //1
}

#include<stdio.h> //greatest among three no's if-else
int main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greater",a);
        }
        else 
        {
            printf("%d is greater",c);
        }
    }
    else
    {
        if(b>c)
        {
             printf("%d is greater",b);
        }
        else
        {
             printf("%d is greater",c);
        }
    }
}

#include<stdio.h> //grade check using if-else
int main()
{
    int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if(max<b)
    max=b;
    if(max<c)
    max=c;
    printf("%d is greater",max);
}

#include<stdio.h> //check for upper,lower,number,spl chr using if-else
int main()
{
    char ip;
    printf("enter the i/p:");
    scanf("%c",&i/p);
    if(ip>='a' && ip<='z')
    {
        printf("ip is lower case");
    }
    else if(ip>='A' && ip<='Z')
    {
        printf("ip is upper case");
    }
    else if(ip>='0' && ip<='9')
    {
        printf("ip is number");
    }
    else
    {
        printf("ip is special character");
    }
}

#include<stdio.h> //switch prob 1
int main()
{
    int a;
    printf("enter a:");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
    printf("hari\n");
    break;
    
    case 2:
    printf("harish\n");
    break;
    
    default:
    printf("bye\n");
    }
    printf("go home");
}

#include<stdio.h> //simple calculator using switch 
int main()
{
    int a,b,c;
    int res;
    float resu;

    printf("enter a:");
    //scanf("%d",&a); {we can't use scanf after printf if we use like this then it prints entb entc and prints invalid i/p but we can use scanf like 133th line}
    //
    if( scanf("%d",&a)!=1) //{scanf can able to do both read i/p and also retuns value true-1 false-0 we can use that to check valid i/p}
    {
        printf("invalid i/p");
    }

    printf("enter b:");
    //scanf("%d",&b);
     if( scanf("%d",&b)!=1)
    {
        printf("invalid i/p");
        return 0;
    }

    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");

    printf("enter c:");
    //scanf("%d",&c);   
    if( scanf("%d",&c)!=1)
    {
        printf("invalid i/p");
        return 0;
    }

    switch(c)
    {
    case 1:
    res=a+b;
    printf("a+b=%d",res);
    break;
    
    case 2:
    res=a-b;
    printf("a-b=%d",res);
    break;
    
    case 3:
    res=a*b;
    printf("a*b=%d",res);
    break;
    
    case 4:
    if(b == 0)
    {
     printf("Division by zero not allowed");
    }
     else
    {
        resu=a/b;
        printf("a/b=%f",resu);
    } 
    break;
    
    default:
    printf("invalid input");
    }
}

//instead of above program we can write like this 

#include<stdio.h>  //simple calculator using switch 
int main()
{
    int a, b, choice;
    int result;

    printf("Enter two numbers: ");
    if(scanf("%d %d", &a, &b) != 2)
    {
        printf("Invalid input");
        return 0;
    }

    printf("\nChoose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice: ");

    if(scanf("%d", &choice) != 1)
    {
        printf("Invalid input");
        return 0;
    }

    switch(choice)
    {
        case 1:
            result = a + b;
            printf("Result = %d", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %d", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %d", result);
            break;

        case 4:
            if(b == 0)
            {
                printf("Division by zero not allowed");
            }
            else
            {
                result = a / b;
                printf("Result = %d", result);
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

#include<stdio.h> //finding vowel,int,const,spl chr using switch
int main()
{
    char ch;
    printf("enter ch:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c is vowel",ch);
        break;
        
        //case ch>='1'&& ch<='9':    //we can't use relational operator like this 
         printf("%c ic integer",ch);
         break;
         case ch>='a' && ch<='z':
         printf("%c is constant",ch);
         break;//
        
        default:
        printf("ch is special character",ch);
        break;
    }
}

#include<stdio.h>
int main()
{
printf("\n()_()");
printf("\n(._.)");
printf("\n() ()");
printf("\n U U");
}
 
#include<stdio.h> //greatest among three no's using switch
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    switch((a>b && a>c)*1 + (b>a && b>c)*2 + (c>a && c>b)*3) // using this to switch the statement 1,2,3
    {      //(a is greater 1*1=1+0+0 then case 1) (b is greater 2*1=0+2+0 then case 2) (c is greater 3*1=0+0+3 then case 3)
        case 1:
            printf("%d is greater",a);
            break;
        case 2:
            printf("%d is greater",b);
            break;
        case 3:
            printf("%d is greater",c);
            break;
        default:
            printf("numbers may be equal");
    }
}

#include <stdio.h> //grade check using switch
int main()
{
    int m;
    printf("Enter marks: ");
    scanf("%d", &m);

    switch (m / 10) // {/10 used to -> (Convert 81–89 → 8) (Convert 71–79 → 7) (Convert 61–69 → 6)}
    {
        case 10:
        case 9:
        case 8:
            printf("A grade");
            break;

        case 7:
            printf("B grade");
            break;

        case 6:
            printf("C grade");
            break;

        default:
            printf("D grade");
    }

    return 0;
}

#include <stdio.h> //finding no is even or odd,prime or not,factorial according to choice using switch statement
int main()
{
    int choice, num, i, n, fact, flag;
    printf("1. Even or Odd\n");
    printf("2. Factorial\n");
    printf("3. Prime or Not\n");
    printf("4. Exit\n");
    printf("Enter choice:");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter number: ");
            scanf("%d", &num);

            if (num % 2 == 0)
                printf("Even number");
            else
                printf("Odd number");
            break;

        case 2:
            printf("Enter number: ");
            scanf("%d", &n);
            fact = 1;
            
            for (i = 1; i <= n; i++)
            {
                fact = fact * i;
            }
            printf("Factorial of %d is %d", n, fact);
            break;

        case 3:
            printf("Enter number: ");
            scanf("%d", &n);

            flag = 0;

            if (n <= 1)
            {
                printf("Not a prime number");
            }
            else
            {
                for (i = 2; i <= n / 2; i++)
                {
                    if (n % i == 0)
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0)
                    printf("Prime number");
                else
                    printf("Not a prime number");
            }
            break;

        case 4:
            printf("Exit");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

#include <stdio.h> //for loop introduction & examples
int main()
{
    for( ;i<=5;i++) // error!
    {
        printf("%d",i);
    }
    
    int i;
    for( ;i<=5;i++) // op:12345
    {
         printf("%d",i);
    }

    int j=0;  
    for(i=1;i<=5;i++) //op:123450
    {
         printf("%d",i);
    }
    printf("%d",j);

    for(int i=1,j=0;i<=5;i++) //op:1 02 03 04 05 0
    {
        printf("%d %d",i,j);
    }

    for(int i=1,j=0;i<=5;i++) //op:1 0
    {                           // 2 0
        printf("%d %d\n",i,j);  // 3 0
    }                           // 4 0
                                // 5 0  
                                
    int i,j=0; // no op will be printed because i is not initialized (i.e) i has some garbage value eg:i=32465<5 condition is wrong
    for( ;i<=5;i++)
    {
        printf("%d %d\n",i,j);
    }

    int i,j; 
    for(i=1,j=0; ;i++) // op will be printed i as garbage value beaccuse of no condn and j prints 0 and runs infinitely
    {
        printf("%d %d\n",i,j);
    }

    int i,j;
    for(i=1,j=0;i<=5,j<3;i++)
    {
        printf("%d %d\n",i,j);
    }

    int i, j;
    for(i = 1, j = 0; i <= 5, j < 3; i++) // op:1 0
    {                                           2 1
        printf("%d %d\n", i, j);                3 2
    }
 
    int i, j;
    for(i = 1, j = 0; i==10 ; i++,j++) //no opwill be printed
    {
        printf("%d %d\n", i, j);
    }

    int i, j;
    for(i = 1,j = 0;i<=5 || j<3;i++,j++) //op:1 0
    {                                         2 1
        printf("%d %d\n", i, j);              3 2
    }                                         4 3
                                              5 4

    int i, j;
    for(i = 1,j = 0;i<=5 || j<3;i++,j++) //op:1 0
    {                                         2 1
        printf("%d %d\n", i, j);              3 2
    }
}

#include<stdio.h> ////print table of a number using for loop
int main()
{
    int res,i,num;
    printf("enter a no:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        res=num*i;
        printf("%dx%d=%d\n",i,num,res);
    }
}

#include<stdio.h> // this prog includes the iterations from the user (eg if iteration is 20 then table goes upto 20) using for loop
int main()
{
    int res,i,num,qwe;
    printf("enter a number:");
    scanf("%d",&num);
    printf("enter no of iterations:");
    scanf("%d",&qwe);
    for(i=1;i<=qwe;i++)
    {
        res=num*i;
        printf("%dx%d=%02d\n",i,num,res); //here before d (02) represents 2 → minimum width of 2 digits 0 → fill empty space with zero
    }
}

#include<stdio.h> //while loop introduction & examples
int main()
{
    int i=1; 
    while(i<=10) //op:1 2 3 4 5 6 7 8 9 10
    {
        printf("%d ",i);
        i++;
    }

    int i=10;
    //printf("enter a no:");
    //scanf("%d",&i);
    while(i>=1) // op:10 9 8 7 6 5 4 3 2 1 
    {
      printf("%d ",i);
      i--;
    }

    int i=1;
    while(i=1) //op:11111111111......
    {
        printf("%d",i);
        i++; //i++ (or) ++i both are same in this case
    }
    printf("end of the program");

    int i=10; //op:10 11 12 13 .....end of program {because when -3 -2 -1 0 [0 comes while(0) is false then it prints end of program]}
    while(i)
    {
        printf("%d ",i);
        ++i;
    }
    printf("end of the program");

    int i=10;
    while(1) //op:10 11 12 13.......
    {
        printf("%d ",i);
        i++;
    }
    printf("end of the program");

    int i=10;
    while(i) //op:101010101010......(infinite)
    {
        printf("%d",i);
    }
    printf("end of the program");

    int i;
    while(i<=10) //op:end of the program
    {
        printf("%d",i);
        i++;
    }
    printf("end of the program");

    int i=0;
    while(i++) //op:end of the program (because here post inc is used means it goes with what value we assign after the statement it increaments means [while(0)] means false )
    {
        printf("%d",i);
    }
    printf("end of the program");

    char ch='a';
    while(ch) //op:97 98 99 .... -128 -127 .....-1 end of the program
    {
        printf("%d ",ch);
        ch++;
    }
    printf("end of the program");

    char ch='a';
    while(ch) //op:9796959493......321end of the program
    {
        printf("%d",ch);
        ch--;
    }
    printf("end of the program");

    char ch='a';
    while(ch) //op:abcdefghijklmnopqrstuvwxyz then some garbage chr upto -1 then end of the program
    {
        printf("%c",ch);
        ch++;
    }
    printf("end of the program");

    char ch='a';
    while(ch) //op: ..._^]\[ZYXWVUTSRQPONMLKJIHGFEDCBA@?>=<;:9876543210/.-,+*)('&%$#"!....end of the program
    {
        printf("%c",ch);
        ch--;
    }
    printf("end of the program");
}

#include<stdio.h> //break statement
int main()
{
 int a;
 while(1)                      //op:enter a no:4
 {	                                enter a no:0
	printf("enter a no:");            end of the program (for all three codes)
	scanf("%d",&a);
	if(a==0)
		break;
  }
   printf("out of the program");


 int a;
 do
  {
   printf("enter a no:");
   scanf("%d",&a);
   }
   while(a);
   printf("end of the program");


  int i,a;
  for(i=a; ;i++)
  {
   printf("enter a no:");
    scanf("%d",&a);
     if(a==0)
     break;
  }
      printf("end of the program");
}*/

#include<stdio.h>           //break statement
int main() //it asks the i/p from the user infinite times till then it we give 0 it give the sum of all entered i/p                          
{                                 // o/p: enter a no:1
    int a,sum=0,i;                        enter a no:1
    for(i=1;i<=5;i++)                     enter a no:1
    {                                     enter a no:1
    printf("enter a no:");                sum=5
    scanf("%d",&a);
    if(a<=0)
    break;
    sum=sum+a;
    }
    printf("sum=%d",sum);

    int a,sum=0,i;
    while(1)        
    {
      printf("enter a no:");
      scanf("%d",&a);
      if(a<=0)
      break;
      sum=sum+a;
    }
    printf("%d",sum);  

    
    int a,sum=0,i;
    do
    {
      printf("enter a no:");
      scanf("%d",&a);
      if(a<=0)
      break;
      sum=sum+a;
    }
    while(1);
    printf("%d",sum);
}

#include<stdio.h>                        //continue statement
int main()  //it asks enter a no upto 5 times (since i<=5) but it simply don't consider -ve no's and add only +ve no's and give in the result
{
    int i,a,sum=0;          //op:enter a no:5
    for(i=1;i<=5;i++)            enter a no:2
    {                            enter a no:3
        printf("enter a no:");   enter a no:-1
        scanf("%d",&a);          enter a no:-2 
        if(a<0)                  sum=10
        continue;
        sum=sum+a;
    }
    printf("sum=%d",sum);
}

#include<stdio.h>
int main()
{
    int a;
    printf("enter a no:");
    scanf("%d",&a);
    if(a==0)
    {
        printf("invalid i/p");
    }
    else
    {
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=i-1;j++)
            {
                printf(" ");
            }
            for(int k=1;k<=a-i+1;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}

#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a no:");
    scanf("%d",&a);
    if(a==0)
    {
     printf("invalid i/p");
    }
        else
        {
            for(int i=a;i>=1;i--)
            {
                for(int j=1;j<=i;j++)
                {
                  printf(" *");
                }
              printf("\n");
            }
        }
}

#include<stdio.h>
int main()
{
	int a,i,j;
	printf("enter a no:");
	scanf("%d",&a);
	if(a==0)
		printf("invalid i/p");
	for(i=a; i; i--) //rows
	{
		for(j=1; j<=i; j++) //stars
		{
			printf("*");
		}
		printf("\n");
	}
}

#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a no:");
    scanf("%d",&a);
    if(a==0)
    {
        printf("invalid no");
    }
    else
    {
        for(int i=a;i>=1;i--)
        {
            for(int j=1;j=i;j++)
            {
                printf(" *");
            }
         printf("\n");
        }
    }
    int sum=0;
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
         sum=sum+i;
        }
    }
        printf("%d",sum);*/
        
    int mul=1;
    for(i=1;i<=a;i++)
    {
        
        mul=mul*i;
    }
        printf("%d",mul);
}
{
    int a;
    printf("enter a no:");
    scanf("%d",&a);
    if(a==0)
    {
        printf("cant be printed");
    }
    else
    {
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}

{
    int a,b, temp;
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("o/p:%d %d",a,b);
    return 0;
}

{
    int a,b,term = 0,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter repetition: ");
    scanf("%d", &b);

    if(a <= 0 || b <= 0)
    {
        printf("Invalid number");
    }
    else
    {
        for(int i = 1; i <= b; i++)
        {
            term = term * 10 + a;
            sum = sum + term;
        }

        printf("\n Sum = %d",sum");
        printf("this is our small appreciation");
        printf("\n()_()");
        printf("\n(._.)");
        printf("\n() ()");
        printf("\n U U");
    }
}

{
  int a;
  printf("enter a no:");
  scanf("%d",&a);
  if(a<=0)
  {
      printf("invalid no");
  }
  else
  {
      for(int i=1;i<=a;i++)
      {
          for(int j=1;j<=a;j++)
          {
              printf("#");
          }
          printf("\n");
      }
  }
}

{
    int a,sum=0;
    printf("enter a no:");
    scanf("%d",&a);
    if(a<=0)
    {
        printf("invalid no");
    }
    else
    {
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=a;j++)
            {
             sum=sum+1;
             printf("%d",sum);
             printf("\n");
             
             
            }
            printf("\n");
        }
    }
}

#include <stdio.h>
int main()
{
exe:
	{
		int m;//marks=m
		printf("Enter your mark:");
		scanf("%d", &m);
		if(m>=95 && m<=100)
		{
			printf("%c",'A');
		}
		else if (m>=85 && m<95)
		{
			printf("%c",'B');

		}
		else if (m>=75 && m<85)
		{
			printf("%c",'C');

		}
		else if (m>=65 && m<75)
		{
			printf("%c",'D');

		}
		else if (m>=45 && m<65)
		{
			printf("%c",'E');

		}
		else if(m<45)
		{
			printf("%c",'F');

		}
		else
		{
			printf("Error!");
		}

	}
	int c;
	printf("\npress 1 if you want to continue:");
	scanf("%d",&c);
	if (c==1)
	{
		goto exe;
	}
	else
	{
		return 0;
	}
}



#include <stdio.h>
int main()
{
	int a,b;
	printf("enter a number 1:");
	scanf("%d",&a);
	printf("enter a number 2:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("a is max");
	}
	else if(a==b)
	{
		printf("both are equal");
	}
	else
	{
		printf("b is max \n");

		printf("thankyou for your cooperation");
	}
	return 0;
}


#include<stdio.h>
void main()
{
    int a =7895,b=5698,max;
    max=(a>b)*a+(b>a)*b;
    printf("%d",max);
}

#include <stdio.h>
int main()
{
    int a=0;
    printf("enter a number : ");
    scanf("%d",&a);
    if (a==1||a==3||a==5||a==7||a==9||a==11)
{
    printf("31 days");
}
else if(a==4||a==6||a==8||a==10||a==12)
{
    printf("30 days");
}
else if(a==2)
{
    printf("29 days");
}
else
{
    printf("wrong no");
}
}*/

#include <stdio.h>
int main() {
l1:
	char *mon[13]= {"null","january","february","march","april","may","june","july","august","september","october","november","december"},*yrt[12]= {"Not Leap year","Leap year"};
	int no,yr,ch,tf=0;
	//mon=month, yrt=year type , no= month number , yr=year , ch=choice , tf=true or false
	printf("Enter a no:");
	scanf("%d",&no);
	if (no<=12) {
		printf("Enter year:");
		scanf("%d",&yr);
		if((yr%4==0&&yr%100!=0)||(yr%400==0)) {
			tf=1;
		}
		else {
			tf=0;
		}
		printf("%s",mon[no]);
		if (no==1) {
			printf("-%d%s",31,"days");
		}
		else if (no==2) {
			if (tf==1) {
				printf("-%d%s",29,"days");
			}
			else {
				printf("-%d%s",28,"days");
			}
		}
		else if (no==3) {
			printf("-%d%s",31,"days");
		}
		else if (no==4) {
			printf("-%d%s",30,"days");
		}
		else if (no==5) {
			printf("-%d%s",31,"days");
		}
		else if (no==6) {
			printf("-%d%s",30,"days");
		}
		else if (no==7) {
			printf("-%d%s",31,"days");
		}
		else if (no==8) {
			printf("-%d%s",31,"days");
		}
		else if (no==9) {
			printf("-%d%s",30,"days");
		}
		else if (no==10) {
			printf("-%d%s",31,"days");
		}
		else if (no==11) {
			printf("-%d%s",30,"days");
		}
		else if (no==12) {
			printf("-%d%s",31,"days");
		}
		if(tf==1) {
			printf("\n%s",yrt[tf]);
		}
		else {
			printf("\n%s",yrt[tf]);
		}
	}
	else {
		printf("Error - No  such month exists");
	}
	printf("\nPress 1 if you want to continue:");
	scanf("%d",&ch);
	if (ch==1) {
		goto l1;
	}
	else {
		return 0;
	}
}

ESCAPE SEQUENCE:
1.newline=\n
2.tab space=\t
3.backspace=\b
4.doublequotes=\"\"
5.backslash=\\
                
 #include<stdio.h>
int main()
{
int no;
printf("enter a no: ");
scanf("%d",&no);
if(no==1)
{printf("monday and weekday");}
else if(no==2)
{printf("tuesday and weekday");}
else if(no==3)
{printf("wednesday and weekday");}
else if(no==4)
{printf("thursday and weekday");}
else if(no==5)
{printf("friday and weekday");}
else if(no==6)
{printf("saturday and holiday");}
else if(no==7)
{printf("sunday and holiday");}
else
{printf("invalid no");}
}

#include<stdio.h>
int main()
{
	char gender;
	int a;
	printf("enter the gender: ");
	scanf("%c",&gender);
	printf("enter no of hours worked: ");
	scanf("%d",&a);
	if((gender=='m')||(gender=='M'))
	{
		if((a<=8)&&(a>0))
		{
			int salary=(a*80);
			printf("%d",&salary);
		}
		else if(a>8)
		{
			int temp=a-8;
			int salary=(8*80)+(temp*100);
			printf("%d",salary);
		}
		else
		{
			printf("enter a valid hours");
		}
	}
	else if ((gender=='f')||(gender=='F'))
	{
		if((a<=8)&&(a>0))
		{
			int salary=(a*60);
			printf("%d",&salary);
		}
		else if(a>8)
		{
			int temp=a-8;
			int salary=(8*60)+(temp*100);
			printf("%d",salary);
		}
		else
		{
			printf("enter a valid hours");
		}
	}
	else
	{
		printf("please enter a valid gender");
	}

}
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter a no 1:");
	scanf("%d",&n1);
	printf("enter a no 2:");
	scanf("%d",&n2);
	printf("result:");
	printf("%d\n",n1^n2);
	int bxor = n1^n2;
	if(bxor == 0)
	{
		printf("both are equal");
	}
	else
	{
		printf("both are not equal");
	}
}

#include<stdio.h>
int main()
{
	char chr;
	printf("enter a character : ");
	scanf("%c",&chr);
	if(chr=='a'||chr=='A'||chr=='E'||chr=='e'||chr=='i'||chr=='I'||chr=='o'||chr=='O'||chr=='u'||chr=='U')
	{
		printf("the character is vowel");
	}
	else if((chr>='a' && chr<='z')||(chr>='A' && chr<='Z'))
	{
		printf("the character is consonant");
	}

	else if(chr>='0'&& chr<='9')
	{
		printf("the character is number");
	}
	else
	{
		printf("the character is special");
	}
}
#include<stdio.h>
int main()
{
	int n1;
	printf("enter a no: ");
	scanf("%d",&n1);
	if ((n1 | 1) == n1)
		printf("Odd");
	else
		printf("Even");
}

#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if((a>=10000 && a<=99999) || (a<=-10000 && a>=-99999))
	{
		int res=1;
		printf("%d",res);
	}
	else
	{
		int res=0;
		printf("%d",res);
		B B B B 
	}
}

#include<stdio.h>
int main()
{
	int a;
	printf("enter a year:");
	{
leap year condition:
		the no is divisible by 4 and 400 and not divisible by 100 is a leap year else not leap year!!!
		}
	scanf("%d",&a);
	if((a%4==0)&&(a%100!=0)||(a%400==0))
		printf("leap year");
	else
		printf("not leap year");
}

#include <stdio.h>
int main()
{
	int chocotot,perday,totdays;
	scanf("%d",&chocotot);
	scanf("%d",&perday);
	scanf("%d",&totdays);

	if(chocotot%perday==0 && chocotot/perday==totdays)
	{
		int res=1;
		printf("%d",res);
	}
	else
	{
		if(chocotot/perday<totdays)
		{
			int res=0;
			printf("%d",res);
			int resu=chocotot/perday;
			printf("\n%d",resu);
		}
		else if(chocotot/perday>totdays)
		{
			int res=1;
			printf("%d",res);
		}
		else
		{
			printf("%d",totdays);
		}
	}
}

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nenter total no of children: ");
	scanf("%d",&a);
	printf("enter total no of old people: ");
	scanf("%d",&b);
	printf("enter total no of adults: ");
	scanf("%d",&c);
	float total_cost;
	int total_no_of_persons;
	total_no_of_persons=a+b+c;
	total_cost=(a*5+b*7+c*5);
	if(total_no_of_persons>5)
	{
		float discount;
		discount=(0.1*total_cost);
		total_cost=(total_cost-discount);
		printf("total no of persons:" "%d",total_no_of_persons);
		printf("\ntotal amount=$" "%f",total_cost);
	}
	else
	{
		printf("total no of persons:" "\n%d",total_no_of_persons);
		printf("\ntotal amount=$" "%f",total_cost);
	}
}

#include<stdio.h>
int main()
{
	float a;
	float b;
	float percentage;
	printf("\nenter no of classes attended:");
	scanf("%f",&a);
	printf("enter total no of classes:");
	scanf("%f",&b);
	percentage=(a/b*100);
	printf("percentage=%f%%",percentage );
}

#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if ((a%2==1)&&(b%2==1))
	{
		float result;
		result=a*b;
		printf("%.3f",result);
	}
	else
	{
		int res;
		res=a+b;
		printf("%d",res);
	}
}

#include<stdio.h>
int main()
{
	char X;
	scanf("%c",&X);
	if ((X == 'A') || (X == 'a') || (X == 'e') || (X == 'E') || (X == 'i') || (X == 'I') || (X == 'o') || (X == 'O') ||
	        (X == 'U') || (X == 'U'))
	{
		printf("%c is Vowel",X);
	}
	else if ((X>='A' && X<='Z')||(X>='a'&&X<='z'))
	{
		printf("%c is Consonant",X);
	}
	else
	{
		printf("Invalid");
	}
}

#include<stdio.h>
#include<math.h>
int main()
{
	int a=0;
	scanf("%d",&a);
	if(a<0)
	{
		printf("negative number is invalid");
	}
	else if(a>0)
	{
		int root=sqrt(a);
		if(root*root==a)
			printf("%d is a perfect square",a);
		else
			printf("%d is not a perfect square",a);
	}
}

#include <stdio.h>
int main()
{
	long long int num;
	int digit;
	int oddSum = 0,evenSum = 0;

	printf("Enter a number: ");
	scanf("%lld", &num);

	while (num > 0 || num < 0)
	{
		digit = num % 10;
		if (digit % 2 == 0)
			evenSum += digit;
		else
			oddSum += digit;
		num /= 10;
	}

	printf("Sum of even digits = %d\n", evenSum);
	printf("Sum of odd digits = %d\n", oddSum);

	return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
	int p=0,a=0,b=0;
	scanf("%d",&a);
	scanf("%d",&b);

	if(a < 0 || b < 0)
	{
		printf("invalid no");
	}
	else
	{
		p = (int)pow(a, b);
		printf("%d", p);
	}
	return 0;
}

#include <stdio.h>

int main() {
	int x, y;

	printf("Enter the x coordinate: ");
	scanf("%d", &x);

	printf("Enter the y coordinate: ");
	scanf("%d", &y);

	if (x > 0 && y > 0) {
		printf("The point (%d, %d) lies in Quadrant I\n", x, y);
	}
	else if (x < 0 && y > 0) {
		printf("The point (%d, %d) lies in Quadrant II\n", x, y);
	}
	else if (x < 0 && y < 0) {
		printf("The point (%d, %d) lies in Quadrant III\n", x, y);
	}
	else if (x > 0 && y < 0) {
		printf("The point (%d, %d) lies in Quadrant IV\n", x, y);
	}
	else if (x == 0 && y == 0) {
		printf("The point (%d, %d) is at the Origin\n", x, y);
	}
	else if (x == 0) {
		printf("The point (%d, %d) lies on the Y-axis\n", x, y);
	}
	else if (y == 0) {
		printf("The point (%d, %d) lies on the X-axis\n", x, y);
	}

	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,c,d;
	int largest;
	printf("enter 4 numbers\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>=0||a<=0||b<=0||b>=0||c<=0||c>=0||d<=0||d>=0)
	{
		largest=a;
		if(a<b)
			largest=b;
		if(b<c)
			largest=c;
		if(c<d)
			largest=d;
		printf("the largest no is %d",largest);
	}
	else
	{
		printf("invalid I/P");
	}
}

powercfg -h on
powercfg -h off
shell:Appsfolder


int / int → int

float / int → float

int / float → float

float / float → float


#include <stdio.h>
int main()
{
exe:
{
    int m;//marks=m
    printf("Enter your mark:");
    scanf("%d", &m);
    if(m>=95 && m<=100)
    {
        printf("%c",'A');
    }
    else if (m>=85 && m<95)
    {
        printf("%c",'B');
        
    }
    else if (m>=75 && m<85)
    {
        printf("%c",'C');
        
    }
    else if (m>=65 && m<75)
    {
        printf("%c",'D');
        
    }
    else if (m>=45 && m<65)
    {
        printf("%c",'E');
        
    }
    else if(m<45)
    {
        printf("%c",'F');
        
    }
    else
    {
        printf("Error!");
    }

}
int c;
printf("\npress 1 if you want to continue:");
scanf("%d",&c);
if (c==1)
{
   goto exe;
}
else
{
    return 0;
}
}



    #include <stdio.h>
    int main()
    {
    int a,b;
    printf("enter a number 1:");
    scanf("%d",&a);
    printf("enter a number 2:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is max");
    }
    else if(a==b)
    {
        printf("both are equal");
    }
    else
    {
        printf("b is max \n");
        
        printf("thankyou for your cooperation");
    }
    return 0;
    }*/

#include<stdio.h>
void main()
{
    int a =7895,b=5698,max;
    max=(a>b)*a+(b>a)*b;
    printf("%d",max);
}

#include <stdio.h>
int main()
{ 
    int a=0;
    printf("enter a number : ");
    scanf("%d",&a);
    if (a==1||a==3||a==5||a==7||a==9||a==11)
{
    printf("31 days");
} 
else if(a==4||a==6||a==8||a==10||a==12)
{
    printf("30 days");
}
else if(a==2)
{
    printf("29 days");
}
else
{
    printf("wrong no");
}
}

#include <stdio.h>
int main() {
 l1:
    char *mon[13]={"null","january","february","march","april","may","june","july","august","september","october","november","december"},*yrt[12]={"Not Leap year","Leap year"};
    int no,yr,ch,tf=0;
    //mon=month, yrt=year type , no= month number , yr=year , ch=choice , tf=true or false
    printf("Enter a no:");
    scanf("%d",&no);
    if (no<=12) {
        printf("Enter year:");
        scanf("%d",&yr);
        if((yr%4==0&&yr%100!=0)||(yr%400==0)) {
            tf=1;
        }
        else {
            tf=0;
        }
        printf("%s",mon[no]);
        if (no==1) {
            printf("-%d%s",31,"days");
        }
        else if (no==2) {
            if (tf==1){
                printf("-%d%s",29,"days");
            }
            else {
                printf("-%d%s",28,"days");
            }
        }
        else if (no==3) {
            printf("-%d%s",31,"days");
        }
        else if (no==4) {
            printf("-%d%s",30,"days");
        }
        else if (no==5) {
            printf("-%d%s",31,"days");
        }
        else if (no==6) {
            printf("-%d%s",30,"days");
        }
        else if (no==7) {
            printf("-%d%s",31,"days");
        }
        else if (no==8) {
            printf("-%d%s",31,"days");
        }
        else if (no==9) {
            printf("-%d%s",30,"days");
        }
        else if (no==10) {
            printf("-%d%s",31,"days");
        }
        else if (no==11) {
            printf("-%d%s",30,"days");
        }
        else if (no==12) {
            printf("-%d%s",31,"days");
        }
        if(tf==1) {
            printf("\n%s",yrt[tf]);
        }
        else {
            printf("\n%s",yrt[tf]);
        }
    }
    else {
        printf("Error - No  such month exists");
    }
    printf("\nPress 1 if you want to continue:");
    scanf("%d",&ch);
    if (ch==1) {
        goto l1;
    }
    else {
        return 0;
    }
} 
 
   ESCAPE SEQUENCE:
1.newline=\n
2.tab space=\t
3.backspace=\b
4.doublequotes=\"\"
5.backslash=\\

#include<stdio.h>
int main()
{
    int no;
    printf("enter a no: ");
    scanf("%d",&no);
    if(no==1)
    {printf("monday and weekday");}
    else if(no==2)
    {printf("tuesday and weekday");}
    else if(no==3)
    {printf("wednesday and weekday");}
    else if(no==4)
    {printf("thursday and weekday");}
    else if(no==5)
    {printf("friday and weekday");}
    else if(no==6)
    {printf("saturday and holiday");}
    else if(no==7)
    {printf("sunday and holiday");}
    else
    {printf("invalid no");}
}

#include<stdio.h>
int main()
{
    char gender;
    int a;
    printf("enter the gender: ");
    scanf("%c",&gender);
    printf("enter no of hours worked: ");
    scanf("%d",&a);
    if((gender=='m')||(gender=='M'))
    {
         if((a<=8)&&(a>0))
         {
            int salary=(a*80);
            printf("%d",&salary);
         }
        else if(a>8)
         {
            int temp=a-8;
            int salary=(8*80)+(temp*100);
            printf("₹");
            printf("%d",salary);
         }
         else
         {
             printf("enter a valid hours");
         }
    }
    else if ((gender=='f')||(gender=='F'))
    {
        if((a<=8)&&(a>0))
         {
           int salary=(a*60);
            printf("%d",&salary);
         }
        else if(a>8)
         {
            int temp=a-8;
            int salary=(8*60)+(temp*100);
            printf("₹");
            printf("%d",salary);
         }
         else
         {
              printf("enter a valid hours");
         }
    }
    else
    {
        printf("please enter a valid gender");
    }
    
}
#include<stdio.h>
int main()
{
  int n1,n2;
  printf("enter a no 1:");
  scanf("%d",&n1);
  printf("enter a no 2:");
  scanf("%d",&n2);
  printf("result:");
  printf("%d\n",n1^n2);
  int bxor = n1^n2;
  if(bxor == 0)
  {
    printf("both are equal");
  }
  else
  {
    printf("both are not equal");
  }
}

#include<stdio.h>
int main()
{
char chr;
printf("enter a character : ");
scanf("%c",&chr);
if(chr=='a'||chr=='A'||chr=='E'||chr=='e'||chr=='i'||chr=='I'||chr=='o'||chr=='O'||chr=='u'||chr=='U')
{
printf("the character is vowel");
}
else if((chr>='a' && chr<='z')||(chr>='A' && chr<='Z'))
{
    printf("the character is consonant");
}

else if(chr>='0'&& chr<='9')
{
    printf("the character is number");
}
else
{
    printf("the character is special");
}
}
#include<stdio.h>
int main()
{
    int n1;
    printf("enter a no: ");
    scanf("%d",&n1);
   if ((n1 | 1) == n1)
    printf("Odd");
else
    printf("Even");
}

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if((a>=10000 && a<=99999) || (a<=-10000 && a>=-99999))
    {
        int res=1;
        printf("%d",res);
    }
    else
    {
        int res=0;
        printf("%d",res);
    }
}

#include<stdio.h>
int main()
{
    int a;
    printf("enter a year:");    { leap year condition:the no is divisible by 4 and 400 and not divisible by 100 is a leap year else not leap year!!!}
    scanf("%d",&a);
    if((a%4==0)&&(a%100!=0)||(a%400==0))
    printf("leap year");
    else
    printf("not leap year");
}

#include <stdio.h>
int main()
{
    int chocotot,perday,totdays;
    scanf("%d",&chocotot);
    scanf("%d",&perday);
    scanf("%d",&totdays);
    
    if(chocotot%perday==0 && chocotot/perday==totdays)
    {
        int res=1;
        printf("%d",res);
    }
    else
    {
        if(chocotot/perday<totdays)
        {
            int res=0;
            printf("%d",res);
            int resu=chocotot/perday;
            printf("\n%d",resu);
        }
        else if(chocotot/perday>totdays)
        {
            int res=1;
            printf("%d",res);
        }
        else
        {
            printf("%d",totdays);
        }
    }
}

#include<stdio.h>
int main()
{
      int a,b,c;
    printf("\nenter total no of children: ");
      scanf("%d",&a);
    printf("enter total no of old people: ");
      scanf("%d",&b);
    printf("enter total no of adults: ");
      scanf("%d",&c);
      float total_cost;
      int total_no_of_persons;
      total_no_of_persons=a+b+c;
      total_cost=(a*5+b*7+c*5);
      if(total_no_of_persons>5)
      {
         float discount;
         discount=(0.1*total_cost);
         total_cost=(total_cost-discount);
         printf("total no of persons:" "%d",total_no_of_persons);
         printf("\ntotal amount=$" "%f",total_cost);
      }
      else
      {
          printf("total no of persons:" "\n%d",total_no_of_persons);
          printf("\ntotal amount=$" "%f",total_cost);
      }
}

#include<stdio.h>
int main()
{
    float a;
    float b;
    float percentage;
    printf("\nenter no of classes attended:");
    scanf("%f",&a);
    printf("enter total no of classes:");
    scanf("%f",&b);
    percentage=(a/b*100);
    printf("percentage=%f%%",percentage );
}

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
        scanf("%d",&b);
        if ((a%2==1)&&(b%2==1))
        {
            float result;
            result=a*b;
            printf("%.3f",result);
        }
        else
        {
            int res;
            res=a+b;
            printf("%d",res);
        }
}

#include<stdio.h>
int main() 
   {
    char X;
    scanf("%c",&X);
    if ((X == 'A') || (X == 'a') || (X == 'e') || (X == 'E') || (X == 'i') || (X == 'I') || (X == 'o') || (X == 'O') ||
        (X == 'U') || (X == 'U'))
        {
        printf("%c is Vowel",X);
    }
    else if ((X>='A' && X<='Z')||(X>='a'&&X<='z'))
        {
        printf("%c is Consonant",X);
    }
    else
        {
        printf("Invalid");
    }
}

#include<stdio.h>
#include<math.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    if(a<0)
    {
        printf("negative number is invalid");
    }
    else if(a>0)
    {
        int root=sqrt(a);
        if(root*root==a)
        printf("%d is a perfect square",a);
    else
        printf("%d is not a perfect square",a);  
    }
}

#include <stdio.h>
int main() 
{
    long long int num;   
    int digit;
    int oddSum = 0,evenSum = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);   

    while (num > 0 || num < 0) 
    {
        digit = num % 10;   
        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;
            num /= 10;   
    }

    printf("Sum of even digits = %d\n", evenSum);
    printf("Sum of odd digits = %d\n", oddSum);

    return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
    int p=0,a=0,b=0;
    scanf("%d",&a);
    scanf("%d",&b);

    if(a < 0 || b < 0)
    {
        printf("invalid no");
    }
    else
    {
        p = (int)pow(a, b);
        printf("%d", p);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the x coordinate: ");
    scanf("%d", &x);

    printf("Enter the y coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant I\n", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant II\n", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant III\n", x, y);
    }
    else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant IV\n", x, y);
    }
    else if (x == 0 && y == 0) {
        printf("The point (%d, %d) is at the Origin\n", x, y);
    }
    else if (x == 0) {
        printf("The point (%d, %d) lies on the Y-axis\n", x, y);
    }
    else if (y == 0) {
        printf("The point (%d, %d) lies on the X-axis\n", x, y);
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,d;
    int largest;
    printf("enter 4 numbers\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=0||a<=0||b<=0||b>=0||c<=0||c>=0||d<=0||d>=0)
    {
    largest=a;
    if(a<b)
    largest=b;
    if(b<c)
    largest=c;
    if(c<d)
    largest=d;
    printf("the largest no is %d",largest);
    }
    else
    {
      printf("invalid I/P");
    }
}


#include <stdio.h>
int main()
{
    int k =1;
    while(k<=5)
    {
        int a =1;
        while(a<=k)
        {
         printf("%d\t",a);
        a=a+1;
        }
        printf("\n");
        k=k+1;
    }
}
#include <stdio.h>
int main()
{
    int k =1;
    while(k<=5)
    {
        int a =1;
        while(a<=k)
        {
         printf("%d\t",a);
         a=a+1;
        }
        printf("\n");
        k=k+1;
    }
}

#include <stdio.h>
int main() 
{
  for(int i=1;i<=5;i++)
  printf("%d\t",i);
}
  
#include<stdio.h>
int main()
{
    int a,b;
    for(a=1,b=10;a<=b;a=a+1,b=b-1)
    {
    printf("%d\t%d\n",a,b);
    }
    printf("%d\t%d\n",a=a+10,b=b+10);
}

#include <stdio.h>
int main()
{
int n,i,j;                                 o/p:               
printf("enter a no:");                          10
scanf("%d",&n);                                 10	9
for(int i=n;i>=1;i--)                           10	9	8
{                                               10	9	8	7
    for(j=n;j>=i;j--)                           10	9	8	7	6
    {                                           10	9	8	7	6	5
    printf("%d\t",j);                           10	9	8	7	6	5	4
    }                                           10	9	8	7	6	5	4	3
printf("\n");                                   10	9	8	7	6	5	4	3	2
}                                               10	9	8	7	6	5	4	3	2	1
}


#include <stdio.h>
int main()
{
int n,i,j;                                                                         o/p:
    printf("enter a no : ");                                                              * * * * * * * * * *
    scanf("%d",&n);                                                                       *                 * 
    for(i=1;i<=n;i++)  //denotes rows,i instruct to print 15 times                        *                 *
    {                                                                                     *                 *
       for(j=1;j<=n;j++) //denotes coloumns,i instruct to print 15 times                  *                 *
        {                                                                                 *                 *
          if(i==1||i==n||j==1||j==n)                                                      *                 *
          {                                                                               *                 *
            printf(" *");                                                                 *                 *
          }                                                                               * * * * * * * * * *
          else
          {  
            printf("  ");
          }
        }
        printf("\n");
    }

 #include<stdio.h>                                      o/p:
    int main()
    {                                                        *
        int n,i,j;                                             *
        printf("enter a no : ");                                 *
        scanf("%d",&n);                                            *
        for(i=1;i<=n;i++)                                            *
        {                                                      
            for(j=1;j<=n;j++)
            {
                if(i==j)
                {
                printf("*");
                }
                else
                {
                    printf("  ");
                }
            }
        printf("\n");
        }
    }



#include<stdio.h>
    int main()
    {                                         o/p:
        int n,i,j;                                  *               *                
        printf("enter a no : ");                      *           *
        scanf("%d",&n);                                 *       *
        for(i=1;i<=n;i++)                                 *   *
        {                                                   *
            for(j=1;j<=n;j++)                             *    *
            {                                           *        *
                if(i==j || i+j==n+1)                  *            *
                {                                   *                 *
                printf(" *");                                        
                }
                else
                {
                    printf("  ");
                }
            }
        printf("\n");
        }
    }

#include <stdio.h>
int main() 
{
    int num, i, isPrime = 1; // Assume number is prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = 0; // 0 and 1 are not prime numbers
    }
    else 
    {
        for (i=2;i<=num/2;i++) 
        {
            if (num % i == 0) 
            {
                isPrime = 0; // Found a factor, not prime
                break;
            }
        }
    }
    
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

#include <stdio.h>

int main() 
{
    int n, i, j, isPrime;

    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (i = 2; i <= n; i++) 
    {
        isPrime = 1; // Assume i is prime

        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0)
            {
                isPrime = 0; // i is divisible by j, so not prime
                break;
            }
        }
        if (isPrime) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

#include <stdio.h>

int main()
{
    int age;
    float height;
    char gender;
    scanf("%d",&age);
    scanf("%f",&height);
    scanf(" %c",&gender);
    if(gender=='M')
    {
        if(age>=18 && (height<=1.8 || height>=1.8))
        {
            printf("ELIGIBLE");
        }
        else
        {
            printf("NOT ELIGIBLE");
        }
    }
    else if(gender=='F')
    {
        if(age>=18 && height>=1.8)
        {
            printf("ELIGIBLE");
        }
        else
        {
            printf("NOT ELIGIBLE");
        }
    }
    else
    {
        printf("ENTER VALID GENDER !");
    }
}

#include <stdio.h>

int main()
{
    char ch;
    scanf(" %c",&ch);
    int asc=(int) ch;
    int flag=0;
    for(int i=2;i<asc;i++)
    {
        if(asc%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%c is PRIME",ch);
    }
    else
    {
        printf("%c is not PRIME",ch);
    }
}

#include <stdio.h>
int main()
{
    int a,b;
    printf("enter a no:");
    if (scanf("%d", &a) != 1)   // check if input is NOT an integer
    {
        printf("invalid i/p");
        return 0;   // stop the program
    }
    scanf("%d",&a);
    if(a>0)
    {
        if(a==1)
        {
           printf("%d",a);
        }
        else
        {
             b=a+1;
            printf("%d",b);
            printf("\n you are not mine!");
        }
    }
    else if(a<0)
    {
        printf("%d",a);
    }
    else if(a==0)
    {
        printf("%d",a);
    }
    else
    {
        printf("invalid i/p");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a no:");
    scanf("%d",&a);
    if(a>0)
    {
        for(i=a;i>=1;i--)
        {
            for(j=a;j>=i;j--)
            {
                printf(" %d",j);
            }
             printf("\n");
        }
    }
    else
    {
        printf("invalid no");
    }
}*/

#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a no:");
    scanf("%d",&a);
    if(a>0)
    {
        for(i=0;i<=a;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf(" *");
            }
            printf(" \n");
        }
    }
}

#include <stdio.h>
int main() 
{
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1)
    {
        isPrime = 0; 
    }
    else 
    {
        for (i=2;i<=num/2;i++) 
        {
            if (num % i == 0) 
            {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}

#include <stdio.h>
int main() 
{
    int num, count = 0, i, isPrime;
    printf("Enter a number: ");
    scanf("%d", &num);
    num++; 
    while (count < 5) 
    {  
        isPrime = 1; 
        if (num <= 1) 
        {
            isPrime = 0;
        }
        else 
        {
            for (i = 2; i*i <= num; i++) 
            {  
                if (num % i == 0) 
                {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) 
        {
            printf("%d ", num);
            count++; 
        }
        num++; 
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, power, middle;

    printf("Enter a number: ");
    scanf("%d", &num);

    // get last digit
    last = num % 10;

    // count digits
    digits = (int)log10(num);

    // get first digit
    first = num / (int)pow(10, digits);

    // remove first and last digit (middle part)
    middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // swap and form new number
    power = pow(10, digits);
    int swapped = last * power + middle * 10 + first;

    printf("swapped no is : %d\n", swapped);

    return 0;
}

 #include<stdio.h>
int main()
{ 
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int s=0;s<n-i-1;s++)
        {
            printf(" ");
        }
        for(int j=65;j<=65+i;j++)
        {
            printf("%c",(char)j);
        }
        printf("\n");
    }
}

#include<stdio.h>
int main()
{ 
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=65;j<=65+i;j++)
        {
            printf("%c",(char)j);
        }
        printf("\n");
    }
}

#include<stdio.h>
int main()
{ 
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int s=0;s<n-i-1;s++){
            printf(" ");
        }
        for(int j=1;j<=i+1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}

#include<stdio.h>
int main()
{ 
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int s=0;s<n-i-1;s++){
            printf(" ");
        }
        for(int j=1;j<=i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
================= VS CODE ======================
{
    "code-runner.runInTerminal": true,
    "workbench.editor.showTabs": "single",
    "editor.suggest.preview": true,
    "workbench.editor.alwaysShowEditorActions": true,
    "workbench.editor.enablePreviewFromCodeNavigation": true
    "workbench.editor.showTabs": "multiple",
    "workbench.editor.tabActionLocation": "right"
    "code-runner.runInTerminal": true,
}
	                 or
{
    "code-runner.runInTerminal": true,
    "editor.suggest.preview": true,
    "workbench.editor.alwaysShowEditorActions": true,
    "workbench.editor.enablePreviewFromCodeNavigation": true,
    "workbench.editor.showTabIndex": true,
    "extensions.autoUpdate": "off"
}
ctrl+shift+p then preferences: user open settings json the paste this code to run c program

================================string==============================================

	#include<stdio.h>
#include<string.h>
int main()
{
    //char name[5];
   /* char name[]="programming";
    //gets(name);//scanf("%s",&name);
    printf("%s\n",&name[2]);
    printf("%.4s\n",name);
    printf("%8.4s\n",name);
    puts(name);
    printf("%-8.4s",name);

    printf("name     = %p\n", (void *)name);
    printf("&name[0] = %p\n", (void *)&name[0]);
    printf("&name    = %p\n", (void *)&name);

    char name[30];
    printf("enter a name:");
    scanf("%s",&name);
    printf("%s",name);

     char name[30];
    printf("enter name:");
    //scanf("%s%s",fname, lname); 
    //printf("%s %s",fname,.lname); 
   
    //scanf("%5s",name);
    gets(name);     
    //printf("%.5s\n",name); 
    //printf("%10.5s\n",name);
    //printf("%s\n",&name[2]); 
    //puts(name); 
    //puts(name);  
    //int count=0,i=0;
    //count=strlen(name);
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d",count);

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Character = %c\n", ch);
    printf("ASCII = %d\n", ch);*/


    
    /*char s1[30]="hari"; //progarm to concancenate using strcat() and without strcat()
    char s2[]="haran";
    
    //strcat(s1,s2);
    //printf("%s",s1); --> o/p:hariharan
    //strcat(s1,s2,3);
    //printf("%s",s1); --> o/p:harihar
    
    int l1,l2,i;
    l1=strlen(s1);
    l2=strlen(s2);
    for (int i = 0; i <= l2; i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("%s",s1);*/


    char s1[30],s2[30]; //comparing strings without strcmp
    int flag=0;
    printf("enter a char 1:");
    fgets(s1, sizeof(s1), stdin); // --> using this to avoid bufferflow if user eneters lang char supose programminglanguage and char has char[10] it cause bufferflow by using fgets it only stores upto 1 to 9 this avoids overflow
    printf("enter a char 2:");
    fgets(s2, sizeof(s2), stdin);
    for(int i = 0;s1[i]!='\0' || s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1) printf("not same");
    else printf("same");

	char s1[30],c; //program to reverse the string
    int i,j,l;
    printf("enter char1:");
    fgets(s1,sizeof(s1),stdin);
    l=strlen(s1);
    /*for(int i=0;i<l/2;i++)
    {
        c=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=c;
    }*/

    for(i=0,j=l-1-i;i<j;i++,j--)
    {
        c=s1[i];
        s1[i]=s1[j];
        s1[j]=c;
    }
    printf("%s",s1);
}
