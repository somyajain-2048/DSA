#include<iostream>
#include<vector>
using namespace std;
void permutate(vector<int>&arr,vector<vector<int>>&ans,int idx){
	if(idx == arr.size()){
	ans.push_back(arr);
  return;
	}


for(int  i =idx;i<arr.size();i++){
	swap(arr[i],arr[idx]);
	permutate(arr,ans,idx+1);
	swap(arr[i],arr[idx]);
}
}
int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
 permutate(arr, ans, 0);

 for(auto i :ans){
	for(int num : i){
		cout<<num<<"";
	}
	cout<<endl;
 }
 return 0;
}