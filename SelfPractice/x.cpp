
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
signed main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		ll c;
		ll l, r;
		cin >> n >> c;
		l = 0;
		ll sum = 0;
		ll x[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> r;
			x[i] = r;
			l += r * r;
			sum += r;
		}

		c -= l;
		c = c / 4;
		c = c / n;
		sum /= 2 * n;
		ll z = sqrtl(sum * sum + c);
		z -= sum;
		cout << z << endl;
	}
	return 0;
}