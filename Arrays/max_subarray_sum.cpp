#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};

    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];

        maxi = max(maxi, sum);

        if(sum < 0)
        {
            sum = 0;
        }
    }

    cout << maxi;

    return 0;
}