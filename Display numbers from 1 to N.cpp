#include<iostream>
using namespace std;
int main() {
	int n,N;
	n=1;
	cout<<"Enter the number of elements :";
	cin>>N;
	if(n<N) {
		cout<<n;
		n=n+1;
	}
	else {
		cout<<n;
	}
}
