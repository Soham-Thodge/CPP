#include<iostream>
using namespace std;
int main(){
	cout<<"Program to calculate simple interest"<<"\n";
	int P,R,T,SI;
	cout<<"Enter the principal amount :";
	cin>>P;
	cout<<"Enter the rate of interest :";
	cin>>R;
	cout<<"Enter the time period :";
	cin>>T;
	SI=(P*R*T)/100;
	cout<<"The simple interest on principal amount "<<P<<" is "<<SI;
}
