#include<bits/stdc++.h>
using namespace std;
struct ad{
	int b;
    string s;
} a[8002];
int c[8002];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].b>>a[i].s;
        c[a[i].b-1]++;
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        string s1;
        int o;
        cin>>s1;
        cin>>o;
        for(int j=0;j<n;j++){
            if(a[j].s==s1){
                c[o-1]++;
                break;
            }
        }
    }
    cin>>n;
    for(int i=0;i<n;i++){
        int u;
        cin>>u;
        if(c[u-1]!=0){
            cout<<"no"<<'\n';
        }
        else{
            cout<<"yes"<<'\n';
        }
    }
    return 0;
}