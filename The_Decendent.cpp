#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
    int n; // The number of mountains in the range.
    cout << "Enter The Number Of Times you want to run: ";
    cin >> n; cin.ignore();
    // game loop
    while (n--) {

        int arr[8];
        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cout << "Enter The Height Of Mountain " << i << ": ";
            cin >> mountain_h; cin.ignore();
            arr[i] = mountain_h;
        }
        int high = 0;
        int index = -1;
        for (int i = 0; i < 8; i++) {
            if (arr[i]>high){
                high = arr[i];
                index = i;
            }
        }       
        cout << "The highest mountain is at index " << index << endl; // The index of the mountain to fire on.
    }
}