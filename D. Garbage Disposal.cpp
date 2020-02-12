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
    ll n,k,ans=0,m;
    vector<ll> arr,arr1;
    cin>>n>>k;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        arr.pb(m);
        arr1.pb(m);
    }
    for(ll i=n-1; i>0; --i) {
        ll s=k-(arr[i]%k);
        if(arr1[i]==0 || s==k) continue;
        if(s<=arr[i-1]) {
            arr[i]+=s;
            arr[i-1]-=s;
        } else {
            arr[i]+=arr[i-1];
            arr[i-1]=0;
        }
    }
    for(ll i=0; i<n; ++i) ans+=(arr[i]%k==0)?(arr[i]/k):(arr[i]/k)+1;

    cout<<ans<<el;

    return 0;
}


