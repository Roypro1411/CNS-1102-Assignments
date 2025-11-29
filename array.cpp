#include<iostream>
using namespace std;
int main(){
	int array[10];
	int n,x,pos;
	cout<<"enter the no of element:";
	cin>>n;
	cout<<"enter the element:\n";
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<"enter the position at which you whant to insert:";
	cin>>pos;
	cout<<"enter the new element:";
	cin>>x;
	pos--;
	for(int i=n-1;i>=pos;i--)
	array[i+1]=array[i];
	array[pos]=x;
	n++;
	cout<<"\narray after inserting element:\n";
	for(int i=0;i<n;i++){
	cout<<array[i]<<" ";}
	return 0;
}
