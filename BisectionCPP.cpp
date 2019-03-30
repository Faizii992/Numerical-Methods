#include<bits/stdc++.h>

using namespace std;
double x1,x2,x0,fx1,fx2,fx0,root,coeff[10],n;
double f(double x)
{
    double result=coeff[0];
    for(int i=1;i<=n;i++)
    {
        result=result*x+coeff[i];
    }
    return result;
}



int main()
{
    cin>>n;

    for(int i=0;i<=n;i++)
    {
        cin>>coeff[i];
    }
    cin>>x1>>x2;
    fx1=f(x1);
    fx2=f(x2);
    if(fx1*fx2<0)
    {


    while((abs((x2-x1)/x2)>0.001))
    {
        x0=(x1+x2)/2;
        fx0=f(x0);
cout<<x0<<endl;
        if(fx0*fx1<0)
        {
            x2=x0;
            fx2=f(x0);
        }
        else
            if(fx0*fx2<0)
        {
            x1=x0;
            fx1=f(x0);
        }
    }

    root=(x1+x2)/2;

    }
cout<<"Root :"<<root<<endl;
}
