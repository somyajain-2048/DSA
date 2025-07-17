#include<iostream>
using namespace std;

int repitationtargetsum(int arr[],int idx,int sum,int n){
	if(sum == 0)
	return 1;
else if (sum < 0 || idx == n)
return  0;


return repitationtargetsum(arr,idx+1,sum,n) + repitationtargetsum(arr,idx,sum-arr[idx],n);
}
int main(){
	int arr[] = {2,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout <<repitationtargetsum(arr,0,6,n);
	return 0;
}