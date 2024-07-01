#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int x[10] = {0};
    int d = -1, len;

    int n,m;

    cin>>n>>m;


    for(int i=1; i<10; i++)
    {
        x[i] = i%m;

        if(x[i]==0)
        {
            d = i;
            len = 1;
        }
    }

    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<10; j++)
        {
            x[j] = (x[j]*10 + j)%m;

            if(x[j]==0)
            {
                d = j;
                len = i;
            }
        }
    }

    cout<<len<<endl;


    if(d!=-1)
    {
        for(int i=1; i<=len; i++)
        {
            cout<<d;
        }
    }
    else
    cout<<-1<<endl;


    return 0;
}