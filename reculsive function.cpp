#include<iostream>
using namespace std;
int fibonacci (int n){
	if(n <= 1)
return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
	int n;
	cout<<"enter any positive interger:"<<" ";
	cin>>n;
	if (n<0){
		cout<<"rong input:";
	}
	else{
		cout<<"fabinocci of "<<n<<" is "<<fibonacci(n)<<" ";
			}
			return 0;
	
}
