#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;int ans[208]={};
	cin>>a;
	cin>>b;
	int d1=1,c1=1;
	int d[102]={},c[102]={}; 
	for(int i = 1;i <= a.size() ;i++){
		d[i]=a[a.size() - i]-'0';
	}
		
	for(int j=1; j <= b.size(); j++){
		c[j]=b[b.size() - j ]-'0';
	}
	
	for(int i=1;i<=a.size();i++){
		for(int j=1;j<=b.size();j++){
			ans[i+j-1] += d[i]*c[j];
			ans[i+j] += ans[i+j-1] / 10;
            ans[i+j-1] = ans[i+j-1] % 10;
		}
	}
	int num=a.size()+b.size();
	
	for(int i=num;i>0;i--){
        if(ans[i]!=0) break;

		if(ans[i]==0){
			num--;
		}
	}
	for(int i=num;i>0;i--){
		cout<<ans[i];
	}

    return 0;
}