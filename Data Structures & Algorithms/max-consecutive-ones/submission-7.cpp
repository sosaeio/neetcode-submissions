class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int reset = 0;
        for(int num : nums){
            reset = num ? reset + 1 : 0;
            count = max(count, reset);
        }
        return count;
    }
};
/*
count = 0
reset = 0
[1,1,0,1,0,1,1,1,0,1,1]
count = 2 first 2 before 0
reset = 2 -> 0
count = 1 only 1 before 0
reset = 1 -> 0
count = 3
reset = 3 -> 0

#include <print>
#include <vector>
#include <iostream>

using namespace std;


    std::println("Hello World");
    vector<int> nums{1,4,6,7,5,2};
    println("nums: {}", nums);
    /* lets find maximum number of sub array for 3 elements
    for this case
    1+4+6 = 11
    4+6+7 = 17
    6+7+5 = 18 -> My answer is {6,7,5} and total is 18
    7+5+2 = 14
    SLIDING WINDOW
    */
//     int total = 0;
//     // vector<int> result(3); //lets use inplace so no need for new data so remove this
//     int len = nums.size();
//     int k = 3;
//     int windowSum = 0;
//     for(int i = 0; i < k; ++i){
//         windowSum += nums[i];
//     }
//     float windowAvg = static_cast<float>(windowSum) / k;
//     println("window sum is: {}", windowSum);
//     println("window average is: {:.2f}", windowAvg);
//     int maxSum = windowSum;
//     float maxAvg = windowAvg;
//     //now add the index
//     int bestStartIndex = 0;
//     for (int i = k; i < len; i++){
//         windowSum += nums[i] - nums[i - k];
//         // cout << windowSum << ",";
//         // maxSum = max(maxSum, windowSum);
//         // maxAvg = maxSum / k;
//         if(windowSum > maxSum){
//             maxSum = windowSum;
//             maxAvg = static_cast<float>(maxSum)/k;
//             bestStartIndex = i - k + 1;
//         }
//     }
//     cout << "\n";
//     println("max sum is: {}", maxSum);
//     println("max average is: {:.2f}", maxAvg);
//     vector<int> result(nums.begin() + bestStartIndex, nums.begin() + bestStartIndex + k);
//     println("result: {}", result);
    

// */