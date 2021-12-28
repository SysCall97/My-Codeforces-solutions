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
    ll n,j=0,z=0,o=0,t=0;
    string inp;
    cin>>n>>inp;
    for(ll i=0; i<n; ++i) {
        if(inp[i]=='0') ++z;
        if(inp[i]=='1') ++o;
        if(inp[i]=='2') ++t;
    }
    if(z==o && o==t) cout<<inp<<el;
    else {
        while(z<(n/3) || o<(n/3) || t<(n/3)) {

        }
    }

    return 0;
}

