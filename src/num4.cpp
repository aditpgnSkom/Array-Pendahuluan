#include <iostream> 
using namespace std;

int main() {
  int A[5] = {7, 3, 9, 15, 12};
  int i;

  for(i = 0; i < 5; i++) { 
    if (i > 2)
      cout << A[i] << " ";
  }

  return 0;
}
