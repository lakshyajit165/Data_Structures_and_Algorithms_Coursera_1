#include<iostream>
using namespace std;
class PrintData{
	public:
		void print(int i){
			cout<<"Printing int: "<<i<<endl;
		}
		void print(double f){
			cout<<"Printing Double: "<<f<<endl;
		}
		void print(char* c){
			cout<<"Printing character: "<<c<<endl;
		}
};
int main(){
	
	PrintData pd;
	pd.print(5);
	pd.print(4.55);
	pd.print("Hello C++");
	return 0;
}

