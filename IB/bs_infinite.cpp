infinite array || binary_search

start = 0;
end = 1;

if(A[end] > x){
    end = end*2;
    start = end;
}

binary_search(v,start,end,x)
