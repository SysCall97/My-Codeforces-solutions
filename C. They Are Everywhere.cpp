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
    ll lw[27],hi[27],n,counter=0;
    string inp;
    for(ll i=0; i<27; ++i) lw[i]=hi[i]=0;
    cin>>n;
    cin.ignore();
    getline(cin,inp);

    ll strt=0,lst=n-1;

    for(ll i=0; i<n; ++i) {
        if(inp[i]>='a' && inp[i]<='z')  {
            ++lw[inp[i]-'a'];
            if(lw[inp[i]-'a']==1) counter++;
        } else if(inp[i]>='A' && inp[i]<='Z')  {
            ++hi[inp[i]-'A'];
            if(hi[inp[i]-'A']==1) counter++;
        }
    }

    for(ll i=0; i<n; ++i) {
        if(inp[i]>='a' && inp[i]<='z') {
            if(lw[inp[i]-'a']-1==0) {
                strt=i;
                --lw[inp[i]-'a'];
                break;
            } --lw[inp[i]-'a'];
        } else if(inp[i]>='A' && inp[i]<='Z') {
            if(hi[inp[i]-'A']-1==0) {
                strt=i;
                --hi[inp[i]-'A'];
                break;
            } --hi[inp[i]-'A'];
        }
    }

    for(ll i=n-1; i>strt; --i) {
        if(inp[i]>='a' && inp[i]<='z') {
            if(lw[inp[i]-'a']-1==0) {
                lst=i;
                --lw[inp[i]-'a'];
                break;
            } --lw[inp[i]-'a'];
        } else if(inp[i]>='A' && inp[i]<='Z') {
            if(hi[inp[i]-'A']-1==0) {
                lst=i;
                --hi[inp[i]-'A'];
                break;
            } --hi[inp[i]-'A'];
        }
    }

    cout<<lst-strt+1<<el;
    return 0;
}


