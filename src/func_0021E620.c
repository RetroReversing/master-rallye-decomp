void func_0016D178(void *arg0, f32 *arg1) {
    f32 v = *(f32 *)((u8 *)arg0 + 0x30);
    *arg1 = v * 2.5f;
}

s32 func_0021D890(void *arg0, void *arg1, void *arg2) {
    f32 *a = (f32 *)((u8 *)arg0 + 4);
    f32 *b = (f32 *)((u8 *)arg1 + 0x40);
    f32 *c = (f32 *)((u8 *)arg2 + 0x40);
    f32 ax = a[0], ay = a[1], az = a[2];
    f32 b1x = b[0], b1y = b[1], b1z = b[2];
    f32 b2x = c[0], b2y = c[1], b2z = c[2];
    f32 dx1 = b1x - ax, dx2 = b2x - ax;
    f32 dy1 = b1y - ay, dy2 = b2y - ay;
    f32 dz1 = b1z - az, dz2 = b2z - az;
    f32 d1 = dx1*dx1; d1 += dy1*dy1; d1 += dz1*dz1;
    f32 d2 = dx2*dx2; d2 += dy2*dy2; d2 += dz2*dz2;
    return (d1 < d2) ? 1 : 0;
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
typedef struct { u8 pad[0x8]; Vtbl6 *vt; } Obj6;

void func_0021E620(void *arg0, u32 arg1, void *arg2) {
    if (arg1 >= 4) {
        if (arg2 != NULL) {
            Obj6 *o = (Obj6 *)arg2;
            Vtbl6 *vt = o->vt;
            vt->fnC((u8 *)o + vt->off8, 3);
        }
    } else {
        void **base = (void **)((u8 *)arg0 + 4);
        void **slot = base + arg1;
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
