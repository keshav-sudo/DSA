Brute == 
make a new array furst put it all even then odd then copy 



optimal == 

start a poniter using i and j will find even number and swwap with i 


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                if(nums[j] % 2 != 0){
                    swap(nums[i] , nums[j]);
                }
            }

        }
        return nums;
    }
};