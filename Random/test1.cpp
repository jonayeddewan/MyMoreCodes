#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
  vector<string> name;
  string a;
  getline(cin,a);
  name.push_back(a);

  name.pop_back();
  cout<<name[0]<<" "<<" "<<name[0].size()<<endl;

  return 0;

}