#include "context.h"

extern void sceSifStopDma_2(void);
extern s32 sceSifGetReg_2(u32);
extern s32 sceSifSetDma_2(void *data, s32 count);
extern void sceSifSetReg_2(s32 reg, s32 val);
extern void func_004055A0(void *a0, s32 a1, void *a2, s32 a3, s32 t0, s32 t1, void *t2, s32 t3);

typedef struct DmaPkt {
    u64 unk0;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 unk18[1];
} DmaPkt;

extern DmaPkt D_004A1700;

s32 func_0040ACA8(s8 *arg0, s32 arg1) {
    s32 reg;
    s32 i;
    s8 *p;
    s32 sp[4]; /* for sceSifSetDma args on stack area */

    sceSifStopDma_2();
    reg = sceSifGetReg_2(0x80000000u);

    D_004A1700.unk14 = arg1;

    i = 0;
    if (*arg0 != 0) {
        p = arg0;
        do {
            D_004A1700.unk18[i] = (u8)*p;
            i++;
            p = arg0 + i;
        } while (*p != 0);
    }

    D_004A1700.unkC = 0; /* unk4 in m2c naming? check layout */
    D_004A1700.unk10 = i;
    D_004A1700.unk8 = 0x80000003;
    D_004A1700.unk0 = D_004A1700.unk0 & 0xFFFFFFFF000000FFULL;
    *(u8 *)&D_004A1700.unk0 = 0x68;

    func_004055A0(&D_004A1700, 0x68, &D_004A1700, 0x68, 0x44, i, &D_004A1700, reg);

    sceSifSetReg_2(4, 0x40000);

    sp[0] = (s32)(u32)&D_004A1700; /* placeholder - not quite right */
    if (sceSifSetDma_2((void *)sp, 1) != 0) {
        sceSifSetReg_2(4, 0x10000);
        sceSifSetReg_2(4, 0x20000);
        sceSifSetReg_2(0x80000002, 0);
        sceSifSetReg_2(0x80000000, 0);
        return 1;
    }
    return 0;
}
