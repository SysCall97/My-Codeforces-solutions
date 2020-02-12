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
    ll n,m;
    vector<ll> ar;
    cin>>n;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        ar.pb(m);
    }
    sort(all(ar));
    if(ar[n-1]!=ar[n-2]) {
        cout<<ar[n-2]-ar[0]<<el;
    } else {
        cout<<ar[n-1]-ar[1]<<el;
    }

    return 0;
}
