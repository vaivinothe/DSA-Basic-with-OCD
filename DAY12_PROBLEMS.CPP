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
Q-2.https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/







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
