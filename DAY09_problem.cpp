
q-1 : https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        #include<iostream>
        #include<vector>

        using namespace std;
        int n = nums.size();

         for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                
                if (nums[i] + nums[j] == target)
                {  
                cout << i <<" "<< j<<endl;
                return {i,j};
                
                }
            }
        }
    return{};
}
q-2 : https://leetcode.com/problems/sort-colors/description/
