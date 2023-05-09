#include<iostream>
#include"lib.h"

using namespace std;

int main() {
    int inputArr[] = {5,6,7,8,9,10,0,1,2,3};
    const int inputK = 2;
    const int length = sizeof(inputArr) / sizeof(int);

    // int max = inputArr[0];
    // int min = inputArr[0];

    for(int k=0; k<inputK; k++){
        for(int i=k; i<length; i++){
            if(inputArr[k] <= inputArr[i]) swap(inputArr[i], inputArr[k]);
            if(inputArr[length - 1 + k] >= inputArr[i]) swap(inputArr[i], inputArr[length - 1 + k]);
        }
    }

    // cout<<inputArr[0]<<inputArr[length -1 ]<<endl;

    // for(int j = 0; j<length; j++) cout<<inputArr[j]<<endl;
    
    cout<<inputArr[0]<<endl;
    cout<<inputArr[1]<<endl;
    cout<<inputArr[2]<<endl;
    cout<<inputArr[3]<<endl;
    cout<<inputArr[length - 1]<<endl;
    // cout<<inputArr[10]<<endl;

    // printArr(inputArr,length);

    cout<<inputArr[inputK]<<endl<<inputArr[length - inputK]<<endl;

    return 0;
}