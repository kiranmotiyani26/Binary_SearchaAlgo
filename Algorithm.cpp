#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
    return -1;

}

int main(){
    int evenArray[8]={1,2,3,4,5,6,7,8};
    int oddArray[5]={9,10,11,12,13};
     cout<<"Enter the key you want to search:\n";
     int key;
     cin>>key;
    int index=BinarySearch(evenArray,8,key);
    
}