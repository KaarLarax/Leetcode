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
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        vector<int> mini(n, (int)1e9);
        vector<int> maxi(n, (int)-1e9);
        mini[0] = prices[0];
        for (int i = 1; i < n; i++) {
            mini[i] = min(prices[i], mini[i - 1]);
        }
        maxi[n - 1] = prices[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            maxi[i] = max(maxi[i + 1], prices[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, maxi[i] - mini[i]);
        }
        return ans;
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