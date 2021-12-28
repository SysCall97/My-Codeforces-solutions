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
typedef unsigned long long ull;
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--) {
        ull n,m,x1,x2,x3,x4,y1,y2,y3,y4;
        cin>>n>>m;
        cin>>x1>>y1>>x2>>y2;
        cin>>x3>>y3>>x4>>y4;
        ull b=((n*m)+(x4-x3+1)*(y4-y3+1))/2, w=(n*m)-b;
        ull areaOfWhite=(x2-x1+1)*(y2-y1+1);


        cout<<w<<" "<<b<<el;

    }

    return 0;
}





















//        ull b=(n*m)/2;
//        ull w=(n*m)%2?b+1:b;
////        cout<<b<<" "<<w<<el;
//        ull dw=(x2-x1+1)*(y2-y1+1);
//        ull db=(x4-x3+1)*(y4-y3+1);
//        w+=dw;
//        b-=(dw/2);
//        dw=dw%2?(dw+1)/2:dw/2;
//        w-=dw;
//        b+=db;
//        b-=(db/2);
//        db=db%2?(db+1)/2:db/2;
//        w-=db;
//        if(w+b!=n*m) w=w-(w+b)+n*m;
//        cout << w << " " << b << el;

