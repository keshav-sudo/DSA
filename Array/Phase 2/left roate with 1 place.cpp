arr  = {1 , 2 ,3 , 4, 5 , 6}
out =  {2 , 3, 4 ,5 , 6, 1}

mean ou arr[0] == arr[n-1];

brute force : 

make a dummy arr or
 put all temp[i-1] = arr[i] and then temp[n-1] = arr[0];

{
 int temp[n];
 for(int i = 0 ; i < n; i++){
    temp[i-1] = arr[i];
 }
 temp[n-1] = arr[0];
}


better :
not making new array overwrite it

[

    int temp = arr[0];
    for( int i = 0; i < n ; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
]



