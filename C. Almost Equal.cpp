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
#define F(n)          n*(n+1)/2
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll m=F(2*n);
    if(m%2==0) cout<<"NO\n";
    else {
        n=2*n;
        cout<<"YES\n";
        ll b=0;
        vector<ll> v;
        v.pb(1);
        ll i=n-2, j=n-1;
        while(i>1 && j>1) {
            v.pb(i);
            v.pb(j);
            i=i-4, j=i+1;
        }
        ll sz=v.size();
        for(ll i=0; i<sz; ++i) {
            if(b==0) {v.pb(v[i]+1); b=1;}
            else {v.pb(v[i]-1); b=0;}
        }
        for(auto i:v) cout<<i<<" ";
    }
    return 0;
}

