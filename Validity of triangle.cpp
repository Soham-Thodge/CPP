#include<iostream>
using namespace std;
int main() {
	int A,B,C;
	cout<<"Enter A side of triangle :";
	cin>>A;
	cout<<"Enter B side of triangle :";
	cin>>B;
	cout<<"Enter C side of triangle :";
	cin>>C;
	if((A+B)>C) {
		cout<<"This triangle is valid";
	}
	else if((B+C)>A) {
		cout<<"This triangle is valid";
	}
	else if((C+A)>B) {
		cout<<"This triangle is valid";
	}
	else {
		cout<<"Triangle is invalid";
	}
}
