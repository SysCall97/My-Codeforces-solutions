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
    string inp;
    cin>>inp;
    ll sz=inp.size();
    ll k=(sz/2);
    if(sz%2==0) --k;
    ll K=k+1;
    for(ll i=0; inp[i]; ++i) {
        if(i%2==0) cout<<inp[k--];
        else cout<<inp[K++];
    }

    cout<<el;

    return 0;
}

