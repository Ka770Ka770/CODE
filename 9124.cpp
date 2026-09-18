#include<bits/stdc++.h>
using namespace std;
struct as{
    int a,b;
    char c;
} a[21];
bool cmp(as v,as b){
    if(v.b==b.b){
        return v.a>b.a;
    }
    else{
        return v.b>b.b;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].a>>a[i].b>>a[i].c;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].a<<' '<<a[i].b<<' '<<a[i].c<<'\n';
    }
    return 0;
}