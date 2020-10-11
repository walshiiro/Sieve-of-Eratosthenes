#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;

    bool a[10000];
    memset(a,true,sizeof(a));
    a[1]=false;
    int i=2;
    while (i<=trunc(sqrt(x)))
    {
        while(!a[i])
        i++;
        for(int j=i;j<=x/i;j++)
            a[i*j]=false;
        i++;




    }
    for(int i=1;i<=x;i++)
        if(a[i])
            cout<<i<<" ";


}
