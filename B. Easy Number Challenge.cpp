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

ll func(ll n) {
    ll counter=0;
    for(ll i=1; i*i<=n; ++i) {
        if(n%i==0) {
            counter+=2;
            if(i*i==n) --counter;
        }
    }
    return counter;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c; cin>>a>>b>>c;
    vector<ll> dp((a*b*c)+1),ans;
    for(ll i=1; i<=a; ++i) {
        for(ll j=1; j<=b; ++j) {
            for(ll k=1; k<=c; ++k) {
                if(!dp[i*j*k]) dp[i*j*k]=func(i*j*k);
                ans.pb(dp[i*j*k]);
            }
        }
    }
    cout<<accumulate(all(ans),0)<<el;

    return 0;
}

