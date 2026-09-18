#include<bits/stdc++.h>
using namespace std;
long b[100001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,h;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>b[i];
    }
    for(int i=0;i<k;i++){
        if(h<0){
            cout<<i+1;
            return 0;
        }
        h-=a[b[i]-1];
        a[i]/=2;
        //cout<<h<<' ';
    }
    cout<<"A peaceful night";
    return 0;
}