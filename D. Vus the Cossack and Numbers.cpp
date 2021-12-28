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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, ansn=0, ansp=0;
    cin>>n;
    float f;
    vector<ll> v(n), mp(n, 0);
    for(ll i=0; i<n; ++i) {
        cin>>f;
        if(f>=0) v[i] = ceil(f), ansp+=v[i];
        else v[i] = floor(f), ansn+=v[i];
        if(floor(f)==ceil(f)) mp[i]=1;
    }
    if(ansn+ansp<0) {
        for(ll i=0; i<n; ++i) {
            if(v[i]<0 && mp[i]==0) ++v[i], ++ansn;
            if(ansn+ansp==0) break;
        }
    } else if(ansn+ansp>0){
        for(ll i=0; i<n; ++i) {
            if(v[i]>0 && mp[i]==0) --v[i], --ansp;
            if(ansn+ansp==0) break;
        }
    }
    for(ll i:v) cout<<i<<el;
    return 0;
}

