#include <stdio.h>
#include <stdint.h>

#define SET_BIT(REG,BIT)   ((REG) |= (1 << BIT))
#define CLEAR_BIT(REG,BIT) ((REG) &= ~(1 << BIT))
#define TOGGLE_BIT(REG,BIT)   ((REG) ^= (1 << BIT))

uint8_t ModifyBit(uint8_t reg){

  SET_BIT(reg, 2);
  SET_BIT(reg, 7);
  CLEAR_BIT(reg,3);
  TOGGLE_BIT(reg,5);

return reg;
}

int main(){
  uint8_t reg;

scanf("%hhu",&reg);
printf("%u\n",ModifyBit(reg));

return 0;
}

