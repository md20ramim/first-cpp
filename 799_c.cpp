#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char a[9][9];
    while(t--)
    {
        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                if(a[i-1][j-1]=='#' && a[i-1][j+1]=='#' && a[i+1][j-1]=='#' && a[i+1][j+1]=='#')
                {
                    cout<<i<<" "<<j<<endl;
                }
            }
        }
    }
    return 0;
}
