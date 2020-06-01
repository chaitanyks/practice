#include<bits/stdc++.h>
using namespace std;

void fab(int n){
    int a=0;
    int b=1;
    for(int i=0;i<=n;i++){
        cout<<a+b<<endl;
        int temp=a;
        a=b;
        b=b+temp;
    }
}

int main(){
    int n;
    n=5;
    fab(n);
}