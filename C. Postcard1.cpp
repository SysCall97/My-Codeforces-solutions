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
    string inp,ans="";
    ll n,snow=0,candy=0,Size,alp=0;
    cin>>inp>>n;
    for(Size=0; inp[Size]; ++Size) {
        if(inp[Size]!='*' && inp[Size]!='?') ++alp;
        else if(inp[Size]=='*') ++snow;
        else if(inp[Size]=='?') ++candy;
    }
    if(n<alp-snow-candy || (n>alp && snow==0)) cout<<"Impossible"<<el;
    else {
        ll change;
        if(n>=alp) {
            change=n-alp;
            bool b=0;
            for(ll i=0; inp[i]; ++i) {
                if(inp[i]!='*' && inp[i]!='?') ans+=inp[i];
                else if(inp[i]=='*' && !b) {
                    while(change--) ans+=inp[i-1];
                    b=1;
                }
            }
        } else {
            change=alp-n;
            for(ll i=0; inp[i]; ++i) {
                if(inp[i]!='*' && inp[i]!='?') ans+=inp[i];
                else if(change) {
                    ans.pop_back();
                    --change;
                }
            }
        }
        cout<<ans<<el;
    }
    return 0;
}


