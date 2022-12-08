
#include "solution.h"

#ifdef SOLUTION
  // your solution
  int solution(int *arr, int N) {
    // int res = 0;
    // for (int i = 0; i < N; i++) {
    //   res += arr[i];
    // }
    // return res;
    return ((N+1)*N/2);
  }
#else
  // baseline version
  int solution(int *arr, int N) {
    int res = 0;
    for (int i = 0; i < N; i++) {
      res += arr[i];
    }
    return res;
  }
#endif
