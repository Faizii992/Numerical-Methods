#include<bits/stdc++.h>

using namespace std;
int degree;

float coeff[100];

double f(double x)
{
   double result=coeff[0];

    for(int i=1;i<=degree;i++)
    {
        result=result*x+coeff[i];
    }
    return result;

}


int main()
{
    double x0,x1,x2,fx2,fx0,fx1,e=0.001;
    cout<<"Enter degree: "<<endl;
int i=1;
    cin>>degree;
    cout<<"Enter coefficients: "<<endl;
    for(int i=0;i<=degree;i++)
    {
        cin>>coeff[i];
    }
    double a,b,del;

    cout<<"Enter the value of the ranges: "<<endl;
    cin>>a>>b;
    del=0.1;
double k=0;
    x1=del;
    x2=x1+del;
cout<<"-----------------------------------------------------------------"<<endl;
cout<<"ITERATION   "<<"x0   "<<"x1   "<<"x2   "<<"fx0   "<<"fx1   "<<"fx2    "<<endl;
puts("");
    while(x2<b)
    {x1=a;
    x2=x1+del;

    fx1=f(x1);
    fx2=f(x2);

double root;

    if(fx1*fx2<0)
    {


        while((fabs((x2-x1)/x2)>e))
        {cout<<i<<"    "<<x0<<"   "<<x1<<"   "<<x2<<"   "<<fx0<<"      "<<fx1<<"      "<<fx2<<"      "<<endl;


            x0=(x1+x2)/2;
            fx0=f(x0);

            if((fx0*fx1)<0)
            {
                x2=x0;
                fx2=fx0;
            }
            else
            {
                x1=x0;
                fx1=fx0;
            }

i++;

        }

   root=(x1+x2)/2;


k++;

puts("");
        cout<<"Root "<<k<<" "<<root<<endl;

    }

a=x2;
    }

    cout<<"----------------------------------------------------------------------"<<endl;
}
