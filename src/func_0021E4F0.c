void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

s32 func_0021D890(void *arg0, void *arg1, void *arg2) {
    f32 ax = *(f32 *)((u8 *)arg0 + 4);
    f32 ay = *(f32 *)((u8 *)arg0 + 8);
    f32 az = *(f32 *)((u8 *)arg0 + 0xC);
    f32 dx1 = *(f32 *)((u8 *)arg1 + 0x40) - ax;
    f32 dy1 = *(f32 *)((u8 *)arg1 + 0x44) - ay;
    f32 dz1 = *(f32 *)((u8 *)arg1 + 0x48) - az;
    f32 dx2 = *(f32 *)((u8 *)arg2 + 0x40) - ax;
    f32 dy2 = *(f32 *)((u8 *)arg2 + 0x44) - ay;
    f32 dz2 = *(f32 *)((u8 *)arg2 + 0x48) - az;
    f32 d1 = dx1 * dx1 + dy1 * dy1 + dz1 * dz1;
    f32 d2 = dx2 * dx2 + dy2 * dy2 + dz2 * dz2;
    if (d1 < d2) return 1;
    return 0;
}

extern void func_001DAD18(s32, void *);
extern void *func_0021F4B0(void);

void func_0021E4F0(u32 *arg0) {
    u32 v = *arg0;
    if (!((v >> 1) & 1)) {
        void *obj;
        *arg0 = v | 2;
        obj = func_0021F4B0();
        func_001DAD18(*(s32 *)((u8 *)obj + 0xC), arg0 + 6);
    }
}

typedef void (*Fn3)(void *, s32);
typedef void (*Fn34)(void *, void *);
typedef struct {
    u8 pad[0x8];
    s16 off8;
    u8 pad2[2];
    Fn3 fnC;
    u8 pad3[0x20];
    s16 off30;
    u8 pad4[2];
    Fn34 fn34;
} Vtbl6;

typedef struct {
    u8 pad[0x8];
    Vtbl6 *vt;
} Obj6;

void func_0021E620(void *arg0, u32 arg1, void *arg2) {
    if (arg1 >= 4) {
        if (arg2 != NULL) {
            Obj6 *o = (Obj6 *)arg2;
            Vtbl6 *vt = o->vt;
            vt->fnC((u8 *)o + vt->off8, 3);
        }
    } else {
        void **slot = (void **)((u8 *)arg0 + 4 + arg1 * 4);
        void *old = *slot;
        if (old != NULL) {
            Obj6 *o = (Obj6 *)old;
            Vtbl6 *vt = o->vt;
            vt->fnC((u8 *)o + vt->off8, 3);
        }
        *slot = arg2;
        if (arg2 != NULL) {
            Obj6 *o = (Obj6 *)arg2;
            Vtbl6 *vt = o->vt;
            vt->fn34((u8 *)o + vt->off30, arg0);
        }
    }
}
