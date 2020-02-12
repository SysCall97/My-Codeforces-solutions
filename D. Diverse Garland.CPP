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
    ll n,cnt=0;
    string inp;
    cin>>n>>inp;
    for(ll i=1; i<n-1; ++i) {
        if(inp[i]==inp[i-1]) {
            ++cnt;
            if(inp[i-1]=='R' && inp[i+1]=='B') inp[i]='G';
            else if(inp[i-1]=='R' && inp[i+1]=='G') inp[i]='B';
            else if(inp[i-1]=='G' && inp[i+1]=='R') inp[i]='B';
            else if(inp[i-1]=='G' && inp[i+1]=='B') inp[i]='R';
            else if(inp[i-1]=='B' && inp[i+1]=='R') inp[i]='G';
            else if(inp[i-1]=='B' && inp[i+1]=='G') inp[i]='R';
            else if(inp[i-1]=='R' && inp[i+1]=='R') inp[i]='G';
            else if(inp[i-1]=='G' && inp[i+1]=='G') inp[i]='B';
            else if(inp[i-1]=='B' && inp[i+1]=='B') inp[i]='R';
        }
    }
    if(inp[n-1]==inp[n-2]) {
        ++cnt;
        if(inp[n-2]=='R') inp[n-1]='G';
        else if(inp[n-2]=='G') inp[n-1]='B';
        else if(inp[n-2]=='B') inp[n-1]='R';
    }
    cout<<cnt<<el<<inp<<el;

    return 0;
}

