#include<iostream>
#include<math.h>

using namespace std;

int jumpSearch(int arr[], int n, int x, int *compare) {
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n)-1] < x){
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }

    while (arr[prev] < x){
        prev++;
 
        if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == x)
        return prev;
 
    return -1;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x, compare = 0;
        cin >> n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cin >> x;
        int result = jumpSearch(arr, n, x, &compare);
        if(result == -1) cout << "Not Present " << compare << endl;
        else cout << "Present " << compare << endl;
    }
}