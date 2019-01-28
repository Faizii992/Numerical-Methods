#include<stdio.h>
#include<iostream>
#include<cmath>
#include<stdlib.h>

using namespace std;
static int coeff[100];
static double f(int degree,double x)
{    double result=coeff[0];

for(int i=1;i<=degree;i++)
{
    result=result*x+coeff[i];

}
//cout<<result<<endl;
return result;

}
double error(double x1,double x2)
{

    return abs((x1-x2)/x1);
}
int main()
{ double x1,x2,x3,fx1,fx2,fx3;
double E=0.001;
int degree;
//static coeff[degree+1];
printf("Enter the degree:");
scanf("%d",&degree);
printf("Enter coeff:");
for(int i=0;i<=degree;i++)
{
    scanf("%d",&coeff[i]);
}
float root;
printf("Enter x1,x2: ");
cin>>x1;
cin>>x2;

fx1=f(degree,x1);
fx2=f(degree,x2);
cout<<fx2<<endl;
x3=(fx2*x1-fx1*x2)/(fx2-fx1);
fx3=f(degree,x3);
//double e=error(x3,x2);
double err=abs((x3-x2)/x3);
while(E<err)
{
 cout<<x3<<endl;
    x1=x2;
    x2=x3;
    fx1=f(degree,x1);
fx2=f(degree,x2);

x3=(fx2*x1-fx1*x2)/(fx2-fx1);
fx3=f(degree,x3);
//e=error(x3,x2);
 err=abs((x3-x2)/x3);

}

cout<<x3<<endl;

}
