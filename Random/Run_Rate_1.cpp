#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t,r1,r2,lb;
    cin>>t;
    while(t--)
    {
        double crr,rrr;
        cin>>r1>>r2>>lb;

            crr = ((r2*1.00)/(300-lb))*6;
            rrr = (((r1-r2+1)*1.00)/lb)*6;

            cout<<fixed<<setprecision(2)<<crr<<" "<<rrr<<endl;
    }
    return 0;
}