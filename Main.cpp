#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n){
    int t1=0;
    int t3=11;
    for(int i=0;i<=n;i++){
        cout<<t1+t3<<endl;
        int temp=t1;
        t1=t3;
        t3=t1+temp;
}
}

int main(){
    int n;
    n=5;
    fibonacci(n);
}