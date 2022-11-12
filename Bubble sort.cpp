#include<iostream>
using namespace std;
int main() {
	int arr[100],i,j,temp,n;
	cout<<"Enter the no. of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" elements :";
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i;j++) {
			if(arr[j]>arr[j+1]) {
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted list :";
	for(i=0;i<n;i++) {
		cout<<arr[i];
	}
}
