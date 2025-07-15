#include<iostream>
#include<vector>
using namespace std;

void printsubset(vector<int>& arr, int n, int idx, vector<int>& temp, vector<vector<int>>& ans) {
    // base case
    if (idx == n) {
        ans.push_back(temp);
        return;
    }

    
    printsubset(arr, n, idx + 1, temp, ans);

    
    temp.push_back(arr[idx]);
    printsubset(arr, n, idx + 1, temp, ans);

 
    temp.pop_back();
}

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    vector<int> temp;
    vector<vector<int>> ans;

		
    printsubset(arr, n, 0, temp, ans);
       for (const auto& subset : ans) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

  

    return 0;
}
