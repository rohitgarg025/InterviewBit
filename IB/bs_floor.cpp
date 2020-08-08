//Q: Find the index of floor of given number

#include <bits/stdc++.h>

using namespace std;

int bs(vector <int> &v, int l, int r, int x){
	int prev = -1;
	if(l<=r){
		int m = l + (r-l)/2;

		if(A[m] == x){
			return m;
		}

		if(A[m] > x){
			return bs(v,l,m-1,x);
		}	
		else{
			prev = m
			return bs(v,m+1,r,x);

		}
	}

	return prev;
}

int main(int argc, char const *argv[])
{
	vector <int> v = {1,2,8,10,11,12,19};
	int x = 5;

	bs()	
	return 0;
}