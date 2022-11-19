#include <iostream> 
using namespace std;

int main() {
  int A[5]; 
  int i; 
  A[0] = 7;
  A[1] = 3;
  A[2] = 9;
  A[3] = 15;
  A[4] = 12;

  for(i = 0; i < 5; i++) {
    cout << A[i] << " ";
  }

  return 0;
}