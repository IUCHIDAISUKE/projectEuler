#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int grid[20 + 1][20 + 1];
    rep(i, 20) rep(j, 20) cin >> grid[i][j];

    ll ans = 0;
    rep(i, 20)
    {
        rep(j, 20)
        {
            ll tmp = 1;
            if (j + 3 < 20)
            {
                rep(k, 4)
                {
                    tmp *= grid[i][j + k];
                }
                ans = max(ans, tmp);
            }
        }
    }

    rep(i, 20)
    {
        rep(j, 20)
        {
            ll tmp = 1;
            if (j + 3 < 20)
            {
                rep(k, 4)
                {
                    tmp *= grid[j + k][i];
                }
                ans = max(ans, tmp);
            }
        }
    }

    rep(i, 20)
    {
        rep(j, 20)
        {
            ll tmp = 1;
            if (i + 3 < 20 && j + 3 < 20)
            {
                rep(k, 4)
                {
                    tmp *= grid[i + k][j + k];
                }
                ans = max(ans, tmp);
            }
        }
    }

    rep(i, 20)
    {
        rep(j, 20)
        {
            ll tmp = 1;
            if (i + 3 < 20 && j - 3 >= 0)
            {
                rep(k, 4)
                {
                    tmp *= grid[i + k][j - k];
                }
                ans = max(ans, tmp);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
