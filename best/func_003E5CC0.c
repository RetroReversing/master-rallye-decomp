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

s32 func_003E1708();
s32 func_003E4F40();
s32 func_003E4F70();
s32 func_003E5438();

void func_003E5CC0(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;

    temp_2 = func_003E5438((void *)1);
    M2C_FIELD(arg0, s32 *, 0x840) = temp_2;
    if (temp_2 != 0) {
        func_003E4F70(arg0);
        func_003E4F40(arg0, 0x50000000);
        func_003E4F70(arg0);
    }
    temp_2_2 = func_003E5438(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x844) = temp_2_2;
    if (temp_2_2 != 0) {
        func_003E4F70(arg0);
        func_003E4F40(arg0, 0x58000000);
        func_003E4F70(arg0);
    }
    if (func_003E5438(arg0, 1) != 0) {
        func_003E1708(arg0, "load_chroma_intra_quantizer_matrix == 1");
    }
    if (func_003E5438(arg0, 1) != 0) {
        func_003E1708(arg0, "load_chroma_non_intra_quantizer_matrix == 1");
    }
}
