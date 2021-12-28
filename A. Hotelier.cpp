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
    ll n; cin>>n;
    string inp; cin>>inp;
    bool b[10]={false};
    for(ll i=0; inp[i]; ++i) {
        if(inp[i]=='L') {
            for(ll i=0; i<10; ++i) if(b[i]==false){
                b[i]=true;
                break;
            }
        } else if(inp[i]=='R') {
            for(ll i=9; i>=0; --i) if(b[i]==false){
                b[i]=true;
                break;
            }
        } else {
            b[inp[i]-'0']=false;
        }
    }
    for(ll i=0; i<10; ++i) cout<<(b[i]?1:0);
    cout<<el;
    return 0;
}

