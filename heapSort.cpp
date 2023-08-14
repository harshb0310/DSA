#include<bits/stdc++.h>

using namespace std;

void heapifyAlgo(int arr[],int n, int value)
{

    //O(n);
    int largest = value;
    int leftIndex = 2*value+1;
    int rightIndex = (2*value)+2;
    if(leftIndex<n && arr[largest]<arr[leftIndex])
    {
        largest = leftIndex;
    }
    if(rightIndex<n && arr[largest]<arr[rightIndex])
    {
        largest = rightIndex;
    }

    if(largest!=value)
    {
        swap(arr[value],arr[largest]);
        heapifyAlgo(arr,n,largest);
    }

}

void heapSort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapifyAlgo(arr,n,i);
    }
    for(int i=n-1;i>=1;i--)
    {
        swap(arr[0],arr[i]);
        heapifyAlgo(arr,i,0);
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}


int main()
{
    //heapsort = TC = O(log n)
    int arr[]= {65,89,23,98,91};
    int n=5;
    // heapifyAlgo(arr,5,1)
    // cout<<"Heap before heapSort: "<<endl;
    // printArray(arr,5);
    heapSort(arr,5);
    cout<<"Heap after heap sort "<<endl;
    printArray(arr,5);

}