#include<iostream>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int sizeOfArray, i, counter=0;
        cin >> sizeOfArray;
        int arr[sizeOfArray];
        for(i=0; i<sizeOfArray; i++){ //input array
            cin >> arr[i]; 
        }

        int elementToSearch;
        cin >> elementToSearch;

        for(i=0; i<sizeOfArray; i++) {  // linear search
            if(arr[i] == elementToSearch) {
                cout << "Present " << i+1 << endl;
                counter = 1;
            }
        }
        if(counter == 0){
            cout << "Not present " << sizeOfArray-1 << endl;
        }
    }
}