#include <bits/stdc++.h>
using namespace std;
 
int printPairs(int arr[], int n, int s)
{
    int ans = 0; 
 
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == s)
                cout << "The required indices are : " <<"(" << i << ", " << j
                     << ")" << endl;
                     cout<<endl;
}

int main()
{
    int arr[] = {2,7,11,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    printPairs(arr, n, target);
    return 0;
}