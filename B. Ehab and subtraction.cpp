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
vector<ll> arr;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k,m;
    cin>>n>>k;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        arr.pb(m);
    }
    sort(all(arr));

    ll i=0,I,sum=0;
    while(arr[i]==0 && i<n) ++i;
    I=i;
    while(k--) {
        if(I==n) cout<<0<<el;
        else {
            cout<<arr[I]-sum<<el;
            sum+=(arr[I]-sum);
            while(arr[I]-sum==0 && I<n) ++I;
        }
    }

    return 0;
}


