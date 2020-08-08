

//Q: Find the index of ceil of given number
//ceil is the number just greater than given number

#include <bits/stdc++.h>

using namespace std;

int bs(vector <int> &v, int l, int r, int x){
	int p =-1;
	while(l<=r){
        int m = l + (r-l)/2;

        if(v[m] == x){
            return m;
        }

        if(v[m] > x){
            p = m;
            r = m-1;
        }
        else{
            l = m+1;

        }
	}
	return p;
}

int main(int argc, char const *argv[])
{
	vector <int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(8);
	v.push_back(10);
	v.push_back(11);
	v.push_back(12);
	v.push_back(19);
	int x = 5;

	cout << bs(v,0,v.size()-1,x) << endl;
	return 0;
}
