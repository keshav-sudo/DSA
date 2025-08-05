arr = { 0 ,1 , 0 , 2, 0  5, 0  ,5, 5}
out = { 1 , 2,  5, 5, 5, 0 ,0 ,0 ,0}

brute force == 
make a temp == and push_back into the temp vector all non zeros
then put into all in the front of main and  rest are zeros

vector <int> temp;
for(int i = 0 ; i<n ; i++){
    if(arr[i] != 0){
        temp.push_back(arr[i]);
    }
}

int nz = temp.size();

for(int i = 0; i<nz ; i++){
    arr[i] = temp[i];
}

for(int i = nz ; i < n ; i++){
    arr[i] = 0;
}
return arr;


optimal == 

find the first zero where exist
then took the j pointer where ..
and make loop if we find the arr[i] =! 0 then swap them and make j++

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0){
                j = i ;
                break;
            }
        }

        if(j != -1){
             for(int i = j+1 ; i < n ; i++){
            if(nums[i] !=  0){
                swap(nums[i] , nums[j]);
                j++;
            }

        }

        }

       

    }
};