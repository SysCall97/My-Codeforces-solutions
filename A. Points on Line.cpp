ll/***************************************************************
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

ll binarySearch(vector<ll>& vec, ll first, ll last, ll diff) {
    while(first<last) {
        ll mid=(first+last)/2;
        if(diff>arr[mid]-arr[first]) last=mid-1;
        else if(diff<arr[mid]-arr[first]) ++last;
        else return mid-first+1;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, d, ans=0, last; cin>>n>>d;
    vector<ll> arr;
    for(ll i=0; i<n; ++i) cin>>arr[i];
    for(ll i=0; i<n-3; ++i) {

    }

    return 0;
}

