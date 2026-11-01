#include <algorithm> 
#include <iostream>
#include <chrono>
#include <random>
#include <ctime>
using namespace std;
/*------STUDENT 1 FUNCTION------*/
//Checks each element in the array to see if it is equal to the key. 
//If it is, it returns the index of that element. If not, it returns -1.
//Counts the number of comparisons made during the search and returns it through the count parameter.
int linearSearch(int size, int key, int &count)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (6 * size + 1) - 3 * size;
    }
    int i = 0;
    //Iterates through the array until it finds the key or reaches the end of the array.
    while (i < size)
    {
        count++;
        if (key == arr[i])
        {
            return i;
        }
        i++;
    }
    return -1;

    /* Code for main?
    int main()
    {
        srand(time(0));
        int checkCount = 0;
        cout << linearSearch(100, 4, checkCount) << endl;
        cout << "Number of comparisons: " << checkCount << endl;
        return 0;
    }
    */
}

/*------STUDENT 2 FUNCTION------*/
int binarySearch()
{

}