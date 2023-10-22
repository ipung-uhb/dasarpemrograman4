#include <iostream>

using namespace std;

int main()
{
  int arr[2][2][2];

  arr[0][0][0] = 10;
  arr[0][0][1] = 20;
  arr[0][1][0] = 30;
  arr[0][1][1] = 40;
  arr[1][0][0] = 11;
  arr[1][0][1] = 22;
  arr[1][1][0] = 33;
  arr[1][1][1] = 44;

  cout << "Isi variabel arr:" << endl;
  cout << "=================" << endl;
  cout << endl;
  cout << "Element di [0][0][0]: "<< arr[0][0][0] << endl;
  cout << "Element di [0][0][1]: "<< arr[0][0][1] << endl;
  cout << "Element di [0][1][0]: "<< arr[0][1][0] << endl;
  cout << "Element di [0][1][1]: "<< arr[0][1][1] << endl;
  cout << "Element di [1][0][0]: "<< arr[1][0][0] << endl;
  cout << "Element di [1][0][1]: "<< arr[1][0][1] << endl;
  cout << "Element di [1][1][0]: "<< arr[1][1][0] << endl;
  cout << "Element di [1][1][1]: "<< arr[1][1][1] << endl;

  return 0;
}
