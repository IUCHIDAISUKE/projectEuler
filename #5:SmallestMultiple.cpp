#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

ll gcd(ll a, ll b)
{
    return (!b ? a : gcd(b, a % b));
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    int t;
    cin >> t;
    rep(_, t)
    {
        ll n;
        cin >> n;

        ll res = 1;
        rep(i, n)
        {
            res = lcm(res, i + 1LL);
        }
        cout << res << endl;
    }
    return (0);
}

// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;

// #define rep(i, n) for (int i = 0; i < (n); i++)
// #define rep2(i, a, b) for (int i = (a); i < (b); ++i)
// #define all(a) (a).begin(), (a).end()

// map<ll, ll> prime_factoriz(ll n)
// {
//     map<ll, ll> res;
//     for (ll i = 2; i * i <= n; i++)
//     {
//         if (n % i)
//             continue;
//         ll ex = 0;
//         while (n % i == 0)
//         {
//             ex++;
//             n /= i;
//         }
//         res[i] = ex;
//     }

//     if (n != 1)
//     {
//         res[n] = 1;
//     }
//     return res;
// }

// long long pow(long long a, long long n)
// {
//     long long res = 1;
//     while (n > 0)
//     {
//         if (n & 1)
//             res = res * a;
//         a = a * a;
//         n >>= 1;
//     }
//     return res;
// }

// int main()
// {
//     int x;
//     cin >> x;

//     ll ans = 1;
//     map<ll, ll> res;
//     rep(i, x)
//     {
//         auto mp_p_f = prime_factoriz(i + 1);
//         for (auto itr = mp_p_f.begin(); itr != mp_p_f.end(); itr++)
//         {
//             ll prime = itr->first;
//             ll exp = itr->second;
//             if (res[prime] < exp)
//             {
//                 res[prime] = exp;
//             }
//         }
//     }
//     for (auto itr = res.begin(); itr != res.end(); itr++)
//     {
//         ll prime = itr->first;
//         ll exp = itr->second;
//         // cout << prime << ' ' << exp << endl;
//         ans *= pow(prime, exp);
//     }
//     cout << ans << endl;
//     return (0);
// }

// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;

// #define rep(i, n) for (int i = 0; i < (n); i++)
// #define rep2(i, a, b) for (int i = (a); i < (b); ++i)
// #define all(a) (a).begin(), (a).end()

// // prime check
// // prime -> 1, not prime -> 0
// vector<int> eratosthenes(int k)
// {
//     vector<int> prime(k + 1, 1);
//     prime[0] = 0;
//     prime[1] = 0;
//     for (int i = 2; i < k + 1; i++)
//     {
//         if (!prime[i])
//             continue;
//         for (int j = i + i; j < k + 1; j += i)
//         {
//             prime[j] = 0;
//         }
//     }
//     return prime;
// }

// // power(Exponetiation by Squaring) <- 繰り返し二乗法とかだったような
// ll pow(ll a, ll n)
// {
//     ll res = 1;
//     while (n > 0)
//     {
//         if (n & 1)
//             res = res * a;
//         a = a * a;
//         n >>= 1;
//     }
//     return res;
// }

// int main()
// {
//     int x;
//     cin >> x;
//     vector<int> prime = eratosthenes(x);

//     ll i = 2;
//     ll ans = 1;
//     while (i <= x)
//     {
//         if (!prime[i])
//         {
//             i++;
//             continue;
//         }

//         // i^a =< k <=> a =< log(x) / log(i) <- 最大の整数求める, 神すぎて🤣
//         ll a = floor(log(x) / log(i));
//         ans = ans * pow(i, a);
//         i++;
//     }
//     cout << ans << endl;
//     return (0);
// }
