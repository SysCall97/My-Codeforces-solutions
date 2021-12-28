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
    string inp,out="";
    ll n,pos;
    cin>>n;
    cin.ignore();
    cin>>inp;
    pos=n-1;

    for(ll i=0; i<n-1; ++i) if(inp[i]>inp[i+1]) {
            pos=i;
            break;
        }

    cout<<inp.substr(0,pos)+inp.substr(pos+1)<<el;

    return 0;
}


