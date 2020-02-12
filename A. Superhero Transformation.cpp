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
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

bool isVowel(char ch) {
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return 1;
    else return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string inp1,inp2;
    cin>>inp1>>inp2;
    if(inp1.size()!=inp2.size()) cout<<"No\n";
    else {
        bool b=1;
        for(ll i=0; inp1[i] && b; ++i) {
            if(isVowel(inp1[i])!=isVowel(inp2[i])) b=0;
        }
        if(b) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}

