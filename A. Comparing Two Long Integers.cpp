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

void deleteLeadingZero(string& nm) {
    stack<char> stk;
    for(ll i=nm.size()-1; i>=0; --i) stk.push(nm[i]);
    while(!stk.empty() && stk.top()=='0') stk.pop();
    nm="";
    while(!stk.empty()) {
        nm+=stk.top();
        stk.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string nm1,nm2;
    cin>>nm1>>nm2;
    if(nm1[0]=='0') deleteLeadingZero(nm1);
    if(nm2[0]=='0') deleteLeadingZero(nm2);
    ll sz1=nm1.size(), sz2=nm2.size();
    if(sz1<sz2) cout<<"<\n";
    else if(sz1>sz2) cout<<">\n";
    else {
        for(ll i=0; i<sz1; ++i) {
            if(nm1[i]<nm2[i]) {
                cout<<"<\n";
                return 0;
            } else if(nm1[i]>nm2[i]) {
                cout<<">\n";
                return 0;
            }
        }
        cout<<"=\n";
    }

    return 0;
}
