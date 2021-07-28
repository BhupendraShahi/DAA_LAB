#include<iostream>

using namespace std;


int binarySearch(int arr[], int lower, int upper, int x, int *compare){
    if(upper >= lower){
        int mid = lower + (upper-lower)/2;

        if(arr[mid] == x) {
            (*compare)++;
            return mid;
        }
        else if(arr[mid] > x) {
            (*compare)++;
            return binarySearch(arr, lower, mid-1, x, compare);
        }
        else if(arr[mid] < x) {
            (*compare)++;
            return binarySearch(arr, mid+1, upper, x, compare);
        }
    }

    return -1;
}

int main () {
    int t; 
    cin >> t;

    while(t--) {
        int n, x, comparison = 0;
        cin >> n;

        int arr[n];
        for(int i=0; i<n; i++){  //input array
            cin >> arr[i];
        }

        cin >> x;
        int result = binarySearch(arr, 0, n-1, x, &comparison);
        if(result == -1) {
            cout << "Not present " << comparison << endl; 
        } else{
            cout << "Present " << comparison << endl;
        }
    }
}
