#include<stdio.h>
int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int arr[13];
    int t,n,b,d,i,sum,count;

    scanf("%d",&t);

    while(t--)
    {
        for(int i=1; i<=10; i++)
        {
            arr[i]=0;
        }
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&b,&d);
            if(arr[d]<b)
            {
                arr[d] = b;
            }
        }
        sum=0;
        count=0;
        for(i=1;i<=10;i++)
        {
            if(arr[i] == 0)
            {
                count++;
                break;
            }

            else
            {
                sum+=arr[i];
            }
        }
        if(count==0) printf("%d\n",sum);
        else printf("MOREPROBLEMS\n");
    }
    //2010006
    return 0;
}
