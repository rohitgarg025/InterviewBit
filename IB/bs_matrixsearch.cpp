int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n = A.size();
    
    for(int i=0;i<n;i++){
        if(binary_search(A[i].begin(),A[i].end(),B)){
            return 1;
        }
    }
    
    return 0;
}


//Time Complexity is N(logM)