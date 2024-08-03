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

// Question Link: https://codeforces.com/contest/1988

bool eqZeroOne(string &s) {
    int ones = 0, zeros = 0;

    for (char c: s) {
        if (c == '0') {
            zeros++;
        }
        else {
            ones++;
        }
    }
    return ones <= zeros;
}

void solve(int n, string &s){
    vector<int> ones;
    rep(i, 0, n) {
        if (s[i] == '1') {
            ones.push_back(i);
        }
    }
    if (ones.size() == 0) {
        std::cout << "No" << "\n";
    }
    else {
        string s1;
        int prev = -1;
        if (ones[0] == 0) {
            prev = 0;
            s1 += '1';
        }
        else {
            s1 += '0';
        }

        for (int i = 0; i < ones.size(); i++) {
            if (prev != ones[i]-1 and prev != -1) {
                s1 += '0';
            }
            s1 += '1';
            prev = ones[i];
        }

        if (ones.back() != n-1) {
            s1 += '0';
        }

        if (eqZeroOne(s1)) {
            std::cout << "No" << "\n";
        }
        else {
            std::cout << "Yes" << "\n";
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(n, s);
    }
    return 0;  
}