#include<bits/stdc++.h>

using namespace std;
int main(){
string str ="Hello";
int left =0;
int right=str.length()-1;
while(left<right){
    swap(str[left],str[right]);
    left++;
    right--;
}
cout<<str;
return 0;
}