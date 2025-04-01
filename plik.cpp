#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=100000;
    int t[100000];
    t[0]=1;
    t[1]=1;
    cout<<t[0]<<" "<<t[1]<<" ";
    for (int i=2;i<n;i++)
    {
        t[i]=t[i-1]+t[i-2];
        cout<<t[i]<<" ";
    }
}