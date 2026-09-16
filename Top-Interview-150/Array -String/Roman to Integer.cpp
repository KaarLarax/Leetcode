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
    int romanToInt(string s) {
        int n = s.size();
        vector<string> pattern = {"IV", "IX", "XL", "XC", "CD", "CM"};
        vector<int> patternCounter(6, 0);
        map<char, int> dic{{'I', 0},
                           {'V', 1},
                           {'X', 2},
                           {'L', 3},
                           {'C', 4},
                           {'D', 5},
                           {'M', 6}};
        vector<int> occur(7, 0), total(7, 0);
        for (int i = 0; i < pattern.size(); i++) {
            if (s.find(pattern[i]) != string::npos) {
                patternCounter[i]++;
                occur[dic[pattern[i][0]]]++;
                occur[dic[pattern[i][1]]]++;
            }
        }
        for (int i = 0; i < n; i++) {
            total[dic[s[i]]]++;
        }
        int ans = 0;
        map<char, int> value = {{'I', 1},
                                {'V', 5},
                                {'X', 10},
                                {'L', 50},
                                {'C', 100},
                                {'D', 500},
                                {'M', 1000}};
        map<int, int> value1 = {{0, 1},
                                {1, 5},
                                {2, 10},
                                {3, 50},
                                {4, 100},
                                {5, 500},
                                {6, 1000}};

        for (int i = 0; i < 7; i++) {
            ans += (total[i] - occur[i]) * value1[i];
        }
        for (int i = 0; i < 6; i++) {
            ans += (value[pattern[i][1]] - value[pattern[i][0]]) * patternCounter[i];
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