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
    ll n,s,m,tot=0;
    cin>>n>>s;
    vector<ll> vec;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        vec.pb(m);
        tot+=m;
    }
    if(tot<s) cout<<-1<<el;
    else {
        sort(all(vec));
        ll sum=0,cnt=0,mini;
        for(ll i=n-1; i>=0; --i) sum+=(vec[i]-vec[0]);
        if(sum>=s) cout<<vec[0]<<el;
        else {
            while(sum<s) {
                sum+=n;
                ++cnt;
            }
            cout<<vec[0]-cnt<<el;
        }
    }

    return 0;
}
