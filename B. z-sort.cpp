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
    ll n;
    cin>>n;
    vector<ll> a(n), ans(n);
    for(ll i=0; i<n; ++i) cin>>a[i];
    sort(all(a));
    ll ind1=(n%2)?(n/2):((n/2)-1);
    ll ind2=ind1+1;
    for(ll i=0; i<n; ++i) {
        if(i%2) ans[i]=a[ind2++];
        else ans[i]=a[ind1--];
    }
    for(ll i:ans) cout<<i<<" ";
    return 0;
}


