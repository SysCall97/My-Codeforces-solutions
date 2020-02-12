/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define x first
#define y second
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;
string s;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>s;
    ll turn=0;
    stack<char> stk;
    while(s.size()) {
        if(stk.empty()) {
            stk.push(s[s.size()-1]);
            s.pop_back();
        }
        if(s.size()) {
            if(s[s.size()-1]==stk.top()) {
                ++turn;
                s.pop_back();
                stk.pop();
            } else {
                stk.push(s[s.size()-1]);
                s.pop_back();
            }
        }
    }
    if(turn%2) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}

