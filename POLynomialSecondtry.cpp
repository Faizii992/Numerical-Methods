#include<bits/stdc++.h>
using namespace std;
int n;
double a=0,b=0,sx=0.0,sxx=0.0,sy=0.0,sxy=0.0,matrix[100][100],coeff[100],sum=0.0,A[10],B[10];
double squaresum(int k)
{
    double x,sum=0.0;
    if(k>=1)
    {
    for(int i=1;i<=n;i++)
    {
    x=pow(A[i],k);
    sum+=x;
    }
    return sum;
    }
    else
    {
        return 1;
    }
}
double squaresumyyy(int k)
{
    double x=1,sum=0.0;
    for(int i=1;i<=n;i++)
    {
        if(k>1)
        {
        x=pow(A[i],k-1);
        }
        sum+=B[i]*x;
    }
    return sum;
}
int main()
{
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
double sy=0,x=0;
cout<<"Enter x and y "<<endl;
    for(int i=1;i<=n;i++)
    {  cin>>A[i]>>B[i];
    }
  for(int i=1;i<=n;i++)
    {
    sy+=B[i];
    }
for(int i=1;i<n;i++)
{
    for(int j=1;j<=n;j++)
    { x=0;
        if(i==1&&j==1)
        { matrix[i][j]=n;
        }
        else
        {
            x=0;
             x=squaresum(i+j-2);
            matrix[i][j]=x;
           if(j==n)
            {
        matrix[i][j]=squaresumyyy(i);
            }}}
}
  for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        puts("");
    }
  for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(i<j)
            {
            a=matrix[j][i]/matrix[i][i];
                for(int k=1;k<=n+1;k++)
                {
                    matrix[j][k]=matrix[j][k]-(a*matrix[i][k]);
                }
            }
        }
    }
    coeff[n-1]=matrix[n-1][n]/matrix[n-1][n-1];
    for(int i=n-2;i>=1;i--)
    { sum=0.0;
        for(int j=i+1;j<n;j++)
        {
            sum+=coeff[j]*matrix[i][j];
        }
        coeff[i]=(matrix[i][n]-sum)/matrix[i][i];
    }
    puts("");
    for(int i=1;i<n;i++)
    {
        cout<<"X"<<i<<" : "<<coeff[i]<<endl;
        puts("");
    }
     cout<<"The least squares quadratic polynomial is: y=";
 for(int i=1;i<n;i++)
    {
         if(i>1)
       {
           if(coeff[i]==abs(coeff[i]))
           { cout<<"+";
           }
       }
       cout<<coeff[i];
               if(i>1)
{ cout<<"x"<<"^"<<i-1;
}}
}
