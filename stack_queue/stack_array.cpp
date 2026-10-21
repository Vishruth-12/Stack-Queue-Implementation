#include <iostream>
using namespace std;
int main() {
    int stack[5], top = -1;
    stack[++top] = 10; stack[++top] = 20; stack[++top] = 30;
    cout << "Top: " << stack[top] << '\n';
    cout << "Popped: " << stack[top--] << '\n';
    cout << "New top: " << stack[top] << '\n';
}