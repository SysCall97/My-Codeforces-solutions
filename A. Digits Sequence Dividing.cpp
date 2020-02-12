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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll q;
    cin>>q;
    while(q--) {
        ll n,k=0,i=1;
        cin>>n;
        string inp,out="";
        cin>>inp;
        bool b=1;
        for(ll i=n-1; i>0; --i) {
            out=inp[i]+out;
            inp.pop_back();
        }
        ll sum=0;
        for(ll i=out.size()-1; i>0; --i) sum+=out[i]-'0';
        if(inp[0]>=out[0] && sum==0) b=0;
        if(b) cout<<"YES\n"<<2<<el<<inp<<" "<<out<<el;
        else cout<<"NO\n";
    }

    return 0;
}
