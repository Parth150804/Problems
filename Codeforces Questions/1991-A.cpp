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

// Question Link: https://codeforces.com/contest/1991/problem/A

void solve(vector<int> &arr, int n){
    int ans = INT_MIN;
    for (int i = 0; i < n; i += 2) {
        ans = max(ans, arr[i]);
    }
    std::cout << ans << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        vector<int> arr(n);
        rep(i, 0, n) {
            std::cin >> arr[i];
        }
        solve(arr, n);
    }
    return 0;  
}