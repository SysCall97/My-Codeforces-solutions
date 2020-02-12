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
    ll n, k;
    cin>>n;
    string inp, out;
    cin>>inp;
    for(ll i=0; i<n-1; i+=k) {
        if(inp[i]!=inp[i+1]) {
            out.pb(inp[i]);
            out.pb(inp[i+1]);
            k=2;
        } else k=1;
    }

    cout<<inp.size()-out.size()<<el<<out<<el;
    return 0;
}


