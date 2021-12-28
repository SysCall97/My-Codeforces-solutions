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
    ll n,m;
    vector<ll>vec,ans;
    cin>>n;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        vec.pb(m);
    }
    ll maxi=vec[n-1];
    ans.pb(0);
    for(ll i=n-2; i>=0; --i) {
        ans.pb(maxi+1-vec[i]);
        if(vec[i]>maxi) maxi=vec[i];
    }

    for(ll i=n-1; i>=0; --i) {
        if(ans[i]>=0) cout<<ans[i]<<" ";
        else cout<<"0 ";
    }
    cout<<el;
    return 0;
}


