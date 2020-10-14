#include<iostream>
using namespace std;


void LinearSearch(int arr[], int num)
{
    int temp=-1;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==num){
            cout<<"Element found at index: "<<i<<endl;
            temp=0;
        }
    }
    if(temp==-1){
        cout<<"Element not found"<<endl;
    }
}

int main() {
    int arr[5];
    cout<<"Enter 5 numbers: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter (x) to search"<<endl;
    cin>>num;
    LinearSearch(arr, num);
    
    return 0;
}
