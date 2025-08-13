arr = [1 , 2 ,3 10 , 1, 1, 1, 10] 
k = 13
[3 , 10] >> [1 , 1, 1, 10] we have to return [1 , 1, 1,10];

Brute >> 
check all subarray 

logic :-
int maxlen = 0;

start a lopp from i = 0 ; and til n and a loop from j = i and j < new
maintain a sum 
if(sum==k) length = j- i +1
update maxlen and frind again 


for(int i =0; i< n; i++){
    int sum =0 ;
    for(int j = i ; j<n;j++){
        sum += arr[j];
        if(sum == k){
            int length = j-i+1;
            if(length >maxlen){
                maxlen = length;
                int restart = i ;
                resend = j;
            }
        }
    }
}

if(restart == -1) return {};
return vector<int>(arr.begin()+restart , arr.begin()+resend);


optimal :=

will use slidin widnow here
start a loop from j and j = 0;  i=0 ;
track a sum and while condition (target < sum) then >>
and track maxlen using if len > maxlen then update 
and update resstart and resend;


for(int i = 0; i<n; i++){
    sum+=arr[i];
    while(sum > k && j <= i){ 
        sum -= arr[j];
        j++;
    }
    if(sum == k){
        int length = i-j+1;
        if(length > maxlen){
            maxlen = length;
            restart = j;
            resend = i;
        }
    }
}

if(restart == -1) return {};
return vector<int>(arr.begin()+resstart , arr.begin()+resend)+1;

optimal also for negatives := 
>>intialize a map for store the prefix sum and also index
int maxlen = -1;
int startindex = -1 , endindex= -1;

mp[0] = -1;

for(int i = 0; i<n ; i++){
    int sum += arr[i];

    if(mp.find(prefixsum -k) != mp.end()){
        int start = mp[prefixsum -k]+1;
        int length = i - mp[prefixsum - k];

        if(length > maxLen) {                
            maxLen = length;
            startIndex = start;
            endIndex = i;
        }
    }
    
    if(mp.find(prefixSum) == mp.end()) mp[prefixSum] = i;
    }


    

