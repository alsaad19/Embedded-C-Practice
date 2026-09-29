#include <stdio.h>
#include <stdint.h>

void decode_ststus(uint8_t status_reg){
    
    static const char * const status_names[] = {
       "Power On", "Error", "Tx Ready", "Rx Ready", "Overheat", "Undervoltage", "Timeout", "Reserved" 
    };
    
    
    for (uint8_t bit = 0; bit < 8; bit++){
        if ((status_reg >> bit) & 1u) {
            printf ("%s\n", status_names[bit]);
        }
    }
}

int main (void){
    uint8_t reg;
    
    if ((scanf("%hhu", &reg)) == 1){
        decode_ststus(reg);
    }
    return 0;
}
