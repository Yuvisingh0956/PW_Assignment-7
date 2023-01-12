//Q6 - Given an integer array containing n elements. Find the element in the array for which all the elements to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.

#include <iostream>
using namespace std;

//Finding index of array element
int find_index(int arr[],int n,int size){
    int index;
    for (int i=0; i<size; i++){
        if(arr[i]==n){
            index=i;
        }
    }
    return index;
}

//array for storing left side elements of particular array element
bool left_array(int array[],int n,int size){
    bool result=true;
    int a=find_index(array,n,size);
    for (int i=0;i<a;i++){
        if (array[i]>n){
            return false;
        }
    }
}

//array for storing right side elements of particular array element
bool right_array(int array[],int n,int size){
    bool result=false;
    int a=find_index(array,n,size);
    for (int i=(a+1);i<size;i++){
        if (array[i]<n){
            return false;
        }
    }
}

//MAIN function
int main(){
    int array[]={1,6,5,7,8,10,9};
    int size=(sizeof (array))/(sizeof (array[0])); //size of array
    int ans=0; //to store index of required element
    for(int i=0;i<size;i++){
        if(left_array(array,array[i],size) && right_array(array,array[i],size)){
            ans=i;  //storing index of required element
            break;  //breaking the loop after getting the first such number
        }
        else{
            ans=-1; //if no such element there then return -1
        }
    }
    if(ans != -1){
        cout<<array[ans]<<endl;  //printing the required number with the help of it's index number
    }
    else{
        cout<<ans<<endl;  //condition for printing -1
    }
    return 0;
}