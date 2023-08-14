#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>& arr, int n, int i)  
{
  // Your Code Here
  int largest = i;
  int left = 2*i + 1;
  int right = 2*i + 2;
  if(left<n && arr[largest]<arr[left])
  {
      largest = left;
  }
  if(right<n && arr[largest]<arr[right])
  {
      largest = right;
  }
  
  if(largest!=i)
  {
      swap(arr[largest],arr[i]);
      heapify(arr,n,largest);
  }
}
//Function to build a Heap from array.
void buildHeap(vector<int>& arr, int n)  
{ 
    // Your Code Here
    for(int i=n/2;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    buildHeap(arr,n);
    for(auto i:arr)
        cout<<i<<" ";
    return 0;
}