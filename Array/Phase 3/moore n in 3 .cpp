class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        int count1 = 0; int candidate1 = INT_MIN;
        int count2 = 0; int candidate2 = INT_MIN;

        for(int num : nums){
            if(count1 == 0 && candidate2 != num){
                candidate1 = num;
                count1 = 1;
            }

            else if(count2 == 0 && candidate1 != num){
                candidate2 = num;
                count2 = 1;
            }

            else if(candidate1 == num) count1++;
            else if(candidate2 == num) count2++;
            else {
                count1--;
                count2--;
            } 
        }

        count1 = 0;
        count2 = 0;

          vector<int> result;
         
         for(int num : nums){
            if(candidate1 == num)count1++;
            if(candidate2 == num)count2++;
         }

         int mini = (int)(nums.size()/3)+1;
          if(count1 > n / 3) result.push_back(candidate1);
        if(count2 > n / 3) result.push_back(candidate2);

        return result;
        
       

    }

};



