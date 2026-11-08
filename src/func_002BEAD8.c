/* func_003F0B30 - known pure-C regalloc blocker ($v0 vs $t0) */
extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

/* func_002BEC58 */
extern void func_002BEEF0(void);

void *func_002BEC58(void *arg0) {
    ((s32 *)arg0)[1] = 0;
    ((s32 *)arg0)[0] = -1;
    func_002BEEF0();
    return arg0;
}

/* func_002BEAD8 */
extern s32 D_00428DA0[];
extern void func_002BE8C0(void *, s32, void *, s32, s32, s32, s32);

void func_002BEAD8(void *arg0, s32 arg1, s32 arg2) {
    D_00428DA0[4] = arg1;  /* +0x10 */
    D_00428DA0[5] = arg2;  /* +0x14 */
    func_002BE8C0(arg0, 0x80000001, D_00428DA0, 0x18, 0, 0, 0);
}

/* func_002BEAA0 */
extern s32 D_00428D98;
extern void func_002BE960(s32);

void func_002BEAA0(void) {
    register s32 v = D_00428D98;
    if (v != 0) {
        func_002BE960(v);
        D_00428D98 = 0;
    }
}
