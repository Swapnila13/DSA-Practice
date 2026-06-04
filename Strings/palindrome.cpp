#include<bits/stdc++.h>

using namespace std;
int main(){
string str ="MADAM";

int left =0;
int right=str.length()-1;
while(left<right){
    if(str[left]!=str[right]){
        cout<<"not palindrome";
        return 0;
    }
    else{
        left++;
        right --;
    }
}
cout<<"palindrome";
return 0;
}