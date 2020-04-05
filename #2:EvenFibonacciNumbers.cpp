#include <iostream>      // cout, endl, cin
#include <string>        // string, to_string, stoi
#include <vector>        // vector
#include <algorithm>     // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility>       // pair, make_pair
#include <tuple>         // tuple, make_tuple
#include <cstdint>       // int64_t, int*_t
#include <cstdio>        // printf
#include <map>           // map
#include <queue>         // queue, priority_queue
#include <set>           // set
#include <stack>         // stack
#include <deque>         // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset>        // bitset
#include <cctype>        // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <fstream>
#include <sstream>
#include <cstring>
#include <ctime>
#include <cassert>

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
    rep(i, t)
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
