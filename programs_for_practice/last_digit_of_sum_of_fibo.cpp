#include<iostream>
using namespace std;
long long calc_last_digit(long long n){
	if(n <= 1)
		return(n);
	else{
		long long A[n+1];
		A[0] = 0;
		A[1] = 1;
		for(long long i = 2; i < (n+1); i++)
			A[i] = A[i-1] + A[i-2];
		return(A[n]-1);		
	}	
}
int main(){
	
	long long n,res;
	cin>>n;
	res = calc_last_digit(n+2)-1;
	cout<<res;
	return 0;
}
