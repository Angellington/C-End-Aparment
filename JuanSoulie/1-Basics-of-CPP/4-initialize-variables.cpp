#include <iostream>
using namespace std;

int main(){
    int a = 5, b(2), result; // Initial values are 5 and 2 and undertemined respectvely

    a = a + 3;
    result = a - b;
    cout << result;

    // output: 6
    return 0;
}