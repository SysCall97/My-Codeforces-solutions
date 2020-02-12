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

ll func(ll n) {
    ll m=n+1;
    if(m&1) n/=2;
    else m/=2;
    return n*m;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k,m;
    vector<ll> vec;
    cin>>n>>k;
    vec.pb(-1);
    for(ll i=0; i<n; ++i) {
        cin>>m;
        vec.pb(m);
    }
    for(ll i=0; ; ++i) {
        m=i;
        if(func(m)>k) {
            --m;
            m=k-func(m);
            if(m==0) m=i-1;
            break;
        }
    }
    cout<<vec[m]<<el;

    return 0;
}


