void func_00220AF8(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    f32 sp[4];
    f32 t7 = arg0[1] - arg1[1];
    f32 t5 = arg0[0] - arg1[0];
    f32 t6 = arg0[2] - arg1[2];
    f32 n1 = arg2[1];
    f32 n0 = arg2[0];
    f32 n2 = arg2[2];
    f32 d = n0 * t5 + n1 * t7 + n2 * t6;

    sp[0] = t5;
    sp[1] = t7;
    sp[2] = t6;

    {
        f32 p0 = n0 * d;
        arg3[0] = p0;
        arg4[0] = p0 - sp[0];
        arg3[1] = n1 * d;
        arg3[2] = n2 * d;
        arg4[1] = arg3[1] - sp[1];
        arg4[2] = arg3[2] - sp[2];
    }
}

extern s32 func_001D4080(s32, void *);

s32 func_002256D0(void *arg0, void *arg1) {
    s32 *cur = *(s32 **)arg0;
    s32 *end = *(s32 **)((u8 *)arg0 + 4);
    if (cur != end) {
        do {
            if (func_001D4080(*cur, arg1) != 0)
                return 1;
            cur++;
        } while (cur != end);
    }
    return 0;
}

void func_00225888(void *arg0, s32 arg1) {
    s32 *cur = *(s32 **)arg0;
    s32 *end = *(s32 **)((u8 *)arg0 + 4);
    if (cur != end) {
        s32 *obj = *(s32 **)cur;
        do {
            cur++;
            *(s32 *)((u8 *)obj + 0x14) = arg1;
            if (cur == end) break;
            obj = *(s32 **)cur;
        } while (1);
    }
}

extern s32 func_001D4010(void *);
extern void func_003F9698(const char *, ...);
extern char D_004796A8[];
extern char D_004796B0[];
extern char D_00478E78[];

void func_002258C8(void *arg0, void *arg1) {
    func_003F9698(D_004796A8, func_001D4010((u8 *)arg1 + 0x10));
    {
        void **cur = *(void ***)((u8 *)arg1 + 4);
        void **end = *(void ***)((u8 *)arg1 + 8);
        if (cur != end) {
            do {
                func_003F9698(D_004796B0, func_001D4010(*cur));
                cur++;
            } while (cur != end);
        }
    }
    func_003F9698(D_00478E78);
}
