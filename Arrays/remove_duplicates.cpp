//optimal using 2 pointers for sorted array 

#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(vector<int>&arr){
int i=0;
for(int j=0;j<arr.size();j++){
    if(arr[j]!=arr[i]){
        arr[i+1]=arr[j];
        i++;
    }
}
return i+1;
}

int main(){
vector<int>arr={1,1,2,2,3,3,3};
int k=removeDuplicate(arr);
cout<<"Unique Elements:";
for(int i=0;i<k;i++){ 
    cout<<arr[i]<<" ";
}
return 0;
}