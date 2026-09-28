#include <stdio.h>

unsigned char SET_Bit(unsigned char reg, int pos, int mode){
    
    if (mode == 1){
    reg |= (1 << pos);
    }
    
    else if (mode == 0){
        reg &= ~(1 << pos);
        
    }
    return reg;
}

int main(){
    
    unsigned char reg;
    int pos, mode;
    
    scanf ("%hhu %d %d", &reg, &pos, &mode);
    printf ("%hhu\n", SET_Bit(reg,pos,mode));
    
    return 0;
}