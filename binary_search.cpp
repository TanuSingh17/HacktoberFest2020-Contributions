#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[], int key, int low, int high){
  while(low<=high){
    int mid=(low+high)/2;
    if(key<a[mid])
       high=mid-1;
    else if(key>a[mid])
       low=mid+1;
    else
      return mid;
  }
  return -1;
}
int main(){
  int n;
  cout<<"Enter the size of the array:";
  cin>>n;
  int a[n];
  cout<<"Enter the elements of the array:";
  for(int i=0; i<n; i++)
     cin>>a[i];
  int key;
  cout<<"Enter the element to be searched:";
  cin>>key;
  int low=0;
  int high=n-1;
  cout<<binary_search(a, key, low, high)<<endl;
}
