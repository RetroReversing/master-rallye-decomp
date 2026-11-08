#include "context.h"

extern void func_003F9698(const char *);
extern void func_00405650(int);
extern int func_00405CC0(void *, int, int);

extern u8 D_0042D600[0x30];
extern u8 D_0042D630[0x30];
extern const char D_004848C8[];
extern u8 D_004A2AE8[0x30];
extern u8 D_004A2B18[0x30];
extern u8 D_004A2B48[0x30];
extern u8 D_004A2B78[0x48];

void func_0030C1B8(void) {
    int i = 0;
    void *var;
    
    do {
        D_004A2AE8[i] = 0;
        D_004A2B18[i] = 0;
        D_004A2B48[i] = 0;
        D_0042D600[i] = 0;
        D_0042D630[i] = 0xFF;
        i++;
    } while (i < 0x30);
    
    func_00405650(0);
    
    var = D_004A2B78;
L1:
    if (func_00405CC0(var, 0x12345, 0) < 0) {
        func_003F9698(D_004848C8);
        while (1) {
        }
    }
    
    {
        int j = 0x2710;
        do {
            j--;
        } while (j != -1);
    }
    
    if (*(int *)(D_004A2B78 + 0x24) == 0) {
        goto L1;
    }
    return;
}
