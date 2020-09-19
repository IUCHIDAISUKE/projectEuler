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

    rep(_, t)
    {
        ll n;
        cin >> n;

        vector<ll> vec;
        vec.push_back(1);
        vec.push_back(2);

        int cnt = 2;

        while (vec[cnt - 1] < n)
        {
            vec.push_back(vec[cnt - 1] + vec[cnt - 2]);
            cnt++;
        }
        ll ans = 0;
        rep(i, vec.size() - 1)
        {
            if (vec[i] % 2 == 0)
                ans += vec[i];
        }
        cout << ans << endl;
    }
    return 0;
}
