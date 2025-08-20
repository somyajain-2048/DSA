#include<iostream>
#include<vector>
using namespace std;

bool divide(vector<int>arr){
  int totalsum = 0 ;
  int prefixsum = 0;
  int n = arr.size();

  for(int i =0;i<n;i++){
    totalsum += arr[i];
  }

  for(int i = 0;i<=n;i++){
    prefixsum+= arr[i];
  }

  if(totalsum = 2*prefixsum)
  return 1;

  else return 0;

}
int main(){
  int n;
  cin>>n;

  vector<int>v(n);
  cout<<"enter elements in arr: ";

  for(int i = 0;i<n;i++)
    cin>>v[i];
  cout<<divide(v);

}