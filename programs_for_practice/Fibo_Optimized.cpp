#include<iostream>
using namespace std;
void Fibo(int n){
	int A[n];
	A[0] = 0;
	A[1] = 1;
	for(int i = 2; i<n; i++)
		A[i] = A[i-1]+A[i-2];
	for(int j = 0; j<n; j++)
		cout<<A[j]<<" ";	
}
int main()
{
	int n;
	cin>>n;
	Fibo(n);
	return 0;
}
