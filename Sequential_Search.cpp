// Sequential Search
#include <iostream>
using namespace std;

int main() {
    int array[10] = {2,3,6,77,4,88,22,78,90,100};
    int target;
    bool found = false;

    cout << "Enter a number to search: ";
    cin >> target;

    for(int i = 0; i < 10; i++) {
        if(array[i] == target) {
            cout << "Number found at index " << i << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Number not found!" << endl;
    }

    return 0;
}

/*
Sample Output:
Enter a number to search: 100
Number found at index 9

Enter a number to search: 55
Number not found!
*/
