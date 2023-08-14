#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>& arr, int n, int i)  
{
  // Your Code Here
  int smallest = i;
  int left = 2*i + 1;
  int right = 2*i + 2;
  if(left<n && arr[smallest]>arr[left])
  {
      smallest = left;
  }
  if(right<n && arr[smallest]>arr[right])
  {
      smallest = right;
  }
  
  if(smallest!=i)
  {
      swap(arr[smallest],arr[i]);
      heapify(arr,n,smallest);
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
    