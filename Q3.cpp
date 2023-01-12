//Q3 - Given an integer array and its size, reverse the array and print it . Here 1<size<101

#include <iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5};
    int n=5;
    int new_array[n];
    for (int i=0;i<n;i++){
        new_array[i]=array[(n-i-1)];
    }
    for (int ele:new_array){
        cout<<ele<<" ";
    }

    return 0;
}