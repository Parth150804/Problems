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

void solve(int n, int m, int k) {
    vector<int> v(n);
    int num = m;
    int idx = n-1;
    while (num > 0) {
        v[idx] = num;
        idx--;
        num--;
    }
    num = n;
    idx = 0;
    while (v[idx] == 0) {
        v[idx] = num;
        idx++;
        num--;
    }
    for (int val: v) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        int n, m, k;
        std::cin >> n  >> m >> k;
        solve(n, m, k);
    }
    return 0;  
}