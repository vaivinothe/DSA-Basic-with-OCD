Q-1: https://leetcode.com/problems/pascals-triangle/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> nums; 
        
        for (int i = 0; i < numRows; i++) {
            vector<int> nums1(i + 1, 1);  

            for (int j = 1; j < i; j++) {
                nums1[j] = nums[i - 1][j - 1] + nums[i - 1][j]; 
            }

            nums.push_back(nums1);  
        }

        return nums;
    }
};
Q-2: https://leetcode.com/problems/rotate-image/description/

