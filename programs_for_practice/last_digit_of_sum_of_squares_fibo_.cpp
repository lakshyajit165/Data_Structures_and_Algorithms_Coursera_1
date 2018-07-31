#include<iostream>
using namespace std;
typedef long long int ll;
ll Fibo(ll n){
	ll A[n],sum = 0;
	A[0] = 0;
	A[1] = 1;
	if(n == 0){
		return(0);
	}
	else if(n == 1){
		return(1);
	}
	else{
		sum = 1;
		for(ll i = 2; i<n; i++){
	
		A[i] = A[i-1]+A[i-2];
		sum += A[i]*A[i];
	   }
	}
	
		
	return(sum);	
}
int main()
{
	ll n;
	cin>>n;
	cout<<Fibo(n+1);
	return 0;
}
