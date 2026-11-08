extern f32 func_003F3E80(f32);

void func_0022EE08(void *arg0, s32 arg1, void *arg2) {
    f32 max = 0.0f;
    f32 px = *(f32 *)arg0;
    f32 py = *(f32 *)((u8 *)arg0 + 4);
    f32 pz = *(f32 *)((u8 *)arg0 + 8);
    f32 r;

    if (arg1 > 0) {
        do {
            f32 dx = *(f32 *)((u8 *)arg2 + 0) - px;
            f32 dy = *(f32 *)((u8 *)arg2 + 4) - py;
            f32 dz = *(f32 *)((u8 *)arg2 + 8) - pz;
            f32 d = dx * dx + dy * dy + dz * dz;
            if (max < d) max = d;
            arg1--;
            arg2 = (u8 *)arg2 + 0xC;
        } while (arg1 != 0);
    }
    /* target: sqrt.s-like op via c1 0xC0004 produces result in f0 from f12? */
    r = max; /* placeholder - actual sqrt */
    if (r != r) {
        r = func_003F3E80(r);
    }
    *(f32 *)((u8 *)arg0 + 0xC) = r + r;
}

extern void func_00272C58(void *, void *);

void *func_00231718(void *arg0, void *arg1) {
    void *a0c = (u8 *)arg0 + 0xC;
    void *a1c = (u8 *)arg1 + 0xC;
    void *a018 = (u8 *)arg0 + 0x18;
    void *a118 = (u8 *)arg1 + 0x18;
    void *a024 = (u8 *)arg0 + 0x24;
    void *a124 = (u8 *)arg1 + 0x24;

    *(f32 *)((u8 *)arg0 + 0x00) = *(f32 *)((u8 *)arg1 + 0x00);
    *(f32 *)((u8 *)arg0 + 0x04) = *(f32 *)((u8 *)arg1 + 0x04);
    *(f32 *)((u8 *)arg0 + 0x08) = *(f32 *)((u8 *)arg1 + 0x08);
    *(f32 *)((u8 *)arg0 + 0x0C) = *(f32 *)((u8 *)arg1 + 0x0C);
    *(f32 *)((u8 *)a0c + 0x04) = *(f32 *)((u8 *)a1c + 0x04);
    *(f32 *)((u8 *)a0c + 0x08) = *(f32 *)((u8 *)a1c + 0x08);
    *(f32 *)((u8 *)arg0 + 0x18) = *(f32 *)((u8 *)arg1 + 0x18);
    *(f32 *)((u8 *)a018 + 0x04) = *(f32 *)((u8 *)a118 + 0x04);
    *(f32 *)((u8 *)a018 + 0x08) = *(f32 *)((u8 *)a118 + 0x08);
    *(f32 *)((u8 *)arg0 + 0x24) = *(f32 *)((u8 *)arg1 + 0x24);
    *(f32 *)((u8 *)a024 + 0x04) = *(f32 *)((u8 *)a124 + 0x04);
    *(f32 *)((u8 *)a024 + 0x08) = *(f32 *)((u8 *)a124 + 0x08);
    func_00272C58((u8 *)arg0 + 0x30, (u8 *)arg1 + 0x30);
    *(s32 *)((u8 *)arg0 + 0x38) = *(s32 *)((u8 *)arg1 + 0x38);
    return arg0;
}
