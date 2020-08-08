


//Q: Find the index of next letter of given letter
//ceil is the number just greater than given number

#include <bits/stdc++.h>

using namespace std;

int bs(vector <char> &v, int l, int r, int x){

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
	vector <char> v;
	v.push_back('a');
	v.push_back('b');
	v.push_back('d');
	v.push_back('e');
	v.push_back('g');
	v.push_back('r');
	v.push_back('z');
	char x = 'c';

	cout << bs(v,0,v.size()-1,x) << endl;
	return 0;
}
