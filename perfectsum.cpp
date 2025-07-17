#include<iostream>
using namespace std;

int perfectsum(int arr[],int idx,int sum,int n){
	if(idx == n){
    if(sum ==0 ){
	return 1;
}
	else{
return 0;
	}
		}

	return perfectsum(arr,idx+1,sum,n) + perfectsum(arr,idx+1,sum-arr[idx],n);
}
int main(){
	int arr[] = {2,5,6,1};
	int n = sizeof(arr)/sizeof(arr[0]);


	cout << perfectsum(arr,0,8,4);
}