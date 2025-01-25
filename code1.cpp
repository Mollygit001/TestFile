#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseArray(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; ++i) {
        swap(arr[i], arr[n - i - 1]);
    }
}

bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int findMax(const vector<int>& arr) {
    int maxElement = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int findMin(const vector<int>& arr) {
    int minElement = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}

int main() {
    int n; cout<<"Enter number of elements of array: "; cin>> n;
    vector<int> arr(n, 0);

    cout<<"Enter the elements of array: "<<endl;

    for(int i = 0; i< arr.size(); i++){
        cin>>arr[i];
    }

    reverseArray(arr);
    cout << "Reversed Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Is Sorted: " << (isSorted(arr) ? "Yes" : "No") << endl;

    cout << "Maximum Element: " << findMax(arr) << endl;
    cout << "Minimum Element: " << findMin(arr) << endl;

    return 0;
}
