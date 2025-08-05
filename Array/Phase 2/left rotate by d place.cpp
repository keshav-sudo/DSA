
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