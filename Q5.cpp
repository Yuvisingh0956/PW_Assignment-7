//Q5 - Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

#include <iostream>
using namespace std;

int max_array(int array[],int size){ //function to find maximum value of the array
    int max=array[0];
    for(int i=0;i<size;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    return max;
}

int main(){
    int arr[]={8,6,4,2,3,5,0,1};
    int n=(sizeof (arr))/(sizeof (arr[0]));
    int sum1=0,sum2=0;
    for (int i=1;i<=n;i++){
        sum1+=i; //total sum of numbers from [0,n]
    }
    for (int i=0;i<n;i++){
        sum2+=arr[i]; //sum of elements of the given array
    }
    int number=sum1-sum2; //to get the missing number
    cout<<"The missing number in the array is: "<<number<<endl;

    return 0;
}