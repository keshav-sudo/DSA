"Subarray with Given Sum" (Sliding Window – positive integers only)


arr = [1 , 2, 3,  4, 5, 15, 2 ,1 ] k = 19 

so subarray  = [4 , 5, 15]; return subarray 

logic for brute --  
> first start a loop from i and and another start form j = i 
> both are les then  
> reset sum for everty i 
> coutn sun for every i with j mean for start with every index

code:=

for(int i = 0; i< n;i++)[
    int sum = 0;
    for(int j = i; j<n ;j++){
        sum += arr[k];
        if(sum == k) {
            return vector<int>(arr.begin()+i , arr.begin()+j+1);
        }
    }

    return {};
]



brute force := using single loop and compare
>initialize a i = 0 j =0 for j = 0 >> we can find sum 
> i for exclude from start if sum >target

code := 
 

int sum = 0;
int currsum = 0;
for(int j = 0 ; j < n;j++){
    sum +=  arr[j];
    while(sum > target && start <= end){
        sum -= arr[j];
        start++;
    }
    if(sum == target) return true;
}
