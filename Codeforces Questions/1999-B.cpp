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
 
void solve(int a1, int a2, int a3, int a4){
    int cnt1 = 0, cnt2 = 0;
    int cnt3 = 0, cnt4 = 0;
    if (a1 > a3) {
        cnt1++;
    }
    else if (a1 < a3) {
        cnt2++;
    }
    if (a2 > a4) {
        cnt1++;
    }
    else if (a2 < a4) {
        cnt2++;
    }
    if (a1 > a4) {
        cnt3++;
    }
    else if (a1 < a4) {
        cnt4++;
    }
    if (a2 > a3) {
        cnt3++;
    }
    else if (a2 < a3) {
        cnt4++;
    }

    int ans = 0;
    if (cnt1 > cnt2) {
        ans += 2;
    }
    if (cnt3 > cnt4) {
        ans += 2;
    }
    std::cout << ans << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        std::cin >> a1 >> a2 >> b1 >> b2;
        solve(a1, a2, b1, b2);
    }
    return 0;  
}