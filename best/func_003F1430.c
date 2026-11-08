/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK ExitDeleteThread_2();                       /* extern */
M2C_UNK WaitSema_2(s32);                            /* extern */
M2C_UNK func_00404EA8(M2C_UNK *, M2C_UNK (*)(s32), s32); /* extern */
extern s32 D_0043E710;
extern s32 D_0043E714;
extern s32 D_0043E720;
extern s32 D_0043E730;
extern s32 D_0043E754;
extern s32 D_0043E758;
extern M2C_UNK D_0048B478;
extern M2C_UNK (*D_0049D580)(s32);
extern s32 D_0049D58C;

void func_003F1430(void) {
    s32 temp_2;

loop_1:
    WaitSema_2(D_0043E720);
    temp_2 = D_0043E710;
    if (D_0043E754 == -1) {
        D_0043E730 = 0;
        D_0043E754 = 0;
        D_0043E714 = 0;
        D_0049D58C = 0;
        ExitDeleteThread_2();
    }
    if (temp_2 > 0) {
        func_00404EA8(&D_0048B478, D_0049D580, D_0043E758);
    }
    if ((D_0049D580 != NULL) && (D_0043E758 != 0)) {
        D_0049D580(D_0043E758);
    }
    D_0043E730 = 0;
    goto loop_1;
}
