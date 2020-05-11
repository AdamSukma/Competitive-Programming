#include<bits/stdc++.h>

using namespace std;
// 1= 49
//9= 57
//0 = 48

bool sisa[10]={1,1,1,1,1,1,1,1,1,1};
string s;
void cek(int i){
	for(int j=(int)s[i]-48;j<=10;j++){
			if(sisa[j]){
				
				sisa[(int)s[i]-48]=1;
				s[i]=j+48;
				sisa[j]=0;
				cout<<'a';
				break;
				
				
			}

}
}



int main(){
	
	cin>>s;
	int temp;
	for(int i=0;i<s.size();i++){
		for(int j=0;j<10;j++){
		
		if(s[i]-48==j)sisa[j]=0;
	}
	}
	//for(int i=0;i<10;i++)cout<<sisa[i]<<' ';

	for(int i=s.size()-1;i>=0;i--){
			temp=s[i];
			if(i!=s.size()-1){
				for(int j =i+1;j<s.size();j++){
					sisa[j]=1;
					cout<<j<<' '<<i<<endl;
					for(int i=0;i<10;i++)cout<<sisa[i]<<' ';
				}
			}
			cek(i);
			//for(int i=0;i<10;i++)cout<<sisa[i]<<' ';
			cout<<endl<<s<<endl;
			if(temp!=s[i])break;
		
	
	}
	cout<<s;
	
	
}
