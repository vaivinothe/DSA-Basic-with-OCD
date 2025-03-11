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
// SC : O(n)
// TC :O(n)

Q-2: https://leetcode.com/problems/next-permutation/description/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        #include<iostream>
        #include<limits>
        #include<algorithm>
        #include <iterator> 
        using namespace std;
        
            int n = nums.size();
            int max = INT8_MAX;
            int index_second = 0;
            int count = 0;
            int first_index = 0;
            int q = 0;
            for (int i = n-1 , j = n-2; i >=1 && j >=0; i--,j--)
            {
                if (nums[i] - nums[j] > 0)
                {
                first_index = j;
                q = nums[j]; 
                count++;
                }
            if (count >0)
            {
                break;
            } 
            }
        if(count>0)
            { for (int i = first_index +1; i < n; i++)
                {
                    if (nums[i] > q && nums[i] <= max)
                    {
                    max = nums[i]; 
                    index_second = i;
                    }
                }
                swap(nums[first_index], nums[index_second]);
                for (int j = first_index+1 ; j < n; j++)
                {
                    if(j != n-1){
                         reverse(begin(nums) + (first_index +1), begin(nums) + n);
                         break;
                        }
                    }
            }
            else
            {
                reverse(nums.begin(), nums.begin()+ n);
            }
    }
};
//  SC : O(1)
//  TC : O(n)



Q.3  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/ 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       #include<iostream>
        #include<limits>
        using namespace std;
            // int n = prices.size();
             int minPrice = INT_MAX;  
             int maxProfit = 0;      
        
      
          for (int price : prices) {
            minPrice = min(minPrice, price);  
            maxProfit = max(maxProfit, price - minPrice);  
        
    }
 
    return{maxProfit} ;      
         
    }
};
// SC : O(1)
// TC : O(n)

// and problem solution with TLE -

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size of array";
    cin >> n;
    int prices[n];
    int k;
    // cout << min;
    int max = -10000;
    for (int i = 0; i < n; i++)
    {   cout << "enter "<< i << "element :";
        cin >> prices[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if ((prices[j] - prices[i] > max ) && (prices[j] - prices[i] >= 0 ))
           {
            max = prices[j] - prices[i];
           }
            
        }
        
    }
    cout<<max;
}
