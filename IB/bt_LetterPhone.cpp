void phone(string &A,int i,string &s,set <string> &ans,vector <char> adj[]){
    if(s.length() == A.length()){
    ans.insert(s);
    return ;    
    }
    
    if(i == A.length()){
        
        return ;
    }
    
    for(int k=0;k<adj[A[i] - '0'].size();k++){
        s.push_back(adj[A[i]-'0'][k]);
        phone(A,i+1,s,ans,adj);
        s.pop_back();
        phone(A,i+1,s,ans,adj);
    }
}

vector<string> Solution::letterCombinations(string A) {
    //adjacency list is array of vector
    vector <char> adj[10];
    adj[0] = {'0'};
    adj[1] = {'1'};
    adj[2] = {'a','b','c'};
    adj[3] = {'d','e','f'};
    adj[4] = {'g','h','i'};
    adj[5] = {'j','k','l'};
    adj[6] = {'m','n','o'};
    adj[7] = {'p','q','r','s'};
    adj[8] = {'t','u','v'};
    adj[9] = {'w','x','y','z'};
    
    string s; // possible string
    set < string > ans;
    
    phone(A,0,s,ans,adj);
    
    vector <string> sol;
    
    for(auto i : ans){
        sol.push_back(i);    
    }
    
    return sol;
}
