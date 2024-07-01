#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n;
    int d;
    cin>>k>>l>>m>>n>>d;
    int result=0;
    for(int i=1;i<=d;i++){
        if(i%k ==0){
            result++;
        }
        else if(i%l ==0){
            result++;
        }
        else if(i%m ==0){
            result++;
        }
        else if(i%n ==0){
            result++;
        }
    }
    cout<<result<<endl;
return 0;
}