with brute force=
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0 ; i <= n ; i++ ){
            bool flag = 0;
            for(int j = 0 ; j < n ; j++){
                if( nums[j] == i){
                    flag = 1;
                    break;
                }
            }

            if(flag == 0 ) return i;
        }
        return -1;
    }
};




With Sum approach --



class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;
        for (int i = 0; i < n; i++) {
            actualSum += arr[i];
        }
        return expectedSum - actualSum;
    }
};


with hash --

class Solution {
public:
    int missingNumber(vector<int>& arr){
        int n = arr.size(); 
        unordered_map<int , int> &freq;

        for(num : arr){
            freq[num]++;
        }

        for(int it : freq){
            if(it.second == 0){
                return it.first;
            }
        }
       
    }
};



With Xor Approach

class Solution {
public:
    int missingNumber(vector<int>& arr){
        int n = arr.size(); 
        int mainxor = 0;
        int arrxor = 0;

        for (int i = 0; i <= n; i++) {
            mainxor ^= i;
        }

        for (int i = 0; i < n; i++) {
            arrxor ^= arr[i];
        }

        return mainxor ^ arrxor;
    }
};
