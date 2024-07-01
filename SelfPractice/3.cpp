#include<bits/stdc++.h>
#include<ctime>
using namespace  std;

int main()
{
    clock_t start,end;
    double deletingTime,bubbleTime;
    int a[10000];

    for(int i=0; i<10000; i++)
    {
        a[i] = i+1;
    }
    start = clock();

    for(int i=1; i<10000; i++)
    {
        a[i-1] = a[i];
    }
    end = clock();

    deletingTime = double(end-start)/(double)CLOCKS_PER_SEC;
  

    // for(int i=0; i<999; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<"\n";
    cout<<"Time taken for deleting an element of an Array : "<<fixed<<setprecision(50)<<deletingTime<<endl;

}