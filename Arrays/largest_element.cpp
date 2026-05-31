//optimal approach
#include<bits/stdc++.h>
using namespace std;
int largest(vector<int>&arr){
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}

int main(){
vector<int>arr={4,2,3,7,7};
cout<<largest(arr)<<endl;
return 0;
}