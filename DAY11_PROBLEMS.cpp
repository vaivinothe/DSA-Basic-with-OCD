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
// TC : O(n^2)
// SC : O(n^2)
Q-2: https://leetcode.com/problems/rotate-image/description/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        #include<iostream>
        #include<vector>
        #include<algorithm>
        using namespace std;
            int n = matrix.size();
            // cout << "enter :";
            // cin >> n;
            // int count = 0;
            // vector<vector<int>>matrix(n , vector<int>(n));
            // for (int i = 0; i < n; i++)
            // { for (int j = 0; j < n ; j++)
            // {
            //     cin >> matrix[i][j];
            // }
            // }
            for (int i = 0; i < n; i++)
            {
                for  (int j = 0; j <=i ; j++)
                {       int temp;
                        temp = matrix[i][j];
                        matrix[i][j] = matrix[j][i];
                        matrix[j][i]= temp;
                        // count++;
                }
                
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n/2 ; j++)
                {   int temp;
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[i][n-j-1];
                    matrix[i][n-j-1]= temp;
                }
                
            }
        // return {matrix}; 
    }
};
// TC : O(n^2)
// SC : O(1)

Q-3: https://leetcode.com/problems/spiral-matrix/description/ 

