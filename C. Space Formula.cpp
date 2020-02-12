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
    ll n, d; cin>>n>>d;
    ll m=d-2, k=0;
    vector<ll> curPoint(n),point(n);
    for(ll i=0; i<n; ++i) cin>>curPoint[i];
    for(ll i=0; i<n; ++i) cin>>point[i];
    curPoint[d-1]+=point[0];
    for(ll i=1; i<n && m>=0; ++i) if(curPoint[m]+point[i]<=curPoint[d-1]) ++k, --m;
    cout<<d-k<<el;
    return 0;
}
