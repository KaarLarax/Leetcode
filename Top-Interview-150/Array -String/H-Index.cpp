// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using ii = pair<int, int>;
using vii = vector<ii>;
using vvll = vector<vll>;

#define sz(x) int(x.size())
#define fi first
#define se second
#define pb emplace_back
#define edl '\n'
#define vsCode cout << flush, system("Pause")

constexpr long long LLINF = 2e18;
constexpr int INF = 2e9;
constexpr int MOD = 1e9 + 7;
constexpr int MxN = 1e3 + 5;
constexpr int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

class Solution {
public:
    int hIndex(vector<int> &citations) {
        int l = 0, r = 1000, m;
        auto good = [&](const int &m) {
            int ans = 0;
            for (const auto &i : citations) {
                if (i >= m) {
                    ans++;
                }
            }
            return ans >= m;
        };
        while (l <= r) {
            m = l + (r - l) / 2;
            if (good(m)) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return r;
    }
};

void solve() {
}

int main() {
    // freopen("text.in", "r", stdin);
    // freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(false), cin.tie(nullptr); // Fast I/O Setup
    int q = 1;
    // cin >> q;
    while (q--) {
        solve();
    }
    // vsCode;
    return 0;
}
// By KaarLarax