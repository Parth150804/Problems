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
 
//  Question Link: https://codeforces.com/contest/1995/problem/A

void solve(int n, int k){
    if (k == 0) {
        std::cout << 0 << "\n";
    }
    else if (k < n) {
        std::cout << 1 << "\n";
    }
    else {
        k -= n;
        int cnt = 1;
        int i = 1;
        while (k > 0) {
            k -= n-i;
            cnt++;
            if (k > 0) {
                k -= n-i;
                cnt++;
            }
            i++;
        }
        std::cout << cnt << "\n";
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        solve(n, k);
    }
    return 0;  
}