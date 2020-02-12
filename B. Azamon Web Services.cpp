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
    ll n;
    cin>>n;
    while(n--) {
        string a, b;
        cin>>a>>b;
        bool ok=0;
        if(a<b) cout<<a<<el;
        else {
            ll szB = b.size();
            ll mini = min((ll)a.size(), szB);
            for(ll i=0; a[i]; ++i) {
                for(ll j=i+1; a[j]; ++j) {
                    if(a[i]==a[j]) continue;
                    swap(a[i], a[j]);
                    if(a<b) {
                        ok = 1;
                        break;
                    }
                    swap(a[i], a[j]);
                }
                if(ok || (i>=szB) || (i<mini && a[i]>b[i])) break;
            }
            if(ok) cout<<a<<el;
            else cout<<"---\n";
        }
    }
    return 0;
}

