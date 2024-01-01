#include <iostream>

void rotateArrayLeft(int *, int, int);
void rotateArrayRight(int *, int, int);
int* allocateArraySize(int, int*);

int main() {
  int ARRAY_SIZE;
  std::cout << "Enter array size: ";
  std::cin >> ARRAY_SIZE;
  int arr[ARRAY_SIZE];
  std::cout << "Enter array elements: ";
  for (int i = 0; i < ARRAY_SIZE; i++) {
    std::cin >> arr[i];
  }
  int rotations;
  std::cout << "Enter the number of rotations to left: ";
  std::cin >> rotations;
  rotateArrayLeft(arr, ARRAY_SIZE, rotations);
  for (int i = 0; i < ARRAY_SIZE; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
  std::cout << "Enter the number of rotations to right: ";
  std::cin >> rotations;
  rotateArrayRight(arr, ARRAY_SIZE, rotations);
  for (int i = 0; i < ARRAY_SIZE; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
  return 0;
}

void rotateArrayLeft(int *arr, int arrLen, int rotations) {
  rotations = rotations % arrLen;
  int temp[rotations];

  for (int i = 0; i < rotations; i++) {
    temp[i] = arr[i];
  }
  for (int i = 0; i < arrLen; i++) {
    if (i + rotations >= arrLen) {
      arr[i] = temp[i + rotations - arrLen];
    } else {
      arr[i] = arr[i + rotations];
    }
  }
}

void rotateArrayRight(int *arr, int arrLen, int rotations) {
  rotations = rotations % arrLen;
  int temp[rotations];
  for (int i = arrLen - rotations; i < arrLen; i++) {
    temp[i - arrLen + rotations] = arr[i];
  }
  for (int i = arrLen - 1; i >= 0; i--) {
    if (i - rotations < 0) {
      arr[i] = temp[i];
    } else {
      arr[i] = arr[i - rotations];
    }
  }
}