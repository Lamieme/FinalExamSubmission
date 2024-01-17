#include <iostream>

using namespace std;

int main() {
    int size;
    //cout << "Enter size: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++) {
            int sum = 0;
        for(int j = 1; j <= arr[i]; j++) {
            if (arr[i] % j ==0) {
                sum += j;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
