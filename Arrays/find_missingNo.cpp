//optimal by sum
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,4,5};
int n=5;
int expectedSum=n*(n+1)/2;
int actualSum=0;
for(int i=0;i<n-1;i++){
actualSum+=arr[i];
}
cout<<expectedSum-actualSum<<endl;

return 0;
}

//optimal by xor method

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,4,5};
int n=5;
int xor1=0;
int xor2=0;

for(int i=1;i<=n;i++){
xor1^=i;
}
for(int i=0;i<n-1;i++){
xor2^=arr[i];
}
cout<<(xor1^xor2)<<endl;

return 0;
}
*/