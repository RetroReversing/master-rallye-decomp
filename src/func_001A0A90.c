#include "context.h"

extern void *func_001E3820(s32, void *, void *);
extern void func_001A0B38(s32, s32, void *, s32, void *);
extern s32 D_0040E698;

void func_001A0A90(s32 arg0, void *arg1) {
    s32 temp_2;
    void *temp_2_2;
    s32 var_19;
    s32 var_18;
    void *var_16;

    temp_2 = func_001E4280();
    temp_2_2 = func_001E3820(temp_2, (void *)((u8 *)arg1 + 0x5C), &D_0040E698);
    if (temp_2_2 != NULL) {
        var_16 = (void *)((u8 *)arg0 + 0xC);
        var_19 = 0;
        var_18 = 3;
        do {
            func_001A0B38(arg0, temp_2, var_16, *(s32 *)((u8 *)temp_2_2 + 0xC) + var_19, temp_2_2);
            var_16 = (void *)((u8 *)var_16 + 4);
            var_18 -= 1;
            var_19 += 0x54;
        } while (var_18 >= 0);
    }
}
