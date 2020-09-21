#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int t;
    cin >> t;
    rep(_, t)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        ll ans = 0;
        rep(i, n - k + 1)
        {
            string t = s.substr(i, k);
            ll tmp = 1LL;
            rep(j, t.size())
            {
                tmp *= t[j] - '0';
            }
            ans = max(ans, tmp);
        }
        cout << ans << '\n';
    }
    return 0;
}
