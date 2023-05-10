#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> zigzag(vector<int> nums) {
    int n = nums.size();
    
    
    sort(nums.begin(), nums.end());

    vector<int> result(n);

    
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result[i] = nums[right--];
        } else {
            result[i] = nums[left++];
        }
    }

    return result;
}

int main() {
    int n;
    cout<<"Enter size : ";
    cin>>n;
     cout<<"Enter input for array : ";
    vector<int> nums (n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    vector<int> result = zigzag(nums);

    // Print the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}