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
    ll h,m,t;
    string hh,mm;
    ostringstream ch,cm;
    char c;
    cin>>h>>c>>m>>t;
    for(ll i=0; i<t; ++i) {
        ++m;
        if(m>59) {
            m%=60;
            h=(h+1)%24;
        }
    }
    ch<<h;
    hh=ch.str();
    cm<<m;
    mm=cm.str();
    if(mm.size()!=2) mm='0'+mm;
    if(hh.size()!=2) hh='0'+hh;
    cout<<hh<<":"<<mm<<el;
    return 0;
}


