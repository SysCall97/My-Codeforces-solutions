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
const ll Max=(2*(1e5)+100);
map<ll,char>Map;
ll n,m,ans,lst,li=0,ri=0;
ll l[Max];
ll r[Max];
char ch;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    mem(l,0);
    mem(r,0);
    cin>>n;
    while(n--) {
        cin.ignore();
        cin>>ch>>m;
        if(ch=='L' || ch=='R') {
            if(ch=='L') l[m]=li++;
            else r[m]=ri++;
            Map.insert(mp(m,ch));
        } else {
            if(Map[m]=='L') ans=min(li-l[m]-1,l[m]+ri);
            else ans=min(ri-r[m]-1,r[m]+li);
            cout<<ans<<el;
        }
    }
    return 0;
}
