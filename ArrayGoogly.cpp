#include <vector>
#include <iostream>

using namespace std;

vector<int> product_except_self(vector<int>& nums) {
    int n = nums.size();
    vector<int> left_products(n);
    vector<int> right_products(n);
    vector<int> output(n);

    // compute products of all elements to the left of each index
    left_products[0] = 1;
    for (int i = 1; i < n; i++) {
        left_products[i] = left_products[i-1] * nums[i-1];
    }

    // compute products of all elements to the right of each index
    right_products[n-1] = 1;
    for (int i = n-2; i >= 0; i--) {
        right_products[i] = right_products[i+1] * nums[i+1];
    }

    // compute final output array
    for (int i = 0; i < n; i++) {
        output[i] = left_products[i] * right_products[i];
    }

    return output;
}


int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> output = product_except_self(nums);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}
