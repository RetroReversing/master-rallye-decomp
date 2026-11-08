extern s64 func_002AE6B8(s64, s64);
extern s32 func_003F9590(void);
extern void func_003F9598(s32);
extern s32 func_003F9E78(s32, s64);
extern s32 func_0040CF38(s64, s64);

typedef struct {
    u32 unk0;
    u32 unk4;
    void *unk8;
} StructD404E0;

extern StructD404E0 D_004404E0;
extern u32 D_004408F8;
extern u32 D_00440910;

s32 func_003F7CF0(s32 arg0, s64 arg1) {
    StructD404E0 *p;
    s64 t1;
    s64 t2;
    s32 t3;
    s32 r;
    s64 tmp;
    
    func_003F9590();
    p = &D_004404E0;
    t1 = (s64)((u32)(p->unk4 & 0xFFFFFFFC) << 0x20) >> 0x20;
    t2 = (s64)(arg1 << 0x20) >> 0x20;
    t2 = t1 - t2;
    t2 = func_0040CF38(t2 + 0xFEF, 0x1000);
    t2 = func_002AE6B8(t2 - 1, 0x1000);
    if (t2 < 0x1000) {
        func_003F9598(arg0);
        return 0;
    }
    if (func_003F9E78(arg0, 0) != (s32)((u32)p + (u32)t1)) {
        func_003F9598(arg0);
        return 0;
    }
    t3 = (s32)((s64)(t2 << 0x20) >> 0x20);
    if (func_003F9E78(arg0, -t3) == 0xFFFFFFFF) {
        r = func_003F9E78(arg0, 0);
        tmp = (s64)r - (s64)p;
        if (tmp >= 0x10) {
            D_00440910 = r - (s32)D_004408F8;
            p->unk4 = (u32)((s64)((tmp | 1) << 0x20) >> 0x20);
        }
        func_003F9598(arg0);
        return 0;
    } else {
        p->unk4 = (u32)((s64)(((t1 - t2) | 1) << 0x20) >> 0x20);
        D_00440910 -= t3;
        func_003F9598(arg0);
        return 1;
    }
}
