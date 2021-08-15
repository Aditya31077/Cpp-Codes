#include<iostream>

using namespace std;


int fact(int a){
    int factorial=1;
    for(int i=1;i<=a;i++){
        factorial*=i;
    }
    return factorial;

}

int main(){

    int n,r;
    cin>>n>>r;

    int answer;
    answer=fact(n)/(fact(r)*fact(n-r));

    cout<<answer;

}