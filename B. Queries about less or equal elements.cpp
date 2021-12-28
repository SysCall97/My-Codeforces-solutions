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

ll bSearch(ll key, ll n, vector<ll>& arr) {
    ll low=0, high=n;
    while(high>low) {
        ll mid=(low+high)/2;
        if(arr[mid]<=key && arr[mid+1]>key) return mid+1;
        else if(arr[mid]>key) high=mid-1;
        else low=mid+1;
    }
    if(low==high && arr[low]<=key && arr[low+1]>key) return low+1;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,q,m;
    vector<ll>arr;
    cin>>n>>q;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        arr.pb(m);
    }
    arr.pb(ll(1e15));
    sort(all(arr));
    while(q--) {
        cin>>m;
        cout<<bSearch(m, n, arr)<<" ";
    }
    cout<<el;
    return 0;
}


