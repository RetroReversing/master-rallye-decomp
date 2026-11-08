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

s32 func_0030C630();
s32 func_0030DDD0();
s32 func_0030DE80();
extern s32 D_004292FC;
extern s32 D_004297E8;

void func_002CE930(s32 arg0, s32 arg1, s32 arg2) {
    func_0030C630(0, 0, arg2, 0, D_004292FC, 0, 0, 0);
    func_0030DDD0(0, 0, D_004297E8);
    func_0030DE80(1, 0, 1, 1, 0, arg2, (D_004297E8 * 2) + 0x5010);
}
