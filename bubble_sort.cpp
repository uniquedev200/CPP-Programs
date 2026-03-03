#include <iostream>

//Bubble Sort Algorithm using for loops

using namespace std;
void bubbleSort(int array[],int size);
int main(){
    int array[10] ={1,3,5,4,7,8,10,6,9,2};
    int size = sizeof(array)/sizeof(array[0]);
    bubbleSort(array,size);
    cout<<"Sorted Array: ";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}

void bubbleSort(int array[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(array[j]>array[j+1]){
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}   