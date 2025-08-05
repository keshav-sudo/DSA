arr = { 1 ,2 , 3, 4 , 1, 1, 1 ,1 , 1}
here 1 comes more than n/2
approach no.. 
brute force-- 

find all the elemnts freucny using count var 

int n = arr.size();
for(int i = 0 ; i<n ; i++){
    int count = 0;
    for(int j = 0 ; j<n ; j++){
        if(arr[i] == ar[j]) count++;
    }

    if(count > n/2) return arr[i];
}


then better approach : 
here we can use hashset

int n = arr.size();
unordered_map<int , int>& freq;
for(int num : nums){
    freq[num]++;
}

for(each it : freq){
    if(it.second > n/2){
        return it.first;
    }
}


and the end moore : majority 

we will make a count = 0 candiddate = -1;

for(int num :arr) {
    if(count == 0){
        candidate = num;
        count = 1;
    }
    else if(num  == candidate) count++;
    else count--
}

for(int num : arr){
    if(num == candidate) count++;

}

if(count > arr.size()/2) return candidate;
else return -1;