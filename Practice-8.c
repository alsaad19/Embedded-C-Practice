#include <stdio.h>
#include <stdint.h>

uint32_t Specific_Bit(uint32_t reg, uint8_t pos, uint8_t len){
  reg |= (((1 << len) -1) << pos);
  return reg;
}

int main (){
  uint32_t reg;
  uint8_t pos, len;

  scanf ("%llu %hhu %hhu", &reg, &pos, &len);
  printf ("%llu\n", Specific_Bit(reg,pos,len));
  return 0;
}
