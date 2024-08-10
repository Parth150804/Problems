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

// Question Link: https://codeforces.com/contest/1993/problem/B

void solve(int n, vector<int> &a) {
    long long s = -1;
    vector<int> v;
    
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            v.push_back(a[i]);
        } else if (a[i] > s) {
            s = a[i];
        }
    }

    sort(v.begin(), v.end());

    if (s == -1 || v.empty()) {
        cout << 0 << "\n";
        return;
    }

    int ans = v.size();
    for (int t : v) {
        if (t < s) {
            s += t;
        } else {
            ans += 1;
            break;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        rep(i, 0, n) {
            cin >> a[i];
        }
        solve(n, a);
    }
    return 0;  
}
