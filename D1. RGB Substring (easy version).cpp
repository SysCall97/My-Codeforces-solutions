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
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

ll func(string& str, ll len) {
    if(len==1) return 0;
    else if(len==2) {
        if(str=="RG") return 0;
        else if(str=="GB") return 0;
        else if(str=="BR") return 0;
        else return 1;
    } else {

    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll q;
    cin>>q;
    while(q--) {
        ll l1, l2, ans=INF;
        cin>>l1>>l2;
        cin.ignore();
        string str, str1="";
        cin>>str;
        for(ll i=0; i<l2; ++i) str1+=str[i];
        for(ll i=l2; i<l1; ++i) {
            ans=min(ans, func(str, l2));
            str1+=str[i];
            str1.erase(str.begin()+0);
        }
        cout<<ans<<el;
    }
    return 0;
}
