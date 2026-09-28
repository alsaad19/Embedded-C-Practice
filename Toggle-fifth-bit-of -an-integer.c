#include <stdio.h>
int Toggle_Bit(int N) {
  N ^= (1 << 5);
return N;
}

int main (){
  int N;
scanf ("%d", &N);
printf("%d\n", Toggle_Bit(N));

return 0;
}
