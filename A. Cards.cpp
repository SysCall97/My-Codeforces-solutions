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
    ll n, o=0, z=0;
    string inp;
    cin>>n>>inp;
    for(ll i=0; i<n; ++i) {
        if(inp[i]=='z') ++z;
        else if(inp[i]=='o') ++o;
    }
    for(ll i=0; i<o-z; ++i) cout<<1<<" ";
    for(ll i=0; i<z; ++i) cout<<0<<" ";
    cout<<el;
    return 0;
}
