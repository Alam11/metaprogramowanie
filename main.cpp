#include "pi.cpp"
#include "fibo.cpp"
#include "bubbleSort.cpp"
#include "factorial.cpp"
#include "newton.cpp"
#include "NWD.cpp"
#include <assert.h>

bool isRising(int tab[], int n)
{
  bool rising = true;
  for (int i = 1; i < n; i++){
    if (rising) {
      rising = tab[i - 1] <= tab[i];
    }
  }
  return rising;
}

int main() {

  int a[7] = {10,0,5,0,2,4,1};
  bubble_sort<7>(a);
  assert(isRising(a, 7));


  assert(fibo<0>::val == 1);
  assert(fibo<1>::val == 1);
  assert(fibo<2>::val == 2);
  assert(fibo<5>::val == 8);

  assert(factorial<5>::val == 120);
  assert(factorial<0>::val == 1);
  assert(factorial<1>::val == 1);

  assert(pi<5>::val < 3.15);
  assert(pi<5>::val > 3.14);

  assert((euklides<24,12>::val == euklides<12,48>::val));
  assert((euklides<17,19>::val == 1));
  assert((euklides<8,4>::val == 4));

  assert((newton<1,1>::val == 1));
  assert((newton<7,2>::val == 21));
  assert((newton<7,2>::val == newton<7,5>::val));

  return 0;
}