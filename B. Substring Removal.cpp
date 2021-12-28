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
    ll n,End=1,Start=1;
    string inp;
    cin>>n>>inp;
    for(ll i=n-2; i>-1; --i) {
        if(inp[i]!=inp[i+1]) break;
        ++End;
    }
    for(ll i=1; inp[i]; ++i) {
        if(inp[i]!=inp[i-1]) break;
        ++Start;
    }
    if(inp[0]==inp[n-1]) cout<<(Start+1)*(End+1)<<el;
    else cout<<Start+End+1<<el;

    return 0;
}

