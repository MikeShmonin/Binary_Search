#include <iostream>

using namespace std;

int binary_search(int* arr, int size, int value) 
{
    int left, right, mid, guess;
    left = 0;
    right = size-1;
    while (left <= right) 
    {
    mid = (left+right)/2;
    guess = arr[mid];

    if (guess == value) {return arr[mid];}

    if (guess > value) {right = mid - 1;}
    else { left = mid + 1; }

    }
    return 0;
}

int main() {
int x, ans=0, arr1[20]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
cout << "Enter x: ";
cin >> x;
ans = binary_search(arr1, 20, x);
if (ans!=0) {cout << "Число " << ans << " найдено!"<< endl;}
else {cout << "Упс число не найдено!" << endl;}
return 0;
}
