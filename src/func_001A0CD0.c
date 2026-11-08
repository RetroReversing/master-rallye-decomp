#include "context.h"

/* func_0016D178: known scheduling artifact (missing nop after mtc1 under project compiler) */
void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

/* Prototypes */
extern void *func_001E3820(s32, void *, void *);
extern void func_001A0B38(s32, s32, void *, s32, void *);
extern void func_001D4040(void *, const char *);
extern s32 D_0040E698;
extern char D_004724E0[];
extern char D_004724F0[];
extern void *D_00473290;
extern void *D_004732A8;

void func_001A0A90(s32 arg0, void *arg1) {
    s32 temp_2;
    void *temp_2_2;
    void *var_16;
    s32 var_19;
    s32 var_18;

    temp_2 = func_001E4280();
    temp_2_2 = func_001E3820(temp_2, (void *)((u8 *)arg1 + 0x5C), &D_0040E698);
    var_16 = (void *)((u8 *)arg0 + 0xC);
    if (temp_2_2 != NULL) {
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

void *func_001A0CD0(void *arg0) {
    s32 *var_5;
    s32 var_4;
    char sp[4];

    func_001D4040(sp, D_004724E0);
    *(s32 *)((u8 *)arg0 + 4) = *(s32 *)sp;
    *(s32 *)arg0 = -1;
    var_5 = (s32 *)((u8 *)arg0 + 0x10);
    *(void **)((u8 *)arg0 + 0xC) = &D_00473290;
    var_4 = 3;
    *(void **)((u8 *)arg0 + 8) = &D_004732A8;
    do {
        *var_5 = 0;
        var_4 -= 1;
        var_5++;
    } while (var_4 != -1);
    func_001D4040((u8 *)arg0 + 0x20, D_004724F0);
    return arg0;
}
