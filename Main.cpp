#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n){
    int t1=0;
    int t2=1;
    for(int i=0;i<=n;i++){
        cout<<t1+t2<<endl;
        int temp=a;
        t1=t2;
        t2=t1+temp;
    }
}

int main(){
    int n;
    n=5;
    fibonacci(n);
}