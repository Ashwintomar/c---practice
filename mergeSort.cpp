#include <iostream>
using namespace std;
void mrg(int arr[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];
  int i, j, k;
  i = 0;
  j = 0;
  k = p;
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}
void mrgsrt(int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    mrgsrt(arr, l, m);
    mrgsrt(arr, m + 1, r);
    mrg(arr, l, m, r);
  }
}
void printArray(int arr[], int size) {

}
int main() {
  int arr[] = {95,96,82,25,64,38,55};
  cout << "array before merge sort : \n";

  for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
  cout << arr[i] << " ";
  cout << endl;

  mrgsrt(arr, 0, (sizeof(arr) / sizeof(arr[0])) - 1);
  cout << "Sorted array after merge sort : \n";

  for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
  cout << arr[i] << " ";
  cout << endl;

  
  return 0;
}