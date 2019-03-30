#include<bits/stdc++.h>
using namespace std;
int n;
double x[10],y[10][10];
double calc(int i,int val)
{
    double prod=1;
    for(int j=0;j<i;j++)
    {prod*=(val-x[j]);

    }
    return prod;

}
int main()
{
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>y[i][0];
    }
    sum=y[0][0];
    int val=10;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            y[j][i]=(y[j][i-1]-y[j+1][i-1])/(x[j]-(x[i+j]));
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<y[i][j]<<"\t";
        }
    cout<<"\n";
    }
    for(int i=1;i<=n;i++)
    {
        sum+=calc(i,val)*y[0][i];
    }
    cout<<"Sum : "<<sum<<endl;

}
