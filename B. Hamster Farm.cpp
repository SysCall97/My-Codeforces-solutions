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
    ll n,k,mini=INF,ans,a;
    vector<ll>q;
    unordered_map<ll,ll> rem;
    unordered_map<ll,ll> need;
    cin>>n>>k;
    for(ll i=0; i<k; ++i) {
        cin>>a;
        q.pb(a);
        rem[a]=n%a;
        need[a]=n/a;
    }

//    for(ll i=0; i<n; ++i) {
//        q.
//    }























    return 0;
}


