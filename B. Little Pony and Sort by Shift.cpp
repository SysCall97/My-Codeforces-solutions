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
    ll n,m,ans,counter1=0,prev;
    vector<ll>v;
    cin>>n>>prev;
    ll f=prev,counter2=n;
    for(ll i=1; i<n; ++i) {
        cin>>m;
        if(prev>m) ++counter1,counter2=i;
//        if(counter1 && prev<=m) ++counter2;
        prev=m;
    }
    if(counter1>1 || (counter1==1 && f<prev)) ans=-1;
    else ans=n-counter2;
    cout<<ans<<el;
    return 0;
}


