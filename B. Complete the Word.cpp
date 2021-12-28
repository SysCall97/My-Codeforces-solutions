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
string inp;
ll cnt[27],siz;

bool valid() {
    for(ll i=0; i<26; ++i)
        if(cnt[i]>1) return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,inp);
    siz=inp.size();
    if(siz<26) {
        cout<<-1<<el;
        return 0;
    } else {
        for(ll i=0; i<27; ++i) cnt[i]=0;

        for(ll i=0; i<26; ++i) if(inp[i]>='A' && inp[i]<='Z')
            ++cnt[inp[i]-'A'];

        for(ll i=25; i<siz; ++i) {

            if(i!=25) {
                if(inp[i-26]>='A' && inp[i-26]<='Z') --cnt[inp[i-26]-'A'];
                if(inp[i]>='A' && inp[i]<='Z') ++cnt[inp[i]-'A'];
            }

            if(valid()) {
                int curr=0;
                while(cnt[curr]==1) curr++;

                for(ll j=i-25; j<=i; ++j) {
                    if(inp[j]=='?') {
                        inp[j]='A'+curr;
                        curr++;
                        while(cnt[curr]==1) curr++;
                    }
                }
                for(ll j=0; inp[j]; ++j) if(inp[j]=='?')
                        inp[j]='A';
                    cout<<inp<<el;
                    return 0;

            }
        }
    }

    cout<<-1<<el;
    return 0;
}

