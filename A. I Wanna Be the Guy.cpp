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
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll l,lvl[110],p,a;
    cin>>l>>p;
    while(p--) {
        cin>>a;
        lvl[a]=1;
    }
    cin>>p;
    while(p--) {
        cin>>a;
        lvl[a]=1;
    }
    for(ll i=1; i<=l; ++i) if(lvl[i]!=1) {
        cout<<"Oh, my keyboard!\n";
        return 0;
    }
    cout<<"I become the guy.\n";
    return 0;
}


