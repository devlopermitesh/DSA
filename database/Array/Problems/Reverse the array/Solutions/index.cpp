#include <iostream>
using namespace std;
void reverseArray(int arra[],int size){
//initialize two pointer
int start=0;
int end=size-1;
while(start<end){
int temp=arra[start];
arra[start]=arra[end];
arra[end]=temp;
start++;
end--;
}

}
void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout  << array[i]<< ",";
    }
}
int main(){
    int array[5]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    //void fun to rever a array 
    reverseArray(array,size);
    printArray(array, size);

    return 0;
}