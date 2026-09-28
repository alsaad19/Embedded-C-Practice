#include <stdio.h>
#include <stdint.h>

uint8_t IsTheBitSet(uint8_t reg, uint8_t pos){

  if (reg & (1 << pos)){
      return 1;
  }
  else {
      return 0;
  }
}

int main(){
  uint8_t reg,pos;
  scanf ("%hhu %hhu", &reg, &pos);
  printf ("%hhu\n", IsTheBitSet(reg,pos));

  return 0;
}
