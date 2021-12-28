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

bool isPossible(string& inp) {
    ll strt=0,lst=0;
    bool b=0;
    for(ll i=0; inp[i]; ++i) {
        if(inp[i]=='[') ++strt;
        else if(np[i]==']' && strt) b=1;
    }
    return b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string inp; cin>>inp;
    if(isPossible(inp)) {

    } else cout<<-1<<el;

    return 0;
}
