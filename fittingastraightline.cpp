
#include<bits/stdc++.h>

using namespace std;
int n;
double a=0;
double b=0;
//double x,y;
double sx=0.0;
double sxx=0.0;
double sy=0.0;
double sxy=0.0;

struct Info
{
double x;
double y;

};
int main()
{
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
struct Info X[100];
cout<<"Enter x and y "<<endl;
    for(int i=1;i<=n;i++)
    {  cin>>X[i].x;
    cin>>X[i].y;

    }

cout<<"xi "<<" yi  "<<" xi^2  "<<" sxy  "<<endl;
//cout<<"                                                   "<<endl;

    for(int i=1;i<=n;i++)
    {
       sx+= log(X[i].x);

       sy+=log(X[i].y);

       sxy+=(log(X[i].x))*(log(X[i].y));

       sxx+=pow(log(X[i].x),2);


cout<<X[i].x<<"   "<<X[i].y<<"   "<<sxx<<"   "<<sxy<<endl;

    }

cout<<sx<<"  "<<sy<<"  "<<sxx<<"  "<<sxy<<endl;
    //cout<<sx<<endl;
      //cout<<sy<<endl;
     // cout<<sxy<<endl;
         // cout<<sxx<<endl;
            //cout<<sy<<endl;
b=(n*sxy-sx*sy)/(n*sxx-pow(sx,2));
a=exp((sy-b*sx)/n);
//a=log(a);

cout<<"The equation is :"<<"y="<<a<<"x^"<<b<<endl;



}
