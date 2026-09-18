#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
            for(int j=0;j<n;j++){
                string s;
                cin>>s;
                for(int k=s.size()-1;k>=0;k--){
                    if(s[k]<='9'&&'0'<=s[k]){
                        a[s[k]-'0']++; //桶
                        k=-1;
                    }
                }
            }
           	bool p=0;
           	for(int k=0;k<5;k++){
               	if(a[1]==0&&a[6]==0){
               		cout<<"NO"<<'\n';     //一当有天不行就NO
               		p=1;
               		break;
            	}
            else if(a[2]==0&&a[7]==0){
            		cout<<"NO"<<'\n';
                	p=1;
                	break;
            	}
            else if(a[3]==0&&a[8]==0){
                	cout<<"NO"<<'\n';
                	p=1;
                	break;
           		}
      		else if(a[4]==0&&a[9]==0){
         			cout<<"NO"<<'\n';             
        			p=1;
                	break;
         		}
         	else if(a[5]==0&&a[0]==0){
        			cout<<"NO"<<'\n';  
        			p=1;
                	break;
            	}
        	}
            if(p!=1){
                cout<<"YES"<<'\n';
            }
            for(int j=0;j<10;j++){
                a[j]=0;//桶归零
            }
        
    }
    return 0;
}