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
    ll q;
    cin>>q;
    while(q--) {
        ll k, n, cnt=0;
        cin>>k>>n;
        vector<ll> v(k), oddPos;
        for(ll i=0; i<k; ++i) {
            cin>>v[i];
            if(v[i]&1) {
                ++cnt;
                oddPos.pb(i+1);
            }
        }
        if(cnt<n || (cnt-(n-1))%2==0) cout<<"NO\n";
        else {
            cout<<"YES\n";
            for(ll i=0; i<n-1; ++i) cout<<oddPos[i]<<" ";
            cout<<oddPos[cnt-1]<<el;
        }
    }
    return 0;
}
