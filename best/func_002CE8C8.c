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

M2C_UNK func_0030CC90(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_0030D4D0(M2C_UNK);                     /* extern */
M2C_UNK func_0030D9C0(s32, s32, M2C_UNK);           /* extern */
extern s32 D_004292FC;
extern s32 D_004297E8;

void func_002CE8C8(s32 arg0, s32 arg1) {
    D_004292FC = 0xEB3;
    D_004297E8 = 0x14280;
    func_0030CC90(3, &D_004292FC);
    func_0030D9C0(arg1, arg0, 0);
    func_0030D4D0(0);
}
