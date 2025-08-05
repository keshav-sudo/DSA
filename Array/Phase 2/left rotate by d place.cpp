
arr = { 1 , 2 ,3 , 4, 5, 6, }
d = 4

output = { 5  ,6  , 1 ,2 ,3 ,4}


brute :-

we use d = d%n;
because if arr = [ 2, 3, 4, 5 ,6 ,7  ,6 ]
n = 7 ; and d = 15; then how 

then 1st rotation will 
{ 1 - 7} no roatation
then { 1 - 7} no roataion 
then 1 rotate we can find it by d%n = 15%7 = 1;


so --
 in brute do one by one relacment --
 mean in first loop we do with d so we can only by d -- we take first element and put into temp so we can put it end;
 do these thing one by one

 for( int i = 0 ; i < d i++){
    int temp = arr[0];
    for(int j = 0 ; j < n-1 ; i++){
        arr[j] = arr[j+1];
    }
    arr[n-1] = temp;
 }
 


 better use extra space -- 
  we will use extra space init -- 
   make a temproary array or vctor and put all the element if we want d elemnt in  left rotation so will
   --- make temp vector first then put arr.begin() , arr.begin()+d;
   --- and shift all the elemnt in front with d loop arr[i-d] = arr[i];
   --- then copy saved element from temp into main array  and put arr[n-d ( these are end of first d elemnt we want to put it to end) + i] = temp [i]



 vector<int> temp(ar.begin() , arr.begin()+d);
 for(int i = 0 ; i < d; i++){
    arr[i] = arr[i+d];
 }

 for(int i = 0 ;  i< n ; i++){
    arr[n-d+i] = temp[i]
 }
 


 .....
 for right rotate
 class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;  // handle cases where k > n
        
        if (k == 0) return; // no need to rotate
        
        // Step 1: Store last k elements
        vector<int> temp(nums.end() - k, nums.end());

        // Step 2: Shift the first n-k elements to the right
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }

        // Step 3: Copy back the temp to the beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};
