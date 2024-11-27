#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
/*
FUNCTION OBJECTS(FUNCTOR):function wrapped in a class so that it is
available like an object
*/
{
    int arr[] = {0, 1, 2, 3, 4, 5};
    sort(arr, arr + 6, greater<int>());
    // we don't need to understand rn how "sort" works 
    /*
     Suppose we want to sort this array in ascending order.
     So we’ll include a header file <algorithm>
     and write the syntax of the sort object
     syntax: sort(address of first element, address of last element);
     */
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
