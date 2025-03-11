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
Q-2: https://leetcode.com/problems/next-permutation/description/





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
