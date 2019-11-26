#include <iostream>

using namespace std;

template <typename T>
int findVal(T arr[], int numOfElements, T numToFind)
{
  for (int i = 0; i < numOfElements; i++)
    if (arr[i] == numToFind)
      return i;
  return -1;
}

int main()
{
  int arr[20] = {1, 8, 4, 9, 3, 7, 5, 6, 20, 40};
  int numberOfElements = 10;

  cout << "---------Initial Array Values----------" << endl;
  for (int i = 0; i <= numberOfElements; ++i)
  {
    cout << arr[i] << ", ";
  }
  cout << endl
       << endl;

  int numToFind;
  cout << "Enter a number: ";
  cin >> numToFind;

  int index = findVal(arr, numberOfElements, numToFind);

  if (index == -1)
    cout << numToFind << " was not found in the filled array. Please try again.\n";
  else
    cout << numToFind << " found at index " << index << "\n";
  return 0;
}