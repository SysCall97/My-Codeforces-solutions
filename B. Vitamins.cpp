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
    ll price;
    bool arr[3];
    element() {
        arr[0]=arr[1]=arr[2]=false;
    }
} jus[1010];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,p,c[4]= {0};
    string str;
    cin>>n;
    for(ll i=0; i<n; ++i) {
        cin>>p>>str;
        jus[i].price=p;
        for(ll j=0; str[j]; ++j) {
            jus[i].arr[str[j]-'A']=1;
            ++c[str[j]-'A'];
        }
        str.clear();
    }
    if(c[0]<1 || c[1]<1 || c[2]<1) cout<<"-1"<<el;
    else {
        ll a_min=INF,b_min=INF,c_min=INF,pri;
        for(ll i=0; i<n; ++i) if(jus[i].arr[0]) {
                if(jus[i].price<a_min) a_min=i;
            }
        for(ll i=0; i<n; ++i) if(jus[i].arr[1]) {
                if(jus[i].price<b_min) b_min=i;
            }
        if(a_min==b_min) {
            pri=jus[a_min].price;
            if(!jus[a_min].arr[2]) {
                for(ll i=0; i<n; ++i) if(jus[i].arr[2]) {
                        if(jus[i].price<c_min) c_min=i;
                    }
                pri+=jus[c_min].price;
            }

        } else {
            if(jus[a_min].arr[2] || jus[b_min].arr[2]) pri=jus[a_min].price+jus[b_min].price;
            else {
                    pri=jus[a_min].price+jus[b_min].price;
                for(ll i=0; i<n; ++i) if(jus[i].arr[2]) {
                        if(jus[i].price<c_min) c_min=i;
                    }
                pri+=jus[c_min].price;
                if(jus[c_min].arr[0]) pri-=jus[a_min].price;
                if(jus[c_min].arr[1]) pri-=jus[b_min].price;
            }
        }
        cout<<pri<<el;
    }

    return 0;
}

//not submitted
