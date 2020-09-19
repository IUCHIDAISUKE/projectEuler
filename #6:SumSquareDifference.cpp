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

        cout << n * (n + 1) * (n - 1) * (3 * n + 2) / 12 << '\n';
    }
    return (0);
}

// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;

// #define rep(i, n) for (int i = 0; i < (n); i++)
// #define rep2(i, a, b) for (int i = (a); i < (b); ++i)
// #define all(a) (a).begin(), (a).end()

// int main()
// {
//     int t;
//     cin >> t;
//     rep(_, t)
//     {
//         int x;
//         cin >> x;

//         ll ans = 0;
//         rep2(i, 1, x + 1) rep2(j, i + 1, x + 1) ans += i * j;
//         cout << ans * 2 << '\n';
//     }
//     return (0);
// }
