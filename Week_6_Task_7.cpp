#include <iostream>
using namespace std;
void swap(int* x, int* y) {
    int temp = *x;
    * x = * y;
    *y = temp;
}
int main()
{
    cout << "Welcome to the swap!" << endl;
    int x = 7; int y = 6;
    cout << " Before the Swap: First number is: " << x<< " and Second number is: " << y << endl;
    swap(&x, &y);
    cout << "After the Swap: First number is: " << x << " and Second number is: " << y << endl;
    return 0;
}

