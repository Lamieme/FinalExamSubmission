#include <bits/stdc++.h>

using namespace std;
int size = 0;
int arr[1000006 ];
bool checkPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void findSuperPrimeNumbers(int n){
    for(int i = 2; i <= n; i++) {
        if(checkPrime(i)) {
            int temp = i;
            while(temp > 0) {
                if(!checkPrime(temp))
                    break;
                temp /= 10;
            } if (temp == 0) {
                arr[size] = i;
                size++;
            }
        }
    }
    sort(arr, arr + size);
}

int main() {
    int n;
    cin >> n;
    findSuperPrimeNumbers(n);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
