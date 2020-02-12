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
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool b[27];
    for(int i=0; i<27; ++i) b[i]=0;
    int counter=0;
    string name;
    cin>>name;
    for(int i=0; name[i]; ++i) {
        if(!b[name[i]-'a']) {
            ++counter;
            b[name[i]-'a']=1;
        }
    }
    if(counter%2) cout<<"IGNORE HIM!"<<el;
    else cout<<"CHAT WITH HER!"<<el;
    return 0;
}

