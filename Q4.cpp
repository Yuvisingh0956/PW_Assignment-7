//Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such that they belong to different arrays and are not at the same index. Here 1<size<101

#include<iostream>
using namespace std;

int array_min(int array[],int size){ //function to get minimum element of array
    int min=array[0];  //variable for minimum of array
    for (int i=0;i<size;i++){
        if (min>array[i]){
            min=array[i];
        }
    }
    return min;
}

int index(int array[],int size,int minimum){ //function to get index value of minimum element of array
    int x;
    for(int idx=0;idx<size;idx++){
        if(array[idx]==minimum){
            x=idx;
            break;
        }
    }
    return x;
}

int second_min(int array[],int size){
    int min=array_min(array,size);

    //to get second minimum element
    int min2=array[3];  //variable for second minimum of array
    for (int i=0;i<size;i++){
        if (array[i]>min && min2>array[i]){
            min2=array[i];
        }
    }
    return min2;
}

int main(){
    int a[]={5,6,10,4,9};
    int b[]={1,2,3,4,5};
    int n=5; //size of both the arrays
    int sum=0;
    
    int c=array_min(a,n); //minimum of array a
    int d=array_min(b,n); //minimum of array b
    int p=index(a,n,c); //index number of minimum of array a
    int q=index(b,n,d); //index number of minimum of array b

    if(p!=q){
        sum=(c+d); //summing the required minimums
        cout<<sum<<endl;
    }
    else {
        int h=second_min(a,n); //second minimum of array b
        int i=second_min(b,n); //second minimum of array b
        int j=min(c+i,d+h); //finding required minimum
        cout<<j<<endl;
    }

    return 0;
}