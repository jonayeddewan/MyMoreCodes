#include<bits/stdc++.h>
/*#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define end cout<<endl;
#define f(a,n) for(long long i=a;i<n;i++)
#define f1(n,a) for(long long i=0;i<n;i++)cin>>a[i];
#define f2(n,a) for(long long i=0;i<n;i++)cout<<a[i]<<'\n';
#define c(a) cout<<a<<'\n'; */
typedef long long ll; 
using namespace std;

int main()
{
//ios_base::sync_with_stdio(0);
//cin.tie(0);


     ll D1,D2,a1,b1,c1,a2,b2,c2,sum1=0,sum2=0,sum,W,X,Y,Z, n;
     string s, t;
     char d,e, foo;

     getline(cin, t);
     getline(cin, s);

     if(t.size() == 5){
          n = t[4]-'0';  
          //cout << "-> " << n << endl;
     }
     else{
          n = ((t[4]-'0') * 10) + (t[5]-'0');
     }
     //cout << t << " " << n << " " << s << endl;

     D1 = n;
     int p, q;

     //cout << ",---> " << s[0] << endl;
     a1 = ((s[0]-'0')*10) + (s[1]-'0');
     b1 = ((s[5]-'0')*10) + (s[6]-'0');
     c1 = ((s[10]-'0')*10) + (s[11]-'0');


     getline(cin, t);
     getline(cin, s);

     if(t.size() == 5){
          n = t[4]-'0';  
     }
     else{
          n = ((t[4]-'0') * 10) + (t[5]-'0');
     }
 
     //cout << t << " " << n << " " << s << endl;

     D2 = n;
     a2 = ((s[0]-'0')*10) + (s[1]-'0');
     b2 = ((s[5]-'0')*10) + (s[6]-'0');
     c2 = ((s[10]-'0')*10) + (s[11]-'0');


     //printf("%d %d %d %d\n%d %d %d %d\n", D1, a1, b1, c1, D2, a2, b2, c2);










     /*cin>>s>>D1;
     cin>>a1>>d>>b1>>e>>c1;
     cin>>s>>D1;
     cin>>a1>>d>>b1>>e>>c1; */
     sum1=(D1*24+a1)*3600+60*b1+c1;
     sum2=(D2*24+a2)*3600+60*b2+c2;
     sum=sum2-sum1;
     Z=sum%60;
     ll m=sum/60;
     Y=m%60;
     ll h=m/60;
     X=h%24;
     W=h/24;
     cout<<W<<" day(s)"<<'\n';
     cout<<X<<" hour(s)"<<'\n';
     cout<<Y<<" minute(s)"<<'\n';
     cout<<Z<<" second(s)"<<'\n';


return 0;}