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
ll n,m;
vector<ll> ai;
bool b=0;

void recursiveSum(ll pos) {
    if(pos<0) return;
    ll sum=accumulate(all(ai),0);
    if(sum%360==0) b=1;
    if(!b )recursiveSum(pos-1);
    else return;
    ai[pos]*=-1;
    sum=accumulate(all(ai),0);
    if(sum%360==0) b=1;
    if(!b) recursiveSum(pos-1);
    else return;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        ai.pb(m);
    }
    ai.pb(0);
    recursiveSum(n);
    if(b) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}


