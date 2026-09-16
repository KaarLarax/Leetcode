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
    string intToRoman(int num) {
        vector<pair<string, int>> pattern = {{"M", 1000},
                                             {"CM", 900},
                                             {"D", 500},
                                             {"CD", 400},
                                             {"C", 100},
                                             {"XC", 90},
                                             {"L", 50},
                                             {"XL", 40},
                                             {"X", 10},
                                             {"IX", 9},
                                             {"V", 5},
                                             {"IV", 4},
                                             {"I", 1}};
        map<string, int> counter;
        string ans = "";
        for (auto &i : pattern) {
            int sobrante = num % i.second;
            counter[i.first] += num / i.second;
            num = sobrante;
        }
        for (auto &i : pattern) {
            for (int j = 0; j < counter[i.first]; j++) {
                ans += i.first;
            }
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