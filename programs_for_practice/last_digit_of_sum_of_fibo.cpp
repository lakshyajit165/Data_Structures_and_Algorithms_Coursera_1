#include<iostream>
using namespace std;
long long Fibo(long n){
	long long A[n];
	long long sum = 0;
	A[0] = 0;
	A[1] = 1;
	for(int i = 2; i<n; i++){
		A[i] = A[i-1]+A[i-2];
	}
	for(int i = 0; i<n; i++)
		sum+=A[i];
	return(sum%10);	
}
int main()
{
	int n;
	cin>>n;
	cout<<Fibo(n);
	return 0;
}
