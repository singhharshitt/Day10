#include <iostream>
#include <string>
using namespace std;
int FindMax(int arr[], int size){
    int max=arr[0];
    for(int i=0; i<size; i++){
        if(max<arr[i]){
            max=arr[i];
        }
        
    }
    return max;
}

int main() {
    int size;
    cout<<"Enter the  size: ";
    cin>>size;
    cout<<"Enter the Array Elements:";
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int result= FindMax(arr, size);
    cout<<"Enter max element of the array: "<<result<<endl;
    return 0;
}
