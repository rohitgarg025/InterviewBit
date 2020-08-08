void combsum(vector<int> &A, int B, int i, int sum, set < vector <int> > &ans, vector <int> &comb){
    
    //base case
    if(sum == B){
        ans.insert(comb);
        return ;
    }
    else if(sum > B || i == A.size()){
        return ;
    }
    else{
        //no rep
        //include ith element
        comb.push_back(A[i]);
        combsum(A,B,i+1,sum+A[i],ans,comb);
        //dont include ith element
        comb.pop_back();
        combsum(A,B,i+1,sum,ans,comb);
        
    }
    
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // A = 1,2,3,4,5
    // B = target sum
    
    //sort
    sort(A.begin(),A.end());
    vector <int> comb;
    set < vector <int> > ans;
    
    //generate set of comb vector
    combsum(A,B,0,0,ans,comb);
    
    vector < vector <int> > sol;
    
    for(auto i : ans){
        sol.push_back(i);
    }
    
    return sol;
    
}
