//Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5}; //given array
    int n=5; //size of array
    int odd=0; //to keep count of odd integers

    for (int i=0;i<n;i++){
        if (array[i]%2!=0){
            odd+=1;
        }
    }
    int even=(n-odd); //count of even integers
    cout<<"Number of odd integers: "<<odd<<endl;
    cout<<"Number of even integers: "<<even<<endl;

    return 0;
}