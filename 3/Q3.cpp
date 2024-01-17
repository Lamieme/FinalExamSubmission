#include <iostream>

using namespace std;

string encodeString(string str) {
    int count = 1;
    string result ="";
    for(int i = 0; i < str.size(); i++) {
        if(str[i] != str[i + 1] || i == str.size() - 1) {
            result += str[i];
            result += to_string(count);
            count = 1;
        } else {
            count++;
        }
    }
    return result;
}
int main() {
    string str;
    cin >> str;
    cout << encodeString(str);
    return 0;
}
