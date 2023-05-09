#include<iostream>

using namespace std;

void printArr(int arr[], int length, char end = '\n') {for(int i=0; i<length;i++) cout<<arr[i]<<end;}


void swap(int &a, int &b){
    if(a == b) return;
    a = a + b;
    b = a - b;
    a = a - b;
}

// int intArrLen(int arr[]){
//     return sizeof(arr) / sizeof(int);
// }