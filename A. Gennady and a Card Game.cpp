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
    string inp1, inp2;
    bool b=0;
    cin>>inp1;
    for(ll i=0; i<5; ++i) {
        cin>>inp2;
        if(inp1[0]==inp2[0] || inp1[1]==inp2[1]) b=1;
    }
    if(b) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}


