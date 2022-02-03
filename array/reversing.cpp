#include<iostream>

using namespace std;

void swap(int &a, int &b){
    if(a == b) return;
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){

    int arr[] = {1,2,4,5,6,7};
    int length = sizeof(arr)/sizeof(int) - 1;

    for(int i = 0; i<=length/2; i++) swap(arr[i], arr[length-i]);

    for(int i = 0; i<=length; i++) cout<<arr[i]<<endl;

    return 0;
}