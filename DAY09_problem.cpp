
Q-1 : https://leetcode.com/problems/two-sum/description/

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
Q-2 : https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        #include<iostream>
        // #include<vector>
        using namespace std;
            int n = nums.size();
            for (int i = 0; i < n-1; i++)
            { 
                for (int j = i+1; j < n; j++)
                {
                    if ((nums[j] == 2) && (nums[i] != 2))
                    {
                        int temp;
                        temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                    }
                    if ((nums[j] == 1) && (nums[i] != 1))
                    {
                        int temp;
                        temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        }
                        
                    if ((nums[j] == 0) && (nums[i] != 0))
                    {
                        int temp;
                        temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                    }
                    
                } 
            }
    }
};
Q-3 : https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0 


class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        #include<iostream>
        #include<limits>
        using namespace std;
    
        int n = arr.size();
        int max = numeric_limits<int>::min();
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] + arr[i+1] > max)
            {
                max = arr[i]  + arr [i+1];
            }
        }
        return{max};   
    }
};


