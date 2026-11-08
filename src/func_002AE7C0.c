typedef struct {
    u8 pad0[0x14];
    s32 f14;
    u8 pad18[8];
    s64 f20;
} S7C0;

S7C0 **func_002AD838(void);

S7C0 *func_002AE7C0(void) {
    S7C0 *p = *func_002AD838();
    p->f14 = 1;
    p->f20++;
    return p;
}
