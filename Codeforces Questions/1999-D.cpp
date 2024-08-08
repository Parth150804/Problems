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
 
void solve(string s, string t){
    int ques = 0;
    string ans = "\0";
    for (char c: s) {
        if (c == '?') {
            ques++;
        }
    }
    if (ques >= t.size()) {
        int j = 0;
        int i = 0;
        while (j < t.size()) {
            if (s[i] == '?') {
                s[i] = t[j];
                j++;
            }
            i++;
        }
        while (i < s.size()) {
            if (s[i] == '?') {
                s[i] = 'a';
            }
            i++;
        }
        std::cout << "YES" << "\n";
        std::cout << s << "\n";
    }
    else {
        int i = 0;
        int j = 0;
        while (i < s.size() and j < t.size()) {
            if (s[i] == '?') {
                s[i] = t[j];
                j++;
            }
            else if (s[i] == t[j]) {
                j++;
            }
            i++;
        }
        while (i < s.size()) {
            if (s[i] == '?') {
                s[i] = 'a';
            }
            i++;
        }
        if (j == t.size()) {
            std::cout << "YES" << "\n";
            std::cout << s << "\n";
        }
        else {
            std::cout << "NO" << "\n";
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        std::cin >> s >> t;
        solve(s, t);
    }
    return 0;  
}