#include<stdlib.h> 
#include<stdio.h>
#include <time.h> 
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm> 
#include <vector> 
#include<bits/stdc++.h>  
#include<string.h> 
#include"sortalgo.h"
#include"sortf.h"
using namespace std;


int main() 
{ 
    
    int arr[1000];
    int arr1[1000],arr2[1000],arr5[1000],arr4[1000],arr3[1000],arr6[1000],arr7[1000],arr8[1000]; 
    int n=500;
    for(int i=0;i<n;i++){
        arr[i]=rand()%500;
        arr1[i]=arr[i];
        arr2[i]=arr[i];
        arr3[i]=arr[i];
        arr4[i]=arr[i];
        arr5[i]=arr[i];
        arr6[i]=arr[i];
        arr7[i]=arr[i];
        arr8[i]=arr[i];
    } 
    sortf(n,arr,arr1,arr2,arr3,arr4,arr5,arr6,arr7,arr8);
    
    return 0; 
} 

