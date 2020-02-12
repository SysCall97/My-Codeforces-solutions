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
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string inp;
    cin>>inp;
    vector<ll> digits;
    ll ans = 0, j = 0;
    for(ll i=0; inp[i]; ++i) {
        digits.pb(inp[i]-'0');
        if(digits[i]%4==0) ++ans;
        ++j;
    }
    for(ll i=0; i<j-1; ++i) {
        if((10*digits[i]+digits[i+1])%4==0) ans+=i+1;
    }
    cout<<ans<<el;
    return 0;
}
