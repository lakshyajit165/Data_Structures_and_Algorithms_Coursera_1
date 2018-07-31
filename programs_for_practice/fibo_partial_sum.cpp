#include<iostream>
using namespace std;
long long Fibo(int a,int b){
	long long A[n];
	long long sum = 0;
	A[0] = 0;
	A[1] = 1;
	for(int i = 2; i<n; i++){
		A[i] = A[i-1]+A[i-2];
	}
	for(int i = a-1; i<=b-1; i++)
		sum+=A[i];
	return(sum%10);	
}
int main()
{
	int from,to;
	cin>>from>>to;
	cout<<Fibo(from,to);
	return 0;
}
