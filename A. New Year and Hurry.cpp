/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define sum(n) n*(n+1)/2
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    ll time=240-k;
    ll hi=n,lo=0,mid=(hi+lo)/2,prev=mid;
    ll remain=5*sum(mid);

    while(hi>=lo) {
        mid=(hi+lo)/2;
        remain=5*sum(mid);
        if(remain<time) lo=mid+1;
        else if(remain>time) hi=mid-1;
        else break;
        if(remain<=time) prev=mid;
    }
    if(remain>time) mid=prev;
    cout<<mid<<el;

    return 0;
}

