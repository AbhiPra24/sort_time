#include <iostream>
using namespace std;
void sortf(int n,int arr[],int arr1[],int arr2[],int arr3[],int arr4[],int arr5[],int arr6[],int arr7[],int arr8[]){
    double start,end;
    start = clock();
    mergeSort(arr, 0, n - 1); 
    end = clock(); 
    cout << "Merge Sort\t: " << (end-start)/CLOCKS_PER_SEC << " sec\n";

     

    start = clock();
    insertionSort(arr1, n); 
    end = clock(); 
    cout << "Insertion Sort\t: " << (end-start)/CLOCKS_PER_SEC << " sec\n"; 
   
    start = clock();
    bubbleSort(arr2, n); 
    end = clock(); 
    cout << "Bubble Sort\t: " << (end-start)/CLOCKS_PER_SEC << " sec\n"; 

    start = clock();
    quickSort(arr3, 0, n-1); 
    end = clock(); 
    cout << "Quick Sort\t: " << (end-start)/CLOCKS_PER_SEC << " sec\n"; 

    start = clock();
    radixsort(arr4, n); 
    end = clock(); 
    cout << "Radix Sort\t: " << (end-start)/CLOCKS_PER_SEC << " sec\n"; 

    start = clock();
    bucketSort(arr5, n); 
    end = clock(); 
    cout << "Bucket Sort\t: " << (end-start)/CLOCKS_PER_SEC << " sec\n"; 

    start = clock();
    heapSort(arr6, n);
    end = clock(); 
    cout << "Heap Sort\t: " << (end-start)/CLOCKS_PER_SEC << " sec\n"; 

    start = clock();
    shellSort(arr7, n);
    end = clock(); 
    cout << "Shell Sort\t: " << (end-start)/CLOCKS_PER_SEC << " sec\n";

  start = clock();
  countingSort(arr8, n); 
  end = clock(); 
  cout << "Counting Sort\t: " << (end-start)/CLOCKS_PER_SEC << " sec\n"; 
    
}

