void func_001FBFB8(void *arg0) {
    ((s32 *)arg0)[7] = 0;       /* 0x1C */
    ((f32 *)arg0)[3] = 1.0f;    /* 0x0C */
    ((s32 *)arg0)[0] = 0;
    ((s32 *)arg0)[1] = 0;
    ((s32 *)arg0)[2] = 0;
    ((s32 *)arg0)[4] = 0;       /* 0x10 */
    ((s32 *)arg0)[5] = 0;       /* 0x14 */
    ((s32 *)arg0)[6] = 0;       /* 0x18 */
}

f32 func_001FBE60(f32 arg0) {
    f32 zero = 0.0f;
    if (arg0 >= zero) {
        s32 i = (s32)arg0;
        f32 t = (f32)i;
        return arg0 - t;
    } else {
        f32 a = -arg0;
        s32 i = (s32)a;
        f32 t = (f32)i;
        return 1.0f - (a - t);
    }
}

extern void func_001FBFE8(void *);

void func_001FBD18(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *end = p + 0x50;
    f32 zero = 0.0f;

    if ((u32)p < (u32)end) {
        do {
            s32 flag;
            func_001FBFE8(p);
            if (*(f32 *)(p + 0x24) > zero) {
                flag = 1;
            } else {
                flag = 0;
            }
            if (flag == 0) {
                func_001FBFE8(p + 0x28);
            }
            p += 0x50;
        } while ((u32)p < (u32)end);
    }
}
