--- 
in reversal algo for right 

if arr = { 1, 2, 3 , 4, 5, 6, 7} if k =4
then 
out = {4 , 5, 6, 7, 1 ,2 3,}

last 4 1st - {1 ,2 3, 7 , 6 , 5 , 4}
then front mean n-k - {3 , 2, 1 , 7 , 6, 5 ,4}
then whole = {4 , 5 , 6, 7, 1, 2, 3}




 in raversal algo for left 

 if arr = { 1, 2, 3 , 4, 5, 6, 7} if k =4
then 
out = {5 , 6, 7 ,1 ,2  ,3, 4,}

in first -- reverse first k -- {4 , 3,2,1 , 5 , 6, 7}
then n-k reverse --- { 4 , 3, 2, 1 , 7, 6 ,5}
then whole array -- { 5 , 6, 7, 1 ,2 , 3 , 4}


void reverse (arr , start , end){
    while(start < end){
        swap( arr[start] . arr[end])
        start++;  end++;
    }
}
 
