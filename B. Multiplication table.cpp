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
    ll arr[n][n];
    for(ll i=0; i<n; ++i)
        for(ll j=0; j<n; ++j) cin>>arr[i][j];
    ll a=arr[0][1];
    ll b=arr[0][2];
    ll c=arr[1][2];
    ll ans = (ll)sqrt((a*b/c));
    cout<<ans<<" ";
    for(ll i=1; i<n; ++i) cout<<(arr[i][0])/ans<<" ";
    cout<<el;
    return 0;
}

