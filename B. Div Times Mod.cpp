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
    ll n,k;
    vector<ll> ans;
    cin>>n>>k;
    for(ll i=1; i*i<=n; ++i) if(n%i==0) {
            ll ans1=(k*i)+(n/i);
            ll ans2=(k*(n/i))+i;
            if(((ans1/k)*(ans1%k))==n) ans.pb(ans1);
            if(((ans2/k)*(ans2%k))==n) ans.pb(ans2);
        }
    sort(all(ans));
    cout<<ans[0]<<el;


    return 0;
}

