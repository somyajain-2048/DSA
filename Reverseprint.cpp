#include<iostream>
using namespace std;

void printarr(int arr[], int n,int idx){
	// base condition
	if(idx == -1)
		return ;
	
cout<<arr[idx]<<" ";
printarr(arr,n,idx-1);

}
int main(){



	int arr[] = {2,5,6,8,9};
	printarr(arr,5,4);
}