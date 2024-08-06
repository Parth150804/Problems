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
 
// Question Link: https://codeforces.com/contest/1991/problem/B (Good Question)

void solve(vector<int> &b, int n){
    vector<int> a(n);
    a[0] = b[0];
    a[n-1] = b[n-2];
    rep(i, 1, n-1) {
        a[i] = (b[i-1] | b[i]);
    }

    for(int i = 0; i < n-1; i++) {
        if ((a[i] & a[i+1]) != b[i]) {
            std::cout << -1 << "\n";
            return;
        }
    }

    for (int v: a) {
        std::cout << v << " ";
    }
    std::cout << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n-1);
        rep(i, 0, n-1) {
            std::cin >> b[i];
        }
        solve(b, n);
    }
    return 0;  
}