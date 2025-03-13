Q-1.https://leetcode.com/problems/binary-search/description/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++)
            {
                if (target == nums[i])
                {
                    return i;
                }
                
            } 
        return -1 ;
    }
};
// TC : O(n)
// SC : O(1)

Q-2.https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        #include<iostream>
        #include<vector>
        #include<algorithm>
        using namespace std;   
        // int target ;
        // cout << "enter :";
        // cin >> target;
        int k =0;
        vector<int>nums1;
        int n = nums.size();
        bool ram = true;
        // vector<int>nums;
        // for (int i = 0; i < size; i++)
        // {
        //     cin >> nums[i];
        // }
        for (int i = 0; i < n; i++)
        {
            if (target == nums[i]  )
            {
                nums1.push_back(i);
                k =i;
                break;
                
            }  
           
        }
        for (int i = n-1; i > k; i--)
        {
            if (target == nums[i] )
            {
                nums1.push_back(i);
                break;
            }  
           
        }
            if(nums1.size() == 1){
                nums1.push_back(k);

            }
    if(nums1.size() > 0)return {nums1};
    else return{-1,-1};
    }
};
// TC : OC(n)
// SC : O(1)







Q-3.https://leetcode.com/problems/search-insert-position/description/ 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        #include<iostream>
        using namespace std;
            int n = nums.size();
            int result ;
            // cout << "enter :";
            // cin >> target;
            // int nums[5];
            bool ram = true ;
            for (int i = 0; i < n; i++)
            {
                if (target == nums[i])
                {
                    result = i;
                    ram = false;
                }
            }
            if (ram)
            {
                for (int j = 0; j < n; j++)
                {
                if (j > 0 &&(target < nums[j] && target > nums[j-1]))
                {
                    result = j;
                    break;
                }
                else if (j > 0 &&(target > nums[j] && target < nums[j-1]))
                {
                    result = j;
                    break;
                }
                else if(target > nums[n-1]){
                    result = n;
                    break;
                }
                else if(target < nums[0]){
                    result = 0;
                    break;
                }
                    
                    
                }
            }
        return result ;
    }
}; 
// OC : O(n)
// TC : O(1)
