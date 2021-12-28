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
    ll n,k,ans=0;
    cin>>n>>k;
    if((n*8)%k) ans+=(n*8)/k+1;
    else ans+=(n*8)/k;
    if((n*5)%k) ans+=(n*5)/k+1;
    else ans+=(n*5)/k;
    if((n*2)%k) ans+=(n*2)/k+1;
    else ans+=(n*2)/k;
    cout<<ans<<el;

    return 0;
}


