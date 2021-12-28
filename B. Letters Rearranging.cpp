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
    ll t;
    cin>>t;
    cin.ignore();
    while(t--) {
        ll str[26],siz;
        bool b=0;
        for(ll i=0; i<26; ++i) str[i]=0;
        string inp;
        cin>>inp;
        for(siz=0; inp[siz]; ++siz) ++str[inp[siz]-'a'];
        for(ll i=0; i<26; ++i) {
            if(siz==str[i]) {
                b=1;
                break;
            }
        }
        if(b) cout<<-1<<el;
        else {
            for(ll i=0; i<26; ++i) {
                char ch='a'+i;
                for(ll j=0; j<str[i]; ++j) cout<<ch;
            }
            cout<<el;
        }
    }

    return 0;
}
