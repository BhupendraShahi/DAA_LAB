#include <iostream>

using namespace std;

int main() {
    int t,i,j,k;
    bool isFound = false;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int sum = 0;
        for(i=0; i<n-2;i++){
            for(j=i+1; j<n-1; j++){
                sum = arr[i]+arr[j];
                for(k=j+1; k<n; k++){
                    if(arr[k] > sum) break;
                    if(sum == arr[k]){
                        cout << i+1 << ", " << j+1 << ", " << k+1 << endl;
                        isFound = true;
                    }
                }
            }
        }

        if(!isFound){
            cout << "No sequence found." << endl; 
        }
    }
    
}