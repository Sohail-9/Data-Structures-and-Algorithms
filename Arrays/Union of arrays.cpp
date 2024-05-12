#include <bits/stdc++.h>
using namespace std;
 
// Function to return the union of two arrays
vector<int> Unionarray(int arr1[], int arr2[], int n, int m)
{
    set<int> s;
    // Remove the duplicates from arr1[]
    for (int i = 0; i < n; i++) {
        s.insert(arr1[i]);
    }
 
    // Remove duplicates from arr2[]
    for (int i = 0; i < m; i++) {
        s.insert(arr2[i]);
    }
 
    // Loading set to vector
    vector<int> vec(s.begin(), s.end());
 
    return vec;
}