#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int s,int mid,int e){
	vector<int>temp(e-s+1);

	int left = s;
	int right = mid+1;
	int index = 0;

	while(left <= mid && right <=e){
		if(arr[left] <= arr[right]){
			temp[index] = arr[left];
					index++;
	        left++;
	
		}

		else{
			temp[index] = arr[right];
			  index++;
      right++;
    
		}																		
	}

	while(left <= mid){
		temp[index] = arr[left];
		index++;
		left++;
	}

	while(right <= e){
		temp[index] = arr[right];
		index++;
		right++;
	}
  for (int i = 0; i < temp.size(); i++) {
        arr[s + i] = temp[i];
    }

}
void mergesort(int arr[],int s,int e){

	// base condition
	if(s >= e){
		return;
	}

	int mid = s + (e-s)/2;
	mergesort(arr,0,mid);
	mergesort(arr,mid+1,e);
	merge(arr,s,mid,e);
}
int main(){
	int arr[]= {7,4,3,5,9,8,2,1,6};
	int n = sizeof(arr)/sizeof(arr[0]);

 mergesort(arr,0,8);
   for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

	
	return 0;

}