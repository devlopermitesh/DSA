#include <iostream>
#include "vector"
using namespace std;

// Merging two halves
void merge(int arr[], int left, int mid, int right) {
    vector<int> temp;
    int low = left, high = mid + 1; // Use low and high for merging
    
    // Merge the two halves into temp
    while (low <= mid && high <= right) {
        if (arr[low] <= arr[high]) {
            temp.push_back(arr[low++]);
        } else {
            temp.push_back(arr[high++]);
        }
    }

    // Copy any remaining elements from the left half
    while (low <= mid) {
        temp.push_back(arr[low++]);
    }

    // Copy any remaining elements from the right half
    while (high <= right) {
        temp.push_back(arr[high++]);
    }

    // Copy the merged elements back into the original array
    for (int i = 0; i < temp.size(); i++) {
        arr[left + i] = temp[i];
    }
}

// MergeSort function
void mergeSort(int arr[], int left, int right) {
    if (left >= right) return; // Base case: single element
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid); // Left half
    mergeSort(arr, mid + 1, right); // Right half
    merge(arr, left, mid, right); // Merge the sorted halves
}

//we sort array first to find maximium and minimium in array
void ArraySort(int array[],int size){
//sort array with mergesort
mergeSort(array,0,size-1);
}
void print(int arr[], int size){
cout<<"Maxium element in array "<<arr[size-1]<<endl;
cout<<"Minimuim element in array "<<arr[0]<<endl;
    
}


int main(){
    int a[]={1,4,5,6,2,6,2};
    int size=sizeof(a)/sizeof(a[0]);
    ArraySort(a,size);
    print(a, size);

return 0;
}
