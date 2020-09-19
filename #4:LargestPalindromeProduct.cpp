#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

bool is_palindrome(int num)
{
    int m = num;
    int n = 0;
    while (num)
    {
        n = n * 10 + num % 10;
        num /= 10;
    }
    return n == m;
}

int main()
{
    int t;
    cin >> t;
    rep(_, t)
    {
        int n;
        cin >> n;
        int res = 0;
        for (int i = 999; i > 99; i--)
        {
            for (int j = i; j > 99; j--)
            {
                int multi = i * j;
                if (is_palindrome(i * j) && multi < n)
                {
                    res = max(res, i * j);
                }
            }
        }
        cout << res << '\n';
    }
    return (0);
}
