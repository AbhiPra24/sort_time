#include<stdlib.h> 
#include<stdio.h>
#include <time.h> 

void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
 
void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	int L[n1], R[n2]; 

	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 
	i = 0;  
	j = 0; 
	k = l;  
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = l+(r-l)/2; 
		mergeSort(arr, l, m); 
		mergeSort(arr, m+1, r); 

		merge(arr, l, m, r); 
	} 
} 
void printArray(int A[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
} 
int main() 
{ 
	clock_t t,t1,total;
	int arr[10000];
    int arr1[10000]; 
	for(int i=0;i<1000;i++){
		arr[i]=rand()%500;
        arr1[i]=arr[i];
	} 

	//printf("Given array is \n"); 
	int arr_size= sizeof(arr)/sizeof(arr[0]);
//	printArray(arr, arr_size); 
	 
    t = clock();
	mergeSort(arr, 0, arr_size - 1); 
//	printArray(arr, arr_size); 
	t = clock() - t; 
	 double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("%f\n", time_taken);
	//printf("\nSorted array is \n"); 
	
	 
	int n= sizeof(arr1)/sizeof(arr1[0]); 
	 
    t1 = clock();
	insertionSort(arr, n); 
   // printArray(arr1, n); 
    t1= clock() - t1;
    double time_taken1 = ((double)t1)/CLOCKS_PER_SEC; // in seconds 
  
    printf("%f\n", time_taken1);
    total= clock() - total;
     double time_takentotal = ((double)total)/CLOCKS_PER_SEC; // in seconds 
  
   // printf("%f\n", time_takentotal);
	return 0; 
} 

