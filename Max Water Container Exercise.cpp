#include <bits/stdc++.h>
using namespace std;

int MaxWater(int sticks[], int len) {
  // improve this implementation with sliding window
  int max_water = 0;
  int water = 0;
  int pointer1 = 0; int pointer2 = len-1;
  while(pointer1<pointer2) {
    water = min(sticks[pointer1],sticks[pointer2])*(pointer2-pointer1);
    max_water = max(max_water,water);
    if(sticks[pointer1]<sticks[pointer2]) {
      pointer1++;
    }
    else {
      pointer2--;
    }
  }
  return max_water;
}

int main() {
  int sticks_example_a[] = {1, 8, 9, 4, 11, 15, 3, 5};
  int sticks_example_b[] = {1, 5, 4, 3};
  int sticks_example_c[] = {3, 1, 2, 4, 5};

  int len = sizeof(sticks_example_a) / sizeof(sticks_example_a[0]);
  cout << MaxWater(sticks_example_a, len) << endl;  // 32

  len = sizeof(sticks_example_b) / sizeof(sticks_example_b[0]);
  cout << MaxWater(sticks_example_b, len) << endl;  // 6

  len = sizeof(sticks_example_c) / sizeof(sticks_example_c[0]);
  cout << MaxWater(sticks_example_c, len) << endl;  // 12
}
