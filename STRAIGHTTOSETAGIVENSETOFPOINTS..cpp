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
       sx+= X[i].x;

       sy+=X[i].y;

       sxy+=(X[i].x)*(X[i].y);

       sxx+=pow(X[i].x,2);


cout<<X[i].x<<"   "<<X[i].y<<"   "<<sxx<<"   "<<sxy<<endl;

    }

cout<<sx<<"  "<<sy<<"  "<<sxx<<"  "<<sxy<<endl;
    //cout<<sx<<endl;
      //cout<<sy<<endl;
     // cout<<sxy<<endl;
         // cout<<sxx<<endl;
            //cout<<sy<<endl;
b=(n*sxy-sx*sy)/(n*sxx-pow(sx,2));
a=(sy-b*sx)/n;

cout<<"The equation is :"<<"y="<<b<<"x+"<<a<<endl;



}
