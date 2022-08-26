//Name- Komal Yadav
//Roll No.- 2010990390
//Set No.- 04
//Q1.

#include<iostream>
#include<set>
using namespace std;

int main(){
	int minVal=-1;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	set<int> s;
    for(int i=n-1;i>=0;i--){
        if(s.find(arr[i])!=s.end()){
            minVal=i;
        }
        else{
            s.insert(arr[i]);
        }
    }
    if(minVal!=-1)
    cout<<"The minimum index of the repeating element is "<<minVal<<endl;
  else
    cout<<"Invalid Input";
    
    return 0;

	}

