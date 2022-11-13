#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	
	//row
	for(int i = 1 ; i <= n ; i++ ){
		//column
		//space
		int space = i-1;
		for(int k =1 ;k<=space;k++){
			cout<<" ";
		}
		
		// star
		for(int j = n-i+1 ;j>=1  ; j-- ){
			cout<<"*";
		}
		cout<<endl;
	}
	
	}
