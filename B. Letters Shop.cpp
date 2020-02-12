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
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;
ll binarySearch(vector<ll>* v, ll pos, ll key, ll hi) {
    ll low = 0, high = hi;
    ll mid = (low+high)/2;
    while(low<high) {
        mid = (low+high)/2;
        if(v[pos][mid]==key) {
            if(v[pos][mid-1]<key) return mid;
            else high = mid-1;
        } else if(v[pos][mid]<key) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, t;
    cin>>n;
    string inp, str;
    cin>>inp;

    vector<ll> vec[26];
    for(ll i=0; i<26; ++i) {
        for(ll j=0; j<n; ++j) {
            if(inp[j]-'a'==i) {
                if(j==0) vec[i].pb(1);
                else vec[i].pb(vec[i][j-1]+1);
            } else {
                if(j==0) vec[i].pb(0);
                else vec[i].pb(vec[i][j-1]);
            }
        }
    }

    cin>>t;
    while(t--) {
        cin>>str;
        vector<ll> v(26);
        for(ll i=0; str[i]; ++i) ++v[str[i]-'a'];

        ll ans = binarySearch(vec, str[0]-'a', v[str[0]-'a'], n);
        for(ll i=1; str[i]; ++i)
            ans = max(ans, binarySearch(vec, str[i]-'a', v[str[i]-'a'], n));

        cout<<ans+1<<el;
    }


    return 0;
}
