//Name- Komal Yadav
//Roll no.- 2010990390
//Set no. -04
//Q2.

#include<bits/stdc++.h>
using namespace std;

bool isConsecutive(int arr[],int n){
  sort(arr,arr+n);
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]+1){
      return false;
      }
  }
  return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  if(isConsecutive(arr,n)){
    cout<<"The array contains consecutive integers";
  }
  else
    cout<<"The array does not contain consecutive integers as element is repeated";

    return 0;
}
