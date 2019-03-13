#include<bits/stdc++.h>
 using namespace std;
 double a[10],b[10],mat[10][10];
 int n;
double fst(int k)
{
    double s=0;
    for(int i=1;i<=n;i++)
    {
        s+=pow(a[i],k);
    }
    return s;
}
double ff(int k)
{
    double s=0;
    for(int i=1;i<=n;i++)
    {
        s+=b[i]*pow(a[i],k);
    }
    return s;
}
 int main()
 {
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i]>>b[i];
     }
     for(int i=1;i<n;i++)
     {
         for(int j=1;j<=n;j++)
         {
             if(i==1&&j==1)
             {
                 mat[i][j]=n;
             }
             else
             {
                 if(j!=n)
                 {
                     mat[i][j]=fst(i+j-2);
                 }
                 else
                 {mat[i][j]=ff(i-1);

                 }
             }
         }
     }
      for(int i=1;i<n;i++)
     {
         for(int j=1;j<=n;j++)
         {
             cout<<mat[i][j]<<"  ";
         }
         puts("");
     }

     for(int i=1;i<n;i++)
     {
         for(int j=1;j<n;j++)
         {
             if(i<j)
             {
                double a=mat[j][i]/mat[i][i];
                for(int k=1;k<=n+1;k++)
                {
                    mat[j][k]=mat[j][k]-a*mat[i][k];
                }
             }


         }
     }


     double coeff[10];
     coeff[n-1]=mat[n-1][n]/mat[n-1][n-1];

     for(int i=n-1;i>=1;i--)
     {
         double s=0;
         for(int j=i+1;j<=n;j++)
         {
             s+=coeff[j]*mat[i][j];
         }
         coeff[i]=(mat[i][n]-s)/mat[i][i];
     }


     for(int i=1;i<n;i++)
     {
         cout<<"X"<<i<<" : " <<coeff[i]<<endl;
     }
     for(int i=1;i<n;i++)
     {
if(i>1)
{


         if(abs(coeff[i])==coeff[i])
         {
             cout<<"+";
         }
}

         cout<<coeff[i];
         if(i>1)
         {


          cout<<"X"<<"^"<<i-1;
         }
     }
 }
