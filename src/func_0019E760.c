extern s32 func_00194D58(s32, s32);
extern s32 func_00195B58(s32, s32);
extern s32 func_00196028(void);
extern void func_001D4040(void *, char *);

extern char D_00471280[];
extern char D_00472018[];
extern void *D_004738E0;

s32 func_0013BE18(void) {
    s32 i;
    s32 ok;
    s32 ret;

    ok = 1;
    i = 0;
    do {
        if (func_00194D58(func_00196028(), i) == 0) {
            ok = 0;
        }
        i++;
    } while (i < 0x6D);

    ret = 0;
    if (ok == 0) {
        ret = 1;
    } else if (func_00195B58(func_00196028(), 0) != 0) {
        ret = 1;
    } else if (func_00195B58(func_00196028(), 6) != 0) {
        ret = 1;
    }
    return ret;
}

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void *func_0019CD28(void *arg0) {
    s32 tmp[4];
    s32 *p;
    s32 n;
    s32 v;

    func_001D4040(tmp, D_00472018);
    v = tmp[0];
    *(s32 *)((u8 *)arg0 + 0x00) = -1;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(void **)((u8 *)arg0 + 0x08) = D_004738E0;
    *(s32 *)((u8 *)arg0 + 0x14) = 1;
    *(s32 *)((u8 *)arg0 + 0x0C) = 1;
    *(s32 *)((u8 *)arg0 + 0x10) = 1;
    *(s32 *)((u8 *)arg0 + 0x04) = v;
    func_001D4040((u8 *)arg0 + 0x1C, D_00471280);
    p = (s32 *)((u8 *)arg0 + 0x20);
    n = 3;
    do {
        *p = 0;
        n--;
        p++;
    } while (n != -1);
    return arg0;
}

void func_0019E760(void) {
    volatile char pad[0x58];
    (void)pad;
}
