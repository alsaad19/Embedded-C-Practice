//Keep Only the Highest Set Bit

#include <stdio.h>
#include <stdint.h>

uint16_t Highest_Bit (uint16_t reg){

  if (reg == 0){
    return 0;
  }

  reg |= (reg >> 1);
  reg |= (reg >> 2);
  reg |= (reg >> 4);
  reg |= (reg >> 8);

return (reg >> 1) + 1;
}

int main (){
  uint16_t reg;
  scanf ("%llu", &reg);
  printf ("%llu\n",Highest_Bit(reg));

return 0;
}
