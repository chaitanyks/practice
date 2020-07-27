#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n){
    int x=1,y=0,temp;
    for(int i=0;i<=n;i++){
        cout<<x+y<<endl;
        temp=x;
        x=y;
        y+=temp;
}
}

int main(){
    int n;
    n=50;
    fibonacci(n+1+5);
}