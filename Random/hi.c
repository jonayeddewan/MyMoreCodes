int Prime[300000], cnt;
int mark[1000002];
void (int n)
{
    int i, j, limit = sqrt(n)+2;
    mark[1]=1;
    for(i=4; i<=n; i+=2)
        mark[i]=1;

    Prime[cnt++]=2; //Prime[0]=2;
    // cnt++;

    for(i=3; i<=n; i+=2)
        if(!mark[i])
        {
            Prime[cnt++]=i;
            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }

}