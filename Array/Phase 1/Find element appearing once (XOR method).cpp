These Brute Force approcach := 
in this TC is O(n^2) Ans SC is O(1);
we use here nested loop first one is for inetration 
secodn one is for find element and upadte count


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        for(int i  = 0 ; i<n ; i++){
           
             int count = 0;

            for(int j = 0 ; j<n ;j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }                                                                                         
            if(count == 1) {
                return nums[i];
            }
        }
        return -1;
            }
};


using HashMap --

we use here a HashMap
a unorderd map and and iterate with num with nums and make freq[num]++ that stores each numbers or elemnt freuency and after
use a auto iterator and comapare freuancy as it.second and return elemnt as it.first;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         unordered_map<int, int> freq;
         for(int num : nums){
            freq[num]++;
         }

         for(auto it : freq){
            if(it.second == 1) {
                return it.first;
            }

         
         }

            return -1;

    }

};


using Xor;

tc = 0(n)
sc - 0(1)

we use xorval as 0 and make xor with every element like
xorval = 0;
then xorval = xorval^num = 0^1^2^1^3^4^3^4 = 2 that is our ans

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xorval = 0;
       for(int num : nums){
        xorval ^= num;
       }
       return xorval;
    }
};


With BinarySeacrh More Optimized but not cleared --

    int low = 0, high = nums.size() - 1;

    while(low < high) {
        int mid = (low + high) / 2;

        if(nums[mid] == nums[mid ^ 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return nums[low];