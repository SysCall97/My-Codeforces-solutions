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
    ll n,m,l,ans=0;
    vector<ll> arr;
    cin>>n>>m;
    for(ll i=0; i<n; ++i) {
        cin>>l;
        arr.pb(l);
        ans+=l-1;
    }
    if(n==1 || m==1) cout<<0<<el;
    else {
        sort(all(arr));
        for(ll i=0; i<n-1; ++i) if(arr[i]!=arr[i+1]) ans=ans-(arr[i+1]-arr[i])+1;
        cout<<ans<<el;
    }


    return 0;
}


