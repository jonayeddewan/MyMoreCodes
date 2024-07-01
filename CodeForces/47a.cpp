#include <stdio.h>
int main(){
    int i,a[501]={0},n;
    for(i=1;i<32;i++){
        a[i*(i+1)/2]=1;
    }
    scanf("%d",&n);
    if(a[n]){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}