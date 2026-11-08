typedef struct {
    u32 *begin;
    u32 *end;
    u32 *cap;
} Vec;

extern u32 D_0040E618[];

u32 func_00152D28(u32, u32, u32*);
u32 func_00155D80(u32, u32, u32, u32);
u32 func_001C94C0(u32, u32, u32*);
u32 func_001C94F8(u32, u32, u32*, u32);
u32 func_002B1FC0(u32, u32, u32*);
u32 func_002B2028(u32);
u32 func_003D2910(u32);

void func_001C9528(Vec *v, u32 *p, u32 n, u32 *q) {
    u32 sp10;
    u32 sp14;
    u32 *s0, *s1, *s2, *s3;
    u32 t0, t1, t2, t3, t4, t5;
    
    sp14 = n;
    if (n == 0) {
        return;
    }
    s0 = v->end;
    if ((u32)((s32)(v->cap - s0) >> 2) < n) {
        s1 = v->begin;
        t0 = (u32)(s0 - p) >> 2;
        t1 = (u32)n < t0;
        sp10 = t0;
        t2 = t0 + (t1 == 0 ? *(u32*)&sp10 : *(u32*)&sp14);
        t3 = t2 << 2;
        if (t2 == 0) {
            s2 = 0;
            t3 = 0;
        } else if (t3 != 0) {
            t4 = func_002B1FC0(t3, t1, &sp10);
            s2 = t4;
            if (t4 == 0) {
                s2 = func_003D2910(t3);
            }
        } else {
            if (D_0040E618[-1] != 0) {
                s2 = D_0040E618[-1];
                D_0040E618[-1] = *(u32*)s2;
            } else {
                s2 = func_00152D28(0, t1, &D_0040E618[-1]);
            }
        }
        t5 = v->end;
        // move1
        func_00155D80((u32)p, (u32)v->end, func_001C94F8(func_00155D80((u32)v->begin, (u32)p, s2, 0), sp14, q, 0), 0);
        // clear old
        s3 = v->begin;
        if (s3 < (u32*)t5) {
            s1 = s3 + 4;
            while (s1 < (u32*)t5) {
                s1 += 4;
            }
        }
        s1 = v->begin;
        t0 = (u32)((s32)(v->cap - s1) >> 2);
        if (t0 != 0) {
            t0 = t0 << 2;
            if (t0 != 0) {
                func_002B2028((u32)s1);
            } else {
                *(u32*)s1 = D_0040E618[-1];
                D_0040E618[-1] = (u32)s1;
            }
        }
        v->end = (u32*)func_00155D80((u32)p, (u32)v->end, func_001C94F8(func_00155D80((u32)v->begin, (u32)p, s2, 0), sp14, q, 0), 0); // compute again? wait look up target
        // target computes once and stores
        return;
    } else {
        // no grow
    }
}
