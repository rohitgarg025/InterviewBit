int Solution::searchInsert(vector<int> &A, int B) {
    if(binary_search(A.begin(),A.end(),B)){
        return lower_bound(A.begin(),A.end(),B) - A.begin();
    }
    else{
        return upper_bound(A.begin(),A.end(),B) - A.begin();
    }
}


int Solution::searchInsert2(vector<int> &A, int B) {
    int l=0;
    int r=A.size()-1;
    int pos = -1;
    int flag=0;
    
    while(l<=r){
        int m = l + (r-l)/2;
        
        if(A[m] == B){
            return m;
        }
        
        if(A[m] < B){
            l = m+1;
        }
        else{
            r = m-1;
            pos = m;
            flag = 1;
        }
        
    
    }
    
    if(!flag){
        return A.size();
    }
    
    return pos;
}
