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
    ll n,cnt=0,ans=-1,m,c=0;
    vector<ll> arr;
    cin>>n>>inp;
    for(ll i=0; i<n; ++i) {
        if(inp[i]=='G') ++cnt;
        else {
            if(cnt) ++c;
            arr.pb(cnt);
            cnt=0;
        }
    }
    if(cnt) {
        arr.pb(cnt);
        ++c;
    }
    arr.pb(0);
    m=arr.size();

    for(ll i=0; i<m-1; ++i) {
        ll num=arr[i]+arr[i+1];
        if(arr[i] && arr[i+1] && c>2) ++num;
        ans=max(num,ans);
    }
    cout<<ans<<el;
    return 0;
}
