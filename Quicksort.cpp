#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
	int pos = start;
	for(int i = start;i<=end;i++){
		if(arr[i] <= arr[end]){
			swap(arr[i],arr[pos]);
			pos++;
		}
	}
	return pos-1;
}
void quicksort(int arr[],int start,int end){
	if(start >= end){
		return;
	}
	int pivot = partition(arr,start,end);
  quicksort(arr,start,pivot-1);
	quicksort(arr,pivot+1,end);


}
int main(){
	int arr[]= {7,4,3,5,9,8,2,1,6};
	int n = sizeof(arr)/sizeof(arr[0]);

 quicksort(arr,0,8);
   for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
		return 0;
}