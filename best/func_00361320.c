extern s32 D_0043C3B0[];
extern s32 D_004864E0;

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void *func_00362D68(void *arg0) {
    *(s32 *)((char *)arg0 + 0x10) = 0x3E8;
    *(s32 *)arg0 = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0x3E8;
    *(s32 *)((char *)arg0 + 0xC) = 0x3E8;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    return arg0;
}

void *func_00361320(void *arg0) {
    *(u32 *)arg0 = 0xFFFFFFFFu;
    *(u32 *)((char *)arg0 + 0x4) = 0xFFFFFFFFu;
    *(s32 *)((char *)arg0 + 0x8) = -1;
    *(s32 *)((char *)arg0 + 0xC) = -1;
    *(s32 *)((char *)arg0 + 0x10) = -1;
    *(void **)((char *)arg0 + 0x14) = 0;
    *(void **)((char *)arg0 + 0x18) = 0;
    *(void **)((char *)arg0 + 0x1C) = 0;
    *(u32 *)((char *)arg0 + 0x24) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    *(u32 *)((char *)arg0 + 0x2C) = (u32)&D_004864E0;
    *(u32 *)((char *)arg0 + 0x70) = 0;
    *(u32 *)((char *)arg0 + 0x74) = 0;
    *(u32 *)((char *)arg0 + 0x78) = 0;
    return arg0;
}

s32 func_0034D858(void *arg0, void *arg1) {
    if (arg1 == NULL) return 0;
    void *end = *(void **)((char *)arg1 + 0x4);
    void *p = *(void **)arg1;
    f32 best = 0.0f;
    f32 f2 = *(f32 *)((char *)arg0 + 0x18);
    if (p != end) {
        f32 f0 = *(f32 *)((char *)p + 0x18);
        do {
            if (best < f0) best = f0;
            p = (char *)p + 0x24;
            if (p == end) break;
            f0 = *(f32 *)((char *)p + 0x18);
        } while (1);
    }
    if (f2 < best) return 1;
    return 0;
}
