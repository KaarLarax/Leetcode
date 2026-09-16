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

class RandomizedSet {
public:
    unordered_map<int, int> tmp;
    RandomizedSet() {
        tmp.clear();
    }

    bool insert(int val) {
        if (tmp[val]) {
            return false;
        }
        tmp[val]++;
        return true;
    }

    bool remove(int val) {
        if (!tmp[val]) {
            tmp.erase(val);
            return false;
        }
        tmp.erase(val);
        return true;
    }

    int getRandom() {
        std::random_device rd;
        std::default_random_engine generator(rd());

        std::uniform_int_distribution<int> distribution(0, tmp.size() - 1);

        auto ans = tmp.begin();
        advance(ans, distribution(generator));

        return ans->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

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