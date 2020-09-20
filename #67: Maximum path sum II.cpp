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
        int n;
        cin >> n;
        int cnt = 1;
        int nbrs[100][100];
        rep(i, n)
        {
            rep(j, cnt) cin >> nbrs[i][j];
            cnt++;
        }

        for (int i = n - 1; i > 0; i--)
        {
            int tmp[100];
            rep(j, n - 1)
            {
                nbrs[i - 1][j] += max(nbrs[i][j], nbrs[i][j + 1]);
            }
        }

        cout << nbrs[0][0] << "\n";
    }
    return 0;
}
