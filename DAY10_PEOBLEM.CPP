Q.1: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        #include<iostream>
        using namespace std;
                  int n = nums.size();
                  vector<int> nums2(n,0);
                  int positive_index = 0;
                  int negative_index = 1;
                  bool ram = true;
                  int k = 0;
                for (int i = 0; i < n; i++)
                        {
                          if(nums[i]<0){
                            nums2[negative_index] = nums[i];
                            negative_index += 2;
                          }  
                          else{
                            nums2[positive_index] = nums[i];
                            positive_index += 2;

                          }
                        }
                        
                return {nums2};
                
    }           
            
};
