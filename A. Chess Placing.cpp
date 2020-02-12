#include<bits/stdc++.h>
using namespace std;
int n,m,arr[200],temp[200];
int absv(int n) {return (n>0)?n:((-1)*n);}
int minimum(int n, int m) {return (n>m)?m:n;}
int func1()
{
    int cnt=0;
    for(int i=m,j=n; i>=1; --i,j-=2) {
        cnt+=absv(j-arr[i]);
    }
    return cnt;
}

int func2()
{
    int cnt=0;
    for(int i=1,j=1; i<=m; ++i,j+=2) {
        cnt+=absv(j-arr[i]);
    }
    return cnt;
}

void mergeSort(int lo, int hi)
{
    if(lo==hi) return;
    int mid=(lo+hi)/2;
    mergeSort(lo,mid);
    mergeSort(mid+1,hi);

    for(int i=lo,j=mid+1,k=lo; k<=hi; ++k) {
        if(i==mid+1) temp[k]=arr[j++];
        else if(j==hi+1) temp[k]=arr[i++];
        else if(arr[i]<arr[j]) temp[k]=arr[i++];
        else temp[k]=arr[j++];
    }
    for(int i=lo; i<=hi; ++i) arr[i]=temp[i];
}

int main()
{
    while(scanf("%d",&n)==1) {
        m=n/2;
        for(int i=1; i<=m; ++i)
            scanf("%d",&arr[i]);
        mergeSort(1,m);
        int even=func1();
        int odd=func2();
        printf("%d\n",minimum(even,odd));
    }
    return 0;
}
