#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pr;
typedef priority_queue<int, vector<int>, greater<int>> minheap;
typedef priority_queue<int> maxheap;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define rep(i, a, b) for (int i = a; i < b; i++)
const int N = 1e9 + 7;
const int M = 1e8 + 7;

// Question Link: https://codeforces.com/contest/1996/problem/C

void solve(string &a, string &b, int n, int q, vector<pair<int, int>> &queries) {

// freqA[i][j] represents the frequency of character j up to the i-th position in string a.
// freqB[i][j] represents the frequency of character j up to the i-th position in string b.

    vector<vector<int>> freqA(n + 1, vector<int>(26, 0));
    vector<vector<int>> freqB(n + 1, vector<int>(26, 0));

    // Precompute frequencies for each prefix
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 26; j++) {
            freqA[i][j] = freqA[i - 1][j];
            freqB[i][j] = freqB[i - 1][j];
        }
        freqA[i][a[i - 1] - 'a']++;
        freqB[i][b[i - 1] - 'a']++;
    }

    for (auto &query : queries) {
        int l = query.first;
        int r = query.second;

        vector<int> countA(26, 0), countB(26, 0);
        for (int i = 0; i < 26; i++) {
            countA[i] = freqA[r][i] - freqA[l - 1][i];
            countB[i] = freqB[r][i] - freqB[l - 1][i];
        }

        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < 26; i++) {
            if (countA[i] != countB[i]) {
                if (countA[i] < countB[i]) {
                    ans1 += countB[i] - countA[i];
                } else {
                    ans2 += countA[i] - countB[i];
                }
            }
        }

        cout << max(ans1, ans2) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, q;
    string a, b;
    std::cin >> t;
    while (t--) {
        std::cin >> n >> q;
        std::cin >> a >> b;
        vector<pair<int, int>> queries(q);
        rep(i, 0, q) {
            std::cin >> queries[i].first >> queries[i].second;
        }
        solve(a, b, n, q, queries);
    }
    return 0;
}
