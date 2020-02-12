/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define x first
#define y second
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, ans=0; cin>>n;
    vector<ll> arr(n);
    for(ll i=0; i<n; ++i) cin>>arr[i];
    sort(all(arr));
    ll lst=n/2;
    for(ll i=0; i<lst; ++i) {
        ans+=((arr[i]+arr[n-1-i])*(arr[i]+arr[n-1-i]));
    }
    cout<<ans<<el;

    return 0;
}
