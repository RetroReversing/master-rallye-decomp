void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

extern f32 func_003F3E80(f32);

void func_0022EE08(void *arg0, s32 arg1, void *arg2) {
    f32 max = 0.0f;
    f32 px = *(f32 *)arg0;
    f32 py = *(f32 *)((u8 *)arg0 + 4);
    f32 pz = *(f32 *)((u8 *)arg0 + 8);
    s32 i;

    for (i = 0; i < arg1; i++) {
        f32 dx = *(f32 *)((u8 *)arg2 + 0) - px;
        f32 dy = *(f32 *)((u8 *)arg2 + 4) - py;
        f32 dz = *(f32 *)((u8 *)arg2 + 8) - pz;
        f32 d = dx * dx + dy * dy + dz * dz;
        if (max < d) max = d;
        arg2 = (u8 *)arg2 + 0xC;
    }
    if (max != max) {
        max = func_003F3E80(max);
    }
    *(f32 *)((u8 *)arg0 + 0xC) = max + max;
}

extern void func_00272C58(void *, void *);

void *func_00231718(void *arg0, void *arg1) {
    *(f32 *)((u8 *)arg0 + 0x00) = *(f32 *)((u8 *)arg1 + 0x00);
    *(f32 *)((u8 *)arg0 + 0x04) = *(f32 *)((u8 *)arg1 + 0x04);
    *(f32 *)((u8 *)arg0 + 0x08) = *(f32 *)((u8 *)arg1 + 0x08);
    *(f32 *)((u8 *)arg0 + 0x0C) = *(f32 *)((u8 *)arg1 + 0x0C);
    *(f32 *)((u8 *)arg0 + 0x10) = *(f32 *)((u8 *)arg1 + 0x10);
    *(f32 *)((u8 *)arg0 + 0x14) = *(f32 *)((u8 *)arg1 + 0x14);
    *(f32 *)((u8 *)arg0 + 0x18) = *(f32 *)((u8 *)arg1 + 0x18);
    *(f32 *)((u8 *)arg0 + 0x1C) = *(f32 *)((u8 *)arg1 + 0x1C);
    *(f32 *)((u8 *)arg0 + 0x20) = *(f32 *)((u8 *)arg1 + 0x20);
    *(f32 *)((u8 *)arg0 + 0x24) = *(f32 *)((u8 *)arg1 + 0x24);
    *(f32 *)((u8 *)arg0 + 0x28) = *(f32 *)((u8 *)arg1 + 0x28);
    *(f32 *)((u8 *)arg0 + 0x2C) = *(f32 *)((u8 *)arg1 + 0x2C);
    func_00272C58((u8 *)arg0 + 0x30, (u8 *)arg1 + 0x30);
    *(s32 *)((u8 *)arg0 + 0x38) = *(s32 *)((u8 *)arg1 + 0x38);
    return arg0;
}

extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);

void func_00231928(void *arg0, void *arg1) {
    void *list = *(void **)((u8 *)arg0 + 0x30);
    void *node;

    node = func_002B1FC0(0xC);
    if (node == 0) {
        node = func_003D2910(0xC);
    }
    if ((u8 *)node + 8 != 0) {
        *(void **)((u8 *)node + 8) = arg1;
    }
    *(void **)((u8 *)node + 0) = list;
    *(void **)((u8 *)node + 4) = *(void **)((u8 *)list + 4);
    *(void **)(*(void **)((u8 *)list + 4)) = node;
    *(void **)((u8 *)list + 4) = node;
}
