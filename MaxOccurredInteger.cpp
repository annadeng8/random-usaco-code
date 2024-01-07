#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

// Returns the maximum occurred integer.
int MaxOccurredInt(int L[], int R[], int n) {
  // Initialising all  to 0.
  int updated_freq[MAX];
  memset(updated_freq, 0, sizeof updated_freq);

  // 300B exercise
  // Adding 1 at Li index and subtracting 1 at Ri index.
  for (int i = 0; i < n; i++) {
    updated_freq[L[i]]++;
    updated_freq[R[i] + 1]--;
  }
  int max_prefix_sum_index = 0;
  int maxsofar = updated_freq[0];
  // 300B exercise
  // Calculates prefix sum, and the index with maximum prefix sum.
  for (int i = 1; i < MAX; i++) {
    updated_freq[i] += updated_freq[i - 1];
    if (updated_freq[i] > maxsofar) {
      maxsofar = updated_freq[i];
      max_prefix_sum_index = i;
    }
  }
  return max_prefix_sum_index;
}

int main() {
  int L[] = {1, 4, 3, 1};
  int R[] = {10, 8, 5, 4};
  int n = sizeof(L) / sizeof(L[0]);

  cout << MaxOccurredInt(L, R, n) << endl;
  return 0;
}
