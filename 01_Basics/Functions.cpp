#include <iostream>
using namespace std;

// Function Definition
// 'int' return type hai, 'sum' function ka naam hai
int sum(int a, int b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    
    // Function Call
    int result = sum(x, y);
    
    cout << "Sum is: " << result << endl;
    
    return 0;
}