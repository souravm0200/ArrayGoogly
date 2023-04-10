# ArrayGoogly
Its a new algorithm problem using arrray.


Problem:

Given an array of integers, return an array where each element at index i of the output array is the product of all the elements in the input array except the element at index i.

For example, if the input array is [1, 2, 3, 4, 5], the output array should be [120, 60, 40, 30, 24]. This is because the product of all the elements in the input array except the element at index 0 is 2*3*4*5 = 120, the product of all the elements except the element at index 1 is 1*3*4*5 = 60, and so on.

Solution:

One way to solve this problem is to use two arrays - one to store the products of all the elements to the left of each index, and one to store the products of all the elements to the right of each index. We can then compute the product of the left and right arrays at each index to get the final result.



The Complexcity :
The time complexity of this algorithm is O(n), where n is the length of the input array, since we traverse the input array three times - once to compute the left products, once to compute the right products, and once to compute the final output array. The space complexity is also O(n), since we use two arrays of size n to store the left and right products.
