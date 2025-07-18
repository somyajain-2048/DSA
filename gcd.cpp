#include<iostream>
#include<algorithm>

using namespace std;


int gcd(int min,int max){

	while(min>0){
		int temp = min;
		int rem = max%min;
		if(rem == 0){
			return min;

		}
		min = rem;
		max = temp;
	}
	return 1;
}
int main(){
	int nums[] = {2,5,6,9,10};
	int n = sizeof(nums)/sizeof(nums[0]);
	int min = *min_element(nums,nums+1);
	int max = *max_element(nums,nums+1);




	cout << gcd(min,max);

}