#include <iostream>
using namespace std;
int main() {
	int i,n;
	cout<<"Enter no. of elements :";
	cin>>n;
	cout<<"Here's the list of odd numbers between 1 to n :"<<endl;
	for(i=1;i<=n;i+=2) {
		cout<<i<<endl;
	}
}
