#include <bits/stc++.h>
using namespace std;
// find the largest element in the array
int largestElement(vector<int> &arr, int n) {
    int lar = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > lar){
            lar = arr[i];
        }
      
    }   
      return lar;
}

int main(){
    vector<int> arr;
    cin >> arr;
    int n;
    cin >> n;
    int largest = largestElement(arr, n);
    cout << "The Largest Element is: "<<largest<<endl;
}