int largest = INT_MIN;
int slargest = INT_MIN;
int smallest = INT_MAX;
int ssmallest = INT_MAX;


brute force :-

just sort the array and by index can find largest sand smallest
if vector arr then
sort(arr.begin() , arr.end());
return({arr[0] , arr[1] , arr[n] , arr[n-1]});



optimal :- 

comapre based 

(int i = 0 ; i<n ;i++){
    if(arr[i] > largest){
        slargest = largest;
        largest = arr[i];
    }
    if(arr[i] > slargest &&  arr[i] != largest){
        slargest = arr[i];
    }
}


more optimal :- 

use minHeap or maxheap mean priority queue

priority_queue<int> maxheap;
priority_queue<int , vector<int> , greator<int>> minheap;

for(int num : nums) {
    maxheap.push(num);
    minheap.push(num);
}

int maximum = maxheap.top();
maxheap.pop();
int smaximum = maxheap.top();

int minimum = minheap.top();
minheap.pop();
int sminimum = minheap.top();


return({maximum , smaximum , minimum , sminimum});