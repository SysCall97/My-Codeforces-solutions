/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF           0x3f3f3f3f
#define el            '\n'
#define x             first
#define y             second
#define pi            acos(-1.0)
#define pb            push_back
#define mp            make_pair
#define all(v)        v.begin(), v.end()
#define allr(v)       v.rbegin(), v.rend()
#define mem(x,y)      memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, cnt=0, arr[27][27], a[27][27];
    for(ll i=0; i<26; ++i) {
        for(ll j=0; j<26; ++j) a[i][j]=-1, arr[i][j]=0;
    }
    string s, t;
    cin>>n>>s>>t;
    vector<PI> v;
    for(ll i=0; i<n; ++i) {
        if(s[i]==t[i]) continue;
        else {
            ++arr[s[i]-'a'][t[i]-'a'];
            if(arr[s[i]-'a'][t[i]-'a']==2) {
                v.pb(mp(a[s[i]-'a'][t[i]-'a'], i+1));
                a[s[i]-'a'][t[i]-'a']=-1;
                arr[s[i]-'a'][t[i]-'a']=0;
            } else {
                a[s[i]-'a'][t[i]-'a']=i+1;
            }
        }
    }
    for(ll i=0; i<26; ++i) {
        for(ll j=0; j<26; ++j) {
            if(arr[i][j]==1 && arr[j][i]==0) {
                cout<<-1<<el;
                return 0;
            } else if(arr[i][j]==1 && arr[j][i]==1) {
                arr[i][j]=arr[j][i]=0;
                v.pb(mp(a[i][j], a[i][j]));
                v.pb(mp(a[i][j], a[j][i]));
                a[i][j]=a[j][i]=-1;
            }
        }
    }
    cout<<v.size()<<el;
    for(auto i:v) cout<<i.x<<" "<<i.y<<el;
    return 0;
}

