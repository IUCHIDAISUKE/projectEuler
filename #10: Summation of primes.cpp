#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1000000;

int ck[MAX_N + 10];
ll accumulate_sum[MAX_N + 10 + 1];

void eratosthenes()
{
    rep(i, MAX_N + 10)
    {
        ck[i] = 1;
    }
    ck[0] = ck[1] = 0;
    for (int i = 2; i * i <= MAX_N + 10; i++)
    {
        if (!ck[i])
        {
            continue;
        }
        for (int j = i * 2; j < MAX_N + 10; j += i)
        {
            ck[j] = 0;
        }
    }
    rep(i, MAX_N + 10)
    {
        accumulate_sum[i + 1] = accumulate_sum[i] + i * ck[i] + 0LL;
    }
}

int main()
{
    int t;
    cin >> t;
    eratosthenes();
    rep(_, t)
    {
        int n;
        cin >> n;

        cout << accumulate_sum[n + 1] << '\n';
    }
    return 0;
}
