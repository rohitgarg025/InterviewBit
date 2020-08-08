//Jai Shree Ram
 
void sub(vector <int> &A, int i, set <vector <int> > &ans, vector <int> &s){
    //bc
    if(i == A.size()){
        //process subset into ans
        ans.insert(s);
        return ;
    }
    //rc
    
    //include ith element
    s.push_back(A[i]);
    sub(A,i+1,ans,s);
    //include nahi hoga
    s.pop_back();
    sub(A,i+1,ans,s);
    
}
 
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    //A = 1,2,2
    //ans = {{},{1},{1,2},{1,2,2},{2},{2,2}}
    sort(A.begin(),A.end());
    //no duplicate--> set of vector
    set <vector < int > > ans;
    
    //subset s
    vector <int> s;
    
    sub(A,0,ans,s);
    
    vector < vector <int> > sol;
    
    for(auto i : ans){
        sol.push_back(i);
    }
    
    return sol;
}
 