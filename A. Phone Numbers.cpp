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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,counter=0,ans=0,N,r;
    string inp;
    cin>>n;
    cin.ignore();
    getline(cin,inp);
    for(ll i=0; inp[i]; ++i) {
        if(inp[i]=='8') {
            ++counter;
            N=n-counter;
            r=counter*10;
            if(r<=N) ans=counter;
            else break;
        }
    }
    cout<<ans<<el;

    return 0;
}


