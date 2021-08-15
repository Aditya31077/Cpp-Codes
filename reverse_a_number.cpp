#include<iostream>

using namespace std;

int main(){
    int n , num , reverse=0;
    cout<<"Enter the number you want to reverse"<<endl;
    cin>>n;

    while(n!=0){
        num=n%10;
        reverse=reverse*10 +num;
        n=n/10;

    }
    cout<<reverse;
}