int Max_SubArray(const vector<int>& num)
{
    int sum = 0, best = 0;
    for(int i=0; i<num.size(); i++)
    {
        sum = max(num[i],sum+num[i]);
        best = max(best, sum);
    }
    return best;
}