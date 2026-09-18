#include<bits/stdc++.h>
using namespace std;
long long a[26],b[26],c[26],d[26];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
        bool p=0;
        long long n;
        cin>>n;
        for(int k=0;k<2;k++){
            for(long long j=0;j<n;j++){
            	char u;
            	cin>>u;
            	if(u<='z'&&'a'<=u){
                    if(k==0){
                        a[u-'a']++;
                    }
                	else{
                        b[u-'a']++;
                    }
            		
            	}
            	if(u<='Z'&&'A'<=u){
                    if(k==0){
                        c[u-'A']++;
                    }
                	else
            		d[u-'A']++;
            	}
        	}
        }
        
        for(int j=0;j<26;j++){
            if(a[j]!=b[j]||c[j]!=d[j]){
                cout<<"NO"<<'\n';
                p=1;
                break;
            }
        }
        if(p==0){
            cout<<"YES"<<'\n';
        }
        
        for(int j=0;j<26;j++){
            a[j]=0;
            b[j]=0;
            c[j]=0;
            d[j]=0;
        }
    }
    return 0;
}