#include<iostream>
using namespace std;

int printsum(int arr[],int n,int idx){
if(idx == n){
	return 0;
}

	return arr[idx] + printsum(arr,n,idx+1);
}
int main(){
	int arr[] = {3,5,7,8,9,2};
	cout<<printsum(arr,6,0);
}