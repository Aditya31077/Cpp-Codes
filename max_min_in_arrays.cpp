#include<iostream>
#include<climits>

using namespace std;

int main(){

    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int maxno=INT_MIN;
    int minno=INT_MAX;

    for(int i=0;i<n;i++){
        if(array[i]>maxno){
            maxno=array[i];
        }
        //The above 3 lines could be written as  ..........  maxno=max(maxno,array[i]).....where..........max is a built in functions
        if(array[i]<minno){
            minno=array[i];
        }
    }

    

}