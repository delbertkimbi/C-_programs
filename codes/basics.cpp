// C++ program to calculate the factorail of a number using the recursive method.
// Making use of functions too.
#include <iostream>
using namespace std;
int fact (int f){
    if (f==1 || f== 0){
        return 1;
    }
    else {
        return f*fact(f-1);
    }
}
int main() {
    // Write C++ code here
    int num;
    cout << "Enter a number \n";
    cin >> num;
    cout <<num<<"!"<<" is " << fact(num) << endl;
    return 0;
}