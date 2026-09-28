#include <stdio.h>
#include <stdint.h>

uint8_t SET_BIT(uint8_t reg, uint8_t pos){
  reg |= (1 << pos);
  return reg;
}

int main (){
  uint8_t reg,pos;
scanf ("%hhu %hhu", &reg, &pos);
printf ("%hhu\n", SET_BIT(reg,pos));

return 0;
}
