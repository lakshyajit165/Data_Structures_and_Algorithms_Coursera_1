#include<iostream>
using namespace std;
int Fibo(int n){
	int A[n];
	A[0] = 0;
	A[1] = 1;
	for(int i = 2; i<n; i++)
		A[i] = A[i-1]+A[i-2];
		
	return(A[n-1]);	
}
int main()
{
	int n;
	cin>>n;
	cout<<Fibo(n+1);
	return 0;
}
