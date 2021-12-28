/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define x first
#define y second
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<ll> inp(n);
    for(ll i = 0; i < n; ++i) cin>>inp[i];
    sort(all(inp));

    if(inp[n-1]<inp[n-2]+inp[n-3]) {
        cout<<"YES"<<el;
        for(ll i = n-1; i>=0; i-=2) cout<<inp[i]<<" ";
        for(ll i = n%2; i<n; i+=2) cout<<inp[i]<<" ";
    } else cout<<"NO"<<el;

    return 0;
}

