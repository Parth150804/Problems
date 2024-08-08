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
 
void solve(int n, int s, int m, vector<pair<int, int>> &tasks){
    int start = 0;
    for (auto p: tasks) {
        int i = p.first;
        if (i-start >= s) {
            std::cout << "YES" << "\n";
            return;
        }
        else {
            start = p.second;
        }
    }
    if (m-start >= s) {
        std::cout << "YES" << "\n";
    }
    else {
        std::cout << "NO" << "\n";
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        std::cin >> n >> s >> m;
        vector<pair<int, int>> tasks(n);
        rep(i, 0, n) {
            std::cin >> tasks[i].first >> tasks[i].second;
        }
        solve(n, s, m, tasks);
    }
    return 0;  
}