#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,0,2,0,3,0,4,4};
int n=sizeof(arr)/sizeof(arr[0]);
int i=0;
for(int j=0;j<n;j++){
    if(arr[j]!=0){
        swap(arr[i],arr[j]);
        i++;
}
}
for(int j=0;j<n;j++){
    cout<<arr[j]<<" "; 

}

return 0;
}