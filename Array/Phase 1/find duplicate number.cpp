int arr[] = {2 ,3 , 4, 5 , 6, 6 ,7};
output is = 6

Brute Force =:
in firt loop traverse array with i elemnt and 
make a flag that is default false if arr[i] == arr[j] then it will true or we can make a saperate count if count>1
 then return arr[i];
for(int i = 0; i<n ; i++){
    int count = 1;
    for(int j = 0; j<n; j++){
        if(arr[i] == arr[j]) count++;
    }
    if(count > 1) return arr[i];
}




Better Using Hashmap:=

in this we will take unordered map and store it frequncy in it and after use a if else statemnet

int unordered_map<int , int> freq;

for( int num : nums){
    freq[num]++;
}

for(each it : freq){
    if(it.second > 1){
        return it.second;
    }
}



using floyd cycle;

in this approach we intialize two pointers first one is slow and scond one is fast
in first round we just step slow with one step and fast with two step while(slow != fast) by this we can find intersection or cycle
and then we will make slow = nums[0] and again while(slow != fast) we just make a step mean single single step with 
each fast and slow then return slow;


int slow = nums[0];
int fast = nums[0];

do{
    slow = nums[slow];
    fast = nums[nums[fast]];
} while(slow != fast){
    slow = nums[slow];
    fast = nums[fast];
}

return slow;

