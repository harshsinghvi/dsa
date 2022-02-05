#include<iostream>
#include"lib.h"

using namespace std; 

void printMaxAndMin(int arr[], int length){
    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<length; i++){
        if(max <= arr[i]) max = arr[i];
        if(min >= arr[i]) min = arr[i];
    }

    int result[] = {max, min};
    printArr(result, 2);
}

int main(){
    int arr[] = {1,2,3,4,5,6,8,9};
    int length = sizeof(arr) / sizeof(int); 
    // printArr(arr, length);

    printMaxAndMin(arr, length);

    return 0;

}