#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        long long fact=1, numerator, denominator;
        int perm, x=10-n, r=2, i=1, sub;
        while(i<=x)
        {
            fact = i*fact;
            i++;
        }
        numerator = fact;                    // n!
        sub = x-r;
        fact = 1;
        i = 1;
        while(i<=sub)
        {
            fact = i*fact;
            i++;
        }
        denominator = fact;                // (n-r)!
        perm = numerator/denominator;
        cout<<perm*4 - perm<<endl;
    }
    return 0;
}