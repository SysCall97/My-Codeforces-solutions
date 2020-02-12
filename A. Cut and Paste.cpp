/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF           0x3f3f3f3f
#define el            '\n'
#define x             first
#define y             second
#define pi            acos(-1.0)
#define pb            push_back
#define mp            make_pair
#define all(v)        v.begin(), v.end()
#define allr(v)       v.rbegin(), v.rend()
#define mem(x,y)      memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;
ll mod = 1e9+7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test;
    cin>>test;
    while(test--) {
        ll x, l, S_right, s;
        string inp;
        cin>>x>>inp;

        ll ans = inp.size(), size_flag = ans;
        for(ll i=1; i<=x; ++i) {
            l = inp[i-1] - '1';
            if(l==0) continue;
            S_right = ans-i;
            if(S_right<=0) S_right = mod+ans-i;
            s =  l * S_right;
            ans = (ans + s) % mod;
            if(size_flag < x) {
                for(ll j=0; j<s; ++j) inp += inp[i+j];
                size_flag = inp.size();
            }
        }
        cout<<ans<<el;
    }
    return 0;
}

