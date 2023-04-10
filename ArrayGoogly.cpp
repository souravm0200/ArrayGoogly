#include <iostream>
#include <vector>

using namespace std;

vector<int> arrayGoogly(vector<int>& nums) {
    int n = nums.size();
    vector<int> output(n, 1);

    // compute products of all elements to the left of each index
    int leftProduct = 1;
    for (int i = 0; i < n; i++) {
        output[i] *= leftProduct;
        leftProduct *= nums[i];
    }

    // compute products of all elements to the right of each index
    int rightProduct = 1;
    for (int i = n-1; i >= 0; i--) {
        output[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return output;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> output = arrayGoogly(nums);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}
