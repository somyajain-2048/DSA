#include<iostream>
using namespace std;

int pow(int base,int x){
	if(x == 0){
		return 1;
	}
	return (base*pow(base,x-1));
}
int main(){
	int base = 5;
	int x = 3;

	cout << pow(base,x);
	return 0;

}