#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

bool is_palindrome(int num)
{
	vector<int> vec, ck;
	while (num)
	{
		vec.push_back(num % 10);
		num /= 10;
	}
	ck = vec;
	reverse(all(ck));
	return ck == vec;
}

int main()
{
	int t;
	cin >> t;

	rep(_, t)
	{
		ll n;
		cin >> n;

		vector<ll> res;
		for (ll i = 2; i * i < n + 1; i++)
		{
			if (n % i != 0)
				continue;
			int ex = 0;
			while (n % i == 0)
			{
				ex++;
				n /= i;
			}
			res.push_back(i);
		}
		if (n != 1)
			res.push_back(n);
		sort(all(res));
		reverse(all(res));

		cout << res[0] << endl;
	}
	return (0);
}
