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

ll bigmod(ll n,ll p,ll m)
{
    if(p==0)
        return 1;
    if(p&1)
    {
        return ((n%m)*(bigmod(n,p-1,m)%m))%m;
    }
    else
    {
        ll ans=bigmod(n,p>>1,m)%m;
        return(ans*ans)%m;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,p,m,i;
    cin>>n>>p>>m;
    cout<<bigmod(n,p,m);


    return 0;
}


