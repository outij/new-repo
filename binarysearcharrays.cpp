#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key);
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    cout<<"enter array elements= ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key= "<<endl;
    cin>>key;
    if(binarySearch(arr,n,key)==-1)
    cout<<"Key not found"<<endl;
    else
    cout<<"Key found at index= "<<binarySearch(arr,n,key)<<endl;
    return 0;
}
int binarySearch(int arr[],int n,int key)
{
    int i,left,right;
    left=0;
    right=n-1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]==key)
        return mid;
        if(key<arr[mid])
        right=mid-1;
        else
        left=mid+1;
    }
    return -1;
}