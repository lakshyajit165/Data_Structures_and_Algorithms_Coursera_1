#include<iostream>
using namespace std;
int calc_last_digit(int n){
	int a = 0, b = 1;
	for(int i = 0; i<n; i++){
		a = b % 10;
		b = (a+b) % 10;
	}
	return a;
}
int main(){
	
	int n,res;
	cin>>n;
	cout<<calc_last_digit(n);
	return 0;
}8
