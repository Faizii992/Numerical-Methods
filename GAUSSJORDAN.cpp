
#include<bits/stdc++.h>


using namespace std;
double matrix[100][100];
double coeff[100];
    int n;
int main()
{

    cout<<"Enter the number of variables: "<<endl;
    cin>>n;

   // cout<<"Enter coefficients for the eqn: "<<endl;
    for(int i=1;i<=n;i++)
    {cout<<"Enter coefficients for the eqn: "<<i<<endl;

        for(int j=1;j<=n+1;j++)
        {
            cin>>matrix[i][j];

        }
    }

    puts("");


       for(int i=0;i<n;i++)
    {//cout<<"Enter coefficients for the eqn: "<<i<<endl;

        for(int j=0;j<=n;j++)
        {
            cout<<matrix[i][j]<<" ";


        }
        puts("");
    }
double a=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {

        if(j!=i)
        {
            a=matrix[j][i]/matrix[i][i];

        for(int k=1;k<=n+1;k++)
        {

            matrix[j][k]=matrix[j][k]-(a*matrix[i][k]);

        }
        }
        }
puts("");
        cout<<"Step "<<i<<endl;
           for(int a=1;a<=n;a++)
    {//cout<<"Enter coefficients for the eqn: "<<i<<endl;

        for(int b=1;b<=n+1;b++)
        {
            cout<<matrix[a][b]<<" ";


        }
        puts("");
    }


    }
puts("");

    for(int i=1;i<=n;i++)
    {
        coeff[i]=matrix[i][n+1]/matrix[i][i];
        cout<<"X"<<i<<" : "<<coeff[i];
        puts("");

    }



}
