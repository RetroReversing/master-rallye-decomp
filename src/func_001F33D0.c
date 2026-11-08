extern s32 func_001D2CD8(void *, s32);
extern s32 func_002B1FC0(void *);
extern s32 func_003D2910(s32);
extern void D_002AD408(s32);
extern void *func_001F32E8(s32);

s32 func_001F2398(s32 arg0) {
    s32 *p3 = (s32 *)((char *)arg0 + 0x3C);
    s32 *p4 = (s32 *)((char *)arg0 + 4);
    s32 count = 0;
    while (count < 3) {
        if (*p3 != 0) {
            count++;
            if (*p4 != 0) {
                p4 += 0x14;
                return 1;
            }
        } else {
            p4 += 0x14;
        }
        p3 += 4;
    }
    return 0;
}

void *func_001F3340(void *arg0) {
    void *new_obj;
    D_002AD408(0x34);
    new_obj = func_001F32E8(0x34);
    func_001D2CD8(new_obj, *(s32 **)((char *)arg0 + 0x14));
    *(s32 *)((char *)new_obj + 0x18) = *(s32 *)((char *)arg0 + 0x18);
    *(f32 *)((char *)new_obj + 0x1C) = *(f32 *)((char *)arg0 + 0x1C);
    *(f32 *)((char *)new_obj + 0x1C + 4) = *(f32 *)((char *)*(s32 **)((char *)arg0 + 0x14) + 4);
    *(f32 *)((char *)new_obj + 0x1C + 0x10) = *(f32 *)((char *)arg0 + 0x28) * *(f32 *)((char *)arg0 + 0x28);
    *(f32 *)((char *)new_obj + 0x1C + 8) = *(f32 *)((char *)*(s32 **)((char *)arg0 + 0x14) + 8);
    *(f32 *)((char *)new_obj + 0x1C + 0xC) = *(f32 *)((char *)arg0 + 0x28);
    *(s32 *)((char *)new_obj + 0x30) = *(s32 *)((char *)arg0 + 0x30);
    return new_obj;
}

s32 func_001F33D0(s32 arg0) {
    func_001F3428(arg0, 0);
    return arg0;
}

void *func_001F3958(void *arg0) {
    void *v;
    void **p;
    void *p2;
    v = func_002B1FC0(arg0);
    p = (void **)((char *)arg0 + 0x24);
    *p = v;
    if (v == 0) {
        *p = func_003D2910(0x18);
    }
    *(u8 *)((char *)arg0 + 0x2C) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    p2 = (void *)*p;
    *(s32 *)p2 = 0x18;
    *(s32 *)((char *)p2 + 8) = p2;
    *(s32 *)((char *)p2 + 0xC) = p2;
    return arg0;
}
