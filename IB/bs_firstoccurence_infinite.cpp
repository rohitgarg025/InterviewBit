// 0000000000111111111.....
//This infi array is given
//end is not known

int l = 0;
int r = 1;

while(v[end] >= 1){
    l = r;
    r = r*2;
}

//0 0 0 1 1 1 1 1
//first occurence
int p = -1;
while(l<=r){
    int m = l+r/2;

    if(v[m] == 1){
        r = m-1;
        p =m
    }
    if(v[m] > 1){
        r = m-1;
    }
    else{
        l = m+1;
    }
}

