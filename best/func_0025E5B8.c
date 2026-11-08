f32 func_0025E5B8(void *arg0, void *arg1) {
    f32 *v0 = (f32 *)((u8 *)arg0 + 0xC);
    f32 *v1 = (f32 *)((u8 *)arg1 + 0xC);
    f32 dot = v0[0] * v1[0] + v0[1] * v1[1] + v0[2] * v1[2];
    f32 f2 = 0.0f;
    void *p0 = *(void **)((u8 *)arg0 + 0x4C);
    void *p1 = *(void **)((u8 *)arg1 + 0x4C);
    if (p0 == p1) {
        if (*(s32 *)((u8 *)p0 + 0x1C8) != 0) {
            f2 = dot + 0.0f;
        }
    } else if (p0 == *(void **)((u8 *)arg1 + 0x50)) {
        if (*(s32 *)((u8 *)p0 + 0x1C8) != 0) {
            f2 = 0.0f - dot;
        }
    }
    void *p2 = *(void **)((u8 *)arg0 + 0x50);
    if (p2 == p1) {
        if (*(s32 *)((u8 *)p2 + 0x1C8) != 0) {
            f2 = f2 - dot;
        }
        return f2;
    }
    if (p2 == *(void **)((u8 *)arg1 + 0x50)) {
        if (*(s32 *)((u8 *)p2 + 0x1C8) != 0) {
            f2 = f2 + dot;
        }
    }
    return f2;
}
