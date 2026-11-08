/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0, tried by autopilot */
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

s32 func_002BD4E8();
s32 func_002BDB28();
s32 func_002CD128();
s32 func_002CD170();
s32 func_002CF8B0();
s32 func_002D04D0();
s32 func_003ECE40();
s32 func_003ECE50();
extern s32 D_0043C070;
extern char D_0048A668[];
extern char D_0048A698[];

void func_003ED008(void) {
    s32 temp_16;

    if (D_0043C070 == 0) {
        temp_16 = func_003ECE40(1);
        if (func_002CF8B0(func_002D04D0()) != 0) {
            func_002CD170(func_002CD128(&D_0048A698));
            func_002CD170(func_002CD128());
            func_003ECE50(&D_0048A668);
            D_0043C070 = 1;
        } else {
            func_003ECE50(&D_0048A698);
        }
        func_003ECE40(temp_16);
    }
    func_002BD4E8(func_002BDB28());
}
