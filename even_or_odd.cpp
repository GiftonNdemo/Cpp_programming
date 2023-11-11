#include<iostream>
using namespace std;
int main(){
	int x;
	cout << "Enter a number: ";
	cin >> x;
	if(x%2==0){
		cout << x <<" is an even number";
		cout << "\n";
	}
		else{
			cout << x << " is an odd number";
			cout << "\n";
		}
return 0;
}