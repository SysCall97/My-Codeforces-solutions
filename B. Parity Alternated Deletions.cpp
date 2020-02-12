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
    ll n, m, eCnt=0, oCnt=0; cin>>n;
    vector<ll> even, odd;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        if(m&1) {
            ++oCnt;
            odd.pb(m);
        } else {
            ++eCnt;
            even.pb(m);
        }
    }
    sort(all(even));
    sort(all(odd));
    if(oCnt==eCnt) cout<<0<<el;
    else if(oCnt>eCnt) {
        for(ll i=0; i<=eCnt; ++i) odd.pop_back();
        cout<<accumulate(all(odd),0)<<el;
    } else {
        for(ll i=0; i<=oCnt; ++i) even.pop_back();
        cout<<accumulate(all(even),0)<<el;
    }
    return 0;
}

