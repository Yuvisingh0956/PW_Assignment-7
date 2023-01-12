//Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. Here 1< size <101

#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5}; //given array
    int n=5; //size of array
    int sum=0,min=0,max=0; 
    min=array[0];
    max=array[n-1];
    for (int i=0;i<n;i++){
        if (min>array[i]){ //minimum of array
            min=array[i];
        }
        if (max<array[i]){ //maximum of array
            max=array[i];
        }
    }
    sum=(max+min); //sum of maximum and minimum integer of the array
    cout<<"The sum of the greatest and the smallest integer present in the array is: "<<sum<<endl;

    return 0;
}