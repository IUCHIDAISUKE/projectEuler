#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
	ll n;
	cin >> n;

	vector<pair<ll, int>> res;
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
		res.push_back({i, ex});
	}

	sort(all(res));
	reverse(all(res));

	cout << res[0].first << endl;

	return (0);
}
