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
 
// Question Link: https://codeforces.com/contest/1996/problem/B

void solve(vector<string> &grid, int n, int k){
    int i = 0;
    while (i < n) {
        int j = 0;
        string s = "\0";
        while (j < n) {
            s += grid[i][j];
            j += k;
        }
        std::cout << s << "\n";
        i += k;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;
    std::cin >> t;
    while (t--) {
        std::cin >> n >> k;
        vector<string> grid(n);
        rep(i, 0, n) {
            std::cin >> grid[i];
        }
        solve(grid, n, k);
    }
    return 0;  
}