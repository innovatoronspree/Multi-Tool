//
//  main.c
//  First project
//
//  Created by Siddharth Sharma on 23/03/19.
//  Copyright © 2019 Siddharth Sharma. All rights reserved.
//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void addition()
{
    int array[100],n,sum=0,i;
    printf("Enter number of integers to be added: \n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Enter number %d:\n ", i+1 );
        scanf("%d", &array[i]);
    }
    for(i=0;i<n;i++)
    {
        sum= sum +array[i];
    }
    printf("Sum = %d \n", sum);
}
void subtraction()
{
    int a,b,c;
    printf("Enter the two integers for subtraction: \n ");
    scanf("%d %d", &a,&b);
    
    c= a-b;
    printf("\n Difference = %d \n", c);
}
void multiplication()
{
    int array[50],n,i,product=0;
    printf(" \n Enter number of integers to be multiplied: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number %d: \n", i+1);
        scanf("%d", &array[i]);
    }
    product=array[0];
    for(i=1;i<n;i++)
    {
        product=product*array[i];
    }
    printf("\n Product = %d \n ", product);
}
void division()
{
    float a,b,c;
    printf("Enter the numbers to be divided: \n");
    scanf("%f %f", &a, &b);
    c= a/b;
    if(b!=0)
    {
        printf("Result = %f \n", c);
    }
    else
    {
        printf(" \n Division is undefined  \n");
    }
}
void modular()
{
    int a,b,c;
    printf("Enter the numbers on which modular division has to be performed: \n ");
    scanf("%d %d", &a,&b);
    c= a%b;
    printf("Result = %d \n", c);
}
void differentiation()
{
    int array[10],i,n,d[10];
    printf("Enter the order of the polynomial expression to be evaluated \n");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        printf("Enter the co-efficient of x^%d:",i);
        scanf("%d",&array[i]);
        
    }
    printf("Given polynomial is\n");
    for(i=n;i>=0;i--)
    {
        
        if(array[i]>0)
        {
            if(i!=n)
                printf(" + ");
        }
        else if(array[i]<0)
            printf(" - ");
        else
            printf(" ");
        printf("%dx^%d",abs(array[i]),i);
    }
    for(i=n;i>=0;i--)
        d[i]=array[i]*i;
    printf("\n Derivative of the given polynomial is\n");
    for(i=n;i>=1;i--)
    {
        if(d[i]>0)
            printf(" + ");
        else if(d[i]<0)
            printf(" - ");
        else
            printf(" ");
        printf("%dx^%d",d[i],i-1);
    }
}
void pattern()
{
    int i, i1,j1,k1,n1, n2, i2, j2,m3,n3, i3,j3;
    printf(" \n Enter 1 \t\t\t  Enter 2 \n");
    printf(" for triangle \t\t  for square \n\n");
    printf(" \n\t\t   Enter 3  \t\n");
    printf(" \t\t for rectangle \n\n");
    printf(" Please enter your choice: \n");
    scanf("%d", &i);
    switch(i)
    {
        case 1:
        {
            printf("Enter the number of rows: \n ");
            scanf("%d", &n1);
            for(i1=1;i1<=n1;i1++)
            {
                for(j1=i1;j1<n1;j1++)
                {
                    printf(" ");
                }
                for(k1=1;k1<(i1*2);k1++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }
        case 2:
        {
            printf("\n Enter the number of rows for the square: \n ");
            scanf("%d", &n2);
            for(i2=0;i2<n2;i2++)
            {
                for(j2=0;j2<n2;j2++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }
        case 3:
        {
            printf("Enter the number of rows and columns: \n");
            scanf("%d %d", &m3, &n3);
            for(i3=0;i3<n3;i3++)
            {
                for(j3=0;j3<n3;j3++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }
        default:
        {
            printf("\n Please enter a valid option \n");
            break;
        }
    }
}
void trigonometry()
{
    float a,b,c,d,e,f,g;
    printf("\n Enter value of number whose trigonometric value are to be determined: \n");
    scanf("%f", &a);
    b= sin(a);
    c= cos(a);
    d= tan(a);
    e= 1/b;
    f= 1/c;
    g= 1/d;
    printf("\n Value of sin(%f) is : %f", a,b);
    printf("\n Value of cos(%f) is : %f",a,c);
    printf("\n Value of tan(%f) is : %f",a,d);
    printf("\n Value of cosec(%f) is : %f",a,e);
    printf("\n Value of sec(%f) is : %f",a,f);
    printf("\n Value of cot(%f) is : %f",a,g);
    printf("\n");
}
void area()
{
    int i;
    float a,b,c,s,areas=0,num, p,q,r,t,u,x,y;
    printf(" \n Enter 1 \t\t\t  Enter 2 \n");
    printf(" for triangle \t\t  for square \n\n");
    printf(" \n Enter 3 \t\t\t  Enter 4 \n");
    printf(" for rectangle \t\t  for circle \n\n");
    printf(" Please enter your choice: \n");
    scanf("%d", &i);
    switch(i)
    {
        case 1:
        {
            printf("\n Enter the sides of the triangle: \n");
            scanf("%f%f%f", &a,&b,&c);
            s=(a+b+c)/2;
            areas = s*(s-a)*(s-b)*(s-c);
            num= sqrt(areas);
            printf("\n Area = %f \n", num);
            break;
        }
        case 2:
        {
            printf("Enter the side of square: \n");
            scanf("%f", &p);
            q= p*p;
            printf("\n Area = %f \n", q);
            break;
        }
        case 3:
        {
            printf(" Enter the length and breadth of rectangle: \n ");
            scanf("%f%f", &r,&t);
            u= r*t;
            printf("\n Area = %f \n", u );
            break;
        }
        case 4:
        {
            printf(" Enter the radius of the circle: \n");
            scanf("%f", &x);
            y= 3.14*x*x;
            printf("\n Area = %f \n", y);
            break;
        }
        default:
        {
            printf("\n Please enter a valid option \n");
            break;
        }
            
    }
}
void hcfactor(int a, int b)
{
    int c;
    c=a%b;
    if(c==0)
    {
        printf("\n HCF is %d \n", b);
    }
    else
    {
        a=b;
        b=c;
        hcfactor(a,b);
    }
}
void lcm()
{
    int a,b,mul;
    printf("Enter the numbers whose LCM needs to be computed: \n");
    scanf("%d%d", &a,&b);
    mul= (a>b)? a :b;
    while(1)
    {
        if(mul%a==0 && mul%b==0)
        {
            printf("\n LCM = %d \n", mul);
            break;
        }
        ++mul;
    }
}
void sorting()
{
    int a,n,k,i,j,min=0, position,l,m,p, max=0, position2,q;
    int array[100];
    printf("\n Enter number of elements which are to be sorted: \n");
    scanf("%d", &n);
    printf("Enter the elements: \n\n");
    for(k=0;k<n;k++)
    {
        printf("Enter element %d: \n", k+1);
        scanf("%d",&array[k]);
    }
    printf(" \n Enter order of sorting: \n\n");
    printf(" Enter 1 \t\t\t\t     Enter 2 \n");
    printf(" for ascending \t\t\t\t for descending \n\n ");
    printf("\n Please enter your choice: \n\n");
    scanf("%d", &a);
    switch(a)
    {
        case 1:
        {
            for(i=0;i<n;i++)
            {
                min= array[i];
                position=i;
                for(j=i+1;j<n;j++)
                {
                    if(array[j]<min)
                    {
                        min=array[j];
                        position=j;
                    }
                }
                array[position]=array[i];
                array[i]= min;
            }
            printf(" The sorted array is: \n\n");
            for(l=0;l<n;l++)
            {
                printf("%d->", array[l]);
            }
            printf("\n");
            break;
        }
        case 2:
        {
            for(m=0;m<n;m++)
            {
                max= array[m];
                position2=m;
                for(p=m+1;p<n;p++)
                {
                    if(array[p]>max)
                    {
                        max=array[p];
                        position2=p;
                    }
                }
                array[position2]=array[m];
                array[m]= max;
            }
            printf(" The sorted array is: \n\n");
            for(q=0;q<n;q++)
            {
                printf("%d->", array[q]);
            }
            break;
        }
        default:
        {
            printf("\n Please enter a valid option \n");
            break;
        }
    }
}
int main()
{
    char string[50];
    printf("Enter your name: ");
    gets(string);
    printf(" \t Hey %s, welcome to the the world of calculations..\n\n",string);
    printf(" Enter A \t\t\t Enter B \t\t\t\t Enter C \n");
    printf(" for addition \t\t for subtraction \t     for multiplication \n\n");
    printf(" Enter D \t\t\t Enter E \t\t\t\t Enter F \n");
    printf(" for division \t\t for modular division  \t for differentiation  \n\n");
    printf(" Enter G \t\t\t Enter H \t\t\t\t Enter I \n");
    printf(" for patterns \t\t for trigonometry  \t\t for area  \n\n");
    printf(" Enter J \t\t\t Enter K \t\t\t\t Enter L \n");
    printf(" for HCF \t\t\t for LCM  \t\t\t     for sorting  \n\n");
    char i;
    printf("\n Please enter your choice: \n");
    scanf("%c", &i);
    switch(i)
    {
        case 'a':
        case 'A':
        {
            addition();
            break;
        }
        case 'b':
        case 'B':
        {
            subtraction();
            break;
        }
        case 'c':
        case 'C':
        {
            multiplication();
            break;
        }
        case 'd':
        case 'D':
        {
            division();
            break;
        }
        case 'e':
        case 'E':
        {
            modular();
            break;
        }
        case 'f':
        case 'F':
        {
            differentiation();
            break;
        }
        case 'g':
        case 'G':
        {
            pattern();
            break;
        }
        case 'h':
        case 'H':
        {
            trigonometry();
            break;
        }
        case 'i':
        case 'I':
        {
            area();
            break;
        }
        case 'j':
        case 'J':
        {
            int a,b;
            printf("Enter a and b: \n");
            scanf("%d%d", &a,&b);
            if(a>b)
            {
                hcfactor(a,b);
            }
            else
            {
                hcfactor(b,a);
            }
            break;
        }
        case 'k':
        case 'K':
        {
            lcm();
        }
        case 'l':
        case 'L':
        {
            sorting();
            break;
        }
        default:
        {
            printf("\n Please enter a valid option \n");
            break;
        }
    }
}

