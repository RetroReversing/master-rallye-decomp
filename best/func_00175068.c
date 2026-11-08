void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_00175068(void *arg0, void *arg1, f32 arg2) {
    f32 *d = (f32 *)((u8 *)arg0 + 0xD8);
    f32 dot = *(f32 *)((u8 *)arg1 + 0) * d[0]
            + *(f32 *)((u8 *)arg1 + 4) * d[1]
            + *(f32 *)((u8 *)arg1 + 8) * d[2];
    if (dot >= 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x10C) = 0.0f;
    } else {
        *(f32 *)((u8 *)arg0 + 0x10C) = -dot * arg2 * *(f32 *)((u8 *)arg0 + 0xFC) * *(f32 *)((u8 *)arg0 + 0x44);
    }
}

void func_001750D8(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x1C) != 0) {
        void *p = *(void **)((u8 *)arg0 + 0x18);
        void *q = *(void **)((u8 *)p + 0x18);
        *(f32 *)((u8 *)arg0 + 0x144) = *(f32 *)((u8 *)q + 0xC);
    } else {
        *(s32 *)((u8 *)arg0 + 0x144) = 0;
    }
}

void func_001D4040(void *, const char *);
void func_002A1D30(s32, void *, s32, s32);
s32 func_002A2458(void);
extern char D_0044E920[];

void func_0015E8E0(void) {
    s32 sp[8];
    s32 t = func_002A2458();
    func_001D4040(sp, D_0044E920);
    func_002A1D30(t, sp, 0, 1);
}
