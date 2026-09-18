#include<stdio.h>
#include<string.h>
char arr[10];
int main(){
		int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
    int n;
    scanf("%d",&n);
    int last_num[5]={0};// 记录5个限行分组
    int flag=1;       
    for(int j=0;j<n;j++){
        scanf("%s",arr);
        int k=4;
        for(;k>=0;k--){
            if(arr[k]>='0'&&arr[k]<='9')break;
        }
        last_num[(arr[k]-'0')%5]++;
    }     
    // 检查覆盖的限行分组数量
    int group_count = 0;
    for(int k=0;k<5;k++){
        if(last_num[k] > 0){
            group_count++;
        }
    }        
    // 只要覆盖至少2个不同的限行分组，就能每天开车
    if(group_count >= 2) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}
return 0;}