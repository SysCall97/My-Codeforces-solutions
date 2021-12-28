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
    ll x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    ll left=min(x1,min(x2,x3));
    ll right=max(x1,max(x2,x3));
    ll ansX,ansY;
    if(left==x1) ansX=x1,ansY=y1;
    if(left==x2) ansX=x2,ansY=y2;
    if(left==x3) ansX=x3,ansY=y3;

    for(ll i=left; i<=right; ++i) {
        if(i!=x1 && i!=x2 && i!=x3) {
            cout<<ansX<<" "<<ansY<<el;
            ++ansX;
        }
    }

    return 0;
}


