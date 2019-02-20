
#include<bits/stdc++.h>

using namespace std;

double matrix[10][10];
double coeff[10];
double sum=0.0;
double a=0.0;
int n;

void swap(int row)
{
    for(int i=1;i<=n;i++)
    {
        swap(matrix[row][i],matrix[1][i]);
    }
}
int main()
{
    cout<<"Enter n : "<<endl;

    cin>>n;


    for(int i=1;i<=n;i++)
    {
        cout<<"Enter coeff for eq "<<i<<endl;
        for(int j=1;j<=n+1;j++)
        {
            cin>>matrix[i][j];

        }
    }

    for(int i=1;i<=n;i++)
    {
       // cout<<"Enter coeff for eq "<<i<<endl;
        for(int j=1;j<=n+1;j++)
        {
            cout<<matrix[i][j]<<" ";

        }
        puts("");
    }


    puts("");
if(matrix[1][1]==0)
{
    for(int i=2;i<=n;i++)
    {
        if(matrix[i][1]!=0)
        {
            swap(i);
            break;
        }
    }
}

    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n;j++)
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


    coeff[n]=matrix[n][n+1]/matrix[n][n];


    for(int i=n-1;i>=1;i--)
    { sum=0.0;
        for(int j=i+1;j<=n;j++)
        {
            sum+=coeff[j]*matrix[i][j];
           // sum+=coeff[j]*matrix[i][j];

        }
        coeff[i]=(matrix[i][n+1]-sum)/matrix[i][i];
    }




    puts("");

    for(int i=1;i<=n;i++)
    {
        cout<<"X"<<i<<" : "<<coeff[i]<<endl;
        puts("");
    }

}
