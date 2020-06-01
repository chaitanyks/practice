#include<bits/stdc++.h>
using namespace std;

void fabonachi(int n){
    int c=0;
    int b=1;
    for(int i=0;i<=n;i++){
        cout<<c+b<<endl;
        int temp=c;
        c=b;
        b=b+temp;
    }
}

int main(){
    int n;
    n=5;
    fab(n);
}