#include<iostream>
#include<utility>

using namespace std;

pair<int, int> binarySearch(int arr[], int n, int k){
    pair<int, int> answer;
    answer.first = -1;
    answer.second = 0;

    int low = 0;
    int high = n-1;
    

    while(low <= high){

        int mid = low + (high - low)/2;

        if(arr[mid]==k){
            answer.first = k;
            answer.second += 1;
            //key is also present in left side of mid
            int temp = mid;
            while(arr[temp-1] == k && temp-1>=low){
                answer.second +=1;
                temp--;
            }
            //key is present on right side of mid
            temp = mid;
            while(arr[temp+1] == k && temp+1<=high){
                answer.second +=1;
                temp++;
            }
            return answer;

        }else if(k < arr[mid]){
            high = mid -1;
        }
        else if(k > arr[mid]){
            low = mid+1;
        }
    }
    return answer;
}

int main() {
    int t;
    cout << "enter no of test cases: ";
    cin >> t;

    while(t--){
        int n;
        cout << "enter size of array: ";
        cin >> n;

        cout << "enter array elements: " << endl;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        int key;
        cout << "enter key: ";
        cin >> key;

        pair<int, int> result = binarySearch(arr, n, key);
        if(result.first == -1){
            cout << "Key not found" << endl;
        }else{
            cout << result.first << " - " << result.second << endl;
        }
        
    }
}