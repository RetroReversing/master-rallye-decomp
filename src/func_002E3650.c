extern void func_003F94D0(void *, s32, s32);
extern void *D_004815E8;

s32 func_002D2E00(s32 a0, s32 a1, s32 a2) {
    s32 v = a1;
    if (a0 >= a1) v = a0; /* movz pattern: max(a0,a1) */
    if (a2 < v) v = a2;
    return v;
}

void *func_002C2740(void *arg0) {
    s32 *p = (s32 *)arg0;

    p[0] = (s32)&D_004815E8;
    p[7] = 0;  /* 0x1C */
    p[17] = 0; /* 0x44 = 0x1C + 0x28 */
    p[8] = 0;  /* 0x20 */
    p[9] = 0;  /* 0x24 */
    p[10] = 0; /* 0x28 */
    p[11] = 0; /* 0x2C */
    p[12] = 0; /* 0x30 */
    p[13] = 0; /* 0x34 */
    p[14] = 0; /* 0x38 */
    p[15] = 0; /* 0x3C */
    p[16] = 0; /* 0x40 */
    p[1] = 0;  /* 0x04 */
    p[2] = 0;  /* 0x08 */
    p[3] = 0;  /* 0x0C */
    p[5] = 0;  /* 0x14 */
    p[24] = 0; /* 0x60 */
    p[25] = 0; /* 0x64 */
    p[26] = 0; /* 0x68 */
    p[27] = 0; /* 0x6C */
    p[28] = 0; /* 0x70 */
    func_003F94D0((char *)arg0 + 0x78, 0, 0x48);
    p[6] = 0;  /* 0x18 */
    p[4] = 0;  /* 0x10 */
    return arg0;
}

s32 func_002E3630(void *a0, void *a1) {
    void *p = *(void **)((char *)a1 + 0x14);
    if (p != NULL) return *(s32 *)((char *)p + 4);
    return 0;
}

s32 func_002E3650(void *a0, void *a1) {
    void *p = *(void **)((char *)a1 + 0x14);
    if (p != NULL) return *(s32 *)((char *)p + 8);
    return 0;
}
