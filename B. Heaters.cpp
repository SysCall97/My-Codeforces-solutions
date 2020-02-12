//UNSOLVED
/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,r,m;
    vector<ll> lowerRange,upperRange;
    cin>>n>>r;
    for(ll i=1; i<=n; ++i) {
        cin>>m;
        if(m) {
            if(i-r+1>=0) lowerRange.pb(i-r+1);
            else lowerRange.pb(0);
            if(i+r-1<=n) upperRange.pb(i+r-1);
            else upperRange.pb(n);
        }
    }
    for(auto i: lowerRange)cout<<i<<" ";cout<<el;
    for(auto i: upperRange)cout<<i<<" ";cout<<el;

    return 0;
}


