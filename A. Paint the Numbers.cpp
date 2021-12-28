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
    ll n;
    cin>>n;
    ll ans=n;
    vector<ll> v(n);
    for(ll i=0; i<n; ++i) cin>>v[i];
    sort(all(v));

    for(ll i=0; i<n; ++i) {
        if(v[i]==0) continue;
        for(ll j=i+1; j<n; ++j) {
            if(v[j]==0) continue;
            else if(v[j]%v[i]==0) {v[j]=0; --ans;}
        }
    }

    cout<<ans<<el;
    return 0;
}

