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
 
// Question Link: https://codeforces.com/contest/1992/problem/C

int findMax(vi &v) {
    int ans = INT_MIN;
    for (int val: v) {
        ans = max(ans, val);
    }
    return ans;
}

void solve(vector<int> &A, int k, int n){
    int mx = findMax(A);
    cout <<  2*(n-mx)-k+1 << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        vector<int> A(k);
        rep(i, 0, k) {
            std::cin >> A[i];
        }
        solve(A, k, n);
    }
    return 0;  
}