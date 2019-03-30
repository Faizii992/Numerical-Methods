#include<bits/stdc++.h>
using namespace std;
int n;
double coeff[100],sum=0.0,A[10],B[10],C[10];

int main()
{
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
double sy=0,x=0;
cout<<"Enter x and y "<<endl;
    for(int i=0;i<n;i++)
    {  cin>>A[i]>>B[i];
    }
cout<<"Enter val "<<endl;
double val;
cin>>val;
for(int i=0;i<n;i++)
{
    double num=1;
    double den=1;
    for(int j=0;j<n;j++)
    {
        if(j!=i)
        {
        num*=(val-A[j]);

        den*=(A[i]-A[j]);
        }
    }
    C[i]=(B[i]*num)/den;
    cout<<C[i]<<endl;
    sum+=C[i];
}
cout<<sum<<endl;
}
