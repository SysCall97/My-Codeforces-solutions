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

class element {
public:
    ll first,last;
    element() {
        first=-1;
    }
} lo[27],hi[27];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,val;
    string inp,uniq="";
    cin>>n;
    cin.ignore();
    getline(cin,inp);

    for(ll i=0; i<n; ++i) {
        if(inp[i]>='a' && inp[i]<='z') {
            val=inp[i]-'a';
            if(lo[val].first==-1) {
                lo[val].first=i;
                lo[val].last=i;
                uniq+=inp[i];
            } else lo[val].last=i;
        } else if(inp[i]>='A' && inp[i]<='Z') {
            val=inp[i]-'A';
            if(hi[val].first==-1) {
                hi[val].first=i;
                hi[val].last=i;
                uniq+=inp[i];
            } else hi[val].last=i;
        }
    }

    ll s=uniq.size();
    ll f=-1,l=100000000;
//    vector<ll> f,l;
//
//    for(ll i=0; i<s; ++i) {
//        if(uniq[i]>='a' && uniq[i]<='z') {
//            val=uniq[i]-'a';
//            cout<<uniq[i]<<" "<<lo[val].first<<" "<<lo[val].last<<el;
//            f.pb(lo[val].first);
//            l.pb(lo[val].last);
//        }else if(uniq[i]>='A' && uniq[i]<='Z') {
//            val=uniq[i]-'A';
//            cout<<uniq[i]<<" "<<hi[val].first<<" "<<hi[val].last<<el;
//            f.pb(hi[val].first);
//            l.pb(hi[val].last);
//        }
//    }
//
//    sort(all(f));
//    sort(all(l));
//
//    cout<<abs(f[s-1]-l[0]+1)<<el;

    cout<<uniq<<" "<<s<<el;

    for(ll i=0; i<s; ++i) {
        if(uniq[i]>='a' && uniq[i]<='z') {
            val=uniq[i]-'a';
            cout<<uniq[i]<<" "<<lo[val].first<<" "<<lo[val].last<<el;
            if(f<lo[val].first) {
                f=lo[val].first;
            }
        } else if(uniq[i]>='A' && uniq[i]<='Z') {
            val=uniq[i]-'A';
            cout<<uniq[i]<<" "<<hi[val].first<<" "<<hi[val].last<<el;
            if(f<hi[val].first) {
                f=hi[val].first;
            }
        }
    }

    for(ll i=0; i<s; ++i) {
        if(uniq[i]>='a' && uniq[i]<='z') {
            val=uniq[i]-'a';
            if(l>lo[val].last && f!=lo[val].first) {
                l=lo[val].last;
            }
        } else if(uniq[i]>='A' && uniq[i]<='Z') {
            val=uniq[i]-'A';
            if(l>hi[val].last && f!=hi[val].first) {
                l=hi[val].last;
            }
        }
    }



    cout<<f<<" "<<l<<el;

    cout<<f-l+1<<el;

    return 0;
}
