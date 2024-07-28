#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pr;
typedef priority_queue <int, vector<int>, greater<int>> minheap;
typedef priority_queue <int> maxheap;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=a; i<b; i++)
const int N=1e9+7;
const int M=1e8+7;

// Function to calculate prefix function (pi array)
vector<int> computePrefixFunction(const string& s) {
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; ++i) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = pi[j - 1];
        }
        if (s[i] == s[j]) {
            ++j;
        }
        pi[i] = j;
    }
    return pi;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();

    // Calculate prefix function
    vector<int> pi = computePrefixFunction(s);

    // Count occurrences of each prefix length
    vector<int> count(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        count[pi[i]]++;
    }

    // Accumulate counts in reverse order
    for (int i = n - 1; i > 0; --i) {
        count[pi[i - 1]] += count[i];
    }

    // Each prefix of length i occurs at least once as itself
    for (int i = 0; i <= n; ++i) {
        count[i]++;
    }

    // Collect all lengths of prefixes which match suffixes
    vector<int> result;
    for (int i = n; i > 0; i = pi[i - 1]) {
        result.push_back(i);
    }

    // Output the number of such prefixes
    cout << result.size() << endl;

    // Output the lengths and their respective counts
    for (int i = result.size() - 1; i >= 0; --i) {
        cout << result[i] << " " << count[result[i]] << endl;
    }

    return 0;
}