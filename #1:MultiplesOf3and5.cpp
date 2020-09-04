#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
#define all2(a, b) (a).begin(), (a).begin() + (b)
#define debug(vari) cerr << #vari << " = " << (vari) << endl;

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        ll n;
        cin >> n;
        ll ans = 0;
        ll n3 = (n - 1) / 3, n5 = (n - 1) / 5, n15 = (n - 1) / 15;
        ans += ((3 + n3 * 3) * n3) / 2;
        ans += ((5 + n5 * 5) * n5) / 2;
        ans -= ((15 + n15 * 15) * n15) / 2;

        cout << ans << endl;
    }
    return 0;
}
