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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,half,a,ans=0;
    vector<ll> vec;
    cin>>n;
    half=n/2;
    for(ll i=0; i<n; ++i) {
        cin>>a;
        vec.pb(a);
    }
    if(n%1==0) {
        if(vec[half]<vec[half+1]) ++half;
    } else ++half;
    for(ll i=1; i<n; ++i) {
        if(i<=half) {
            ans+=4*vec[i]*i;
//            cout<<4*vec[i]*i<<el;
        } else {
            ans+=vec[i]*((i-half)+i+half)+vec[i]*(half+i+(i-half));
//            cout<<vec[i]*((i-half)+i+half)+vec[i]*(half+i+(i-half))<<el;
        }
    }
    cout<<ans<<el;

    return 0;
}


