#include <stdio.h>

unsigned char CHECK_BIT (unsigned char reg, int pos){
  if (reg & (1 << pos)){
  return 1;
  }
else {
  return 0;
  }
}

int main (){
  unsigned char reg;
  int pos;

scanf ("%hhu %d", &reg, &pos);
printf ("%d\n", CHECK_BIT(reg,pos));

return 0;
}
