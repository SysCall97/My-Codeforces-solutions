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
    ll n,k;
    vector<ll> b;
    cin>>n;
    for(ll i=0; i<n; ++i) {
        cin>>k;
        b.pb(k);
    }
    sort(all(b));
    cout<<b[n-1]-b[0]<<" ";
    ll mini=1, maxi=1;
    for(ll i=1; i<n; ++i) {
        if(b[i]==b[0]) ++mini;
        else break;
    }
    for(ll i=n-2; i>=0; --i) {
        if(b[i]==b[n-1]) ++maxi;
        else break;
    }

    if(b[0]!=b[n-1]) cout<<mini*maxi<<el;
    else cout<<n*(n-1)/2<<el;

    return 0;
}


