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
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

ll func(ll n) {
    while(n%2==0) n/=2;
    while(n%3==0) n/=3;
    return n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin>>n;
    ll val,v;cin>>val;
    v=func(val);
    bool b=1;
    for(ll i=1; i<n; ++i) {
        cin>>val;
        if(b) b=(v==func(val))?1:0;
    }
    if(b) cout<<"yes\n";
    else cout<<"no\n";
    return 0;
}

