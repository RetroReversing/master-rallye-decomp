extern void *D_002AD408(s32);
extern void func_002B6290(void *, s32, void *);
extern void *func_002B62E0(void);
extern void *func_002B7828(void *, void *);
extern char D_0047F608[];
extern void *D_0047F7E8;

void *func_002B7980(void *arg0) {
    void *tmp;
    s32 v4;

    *(s32 *)((u8 *)arg0 + 0x04) = 1;
    *(s32 *)((u8 *)arg0 + 0x0C) = 0;
    *(void **)((u8 *)arg0 + 0x08) = &D_0047F7E8;
    *(void **)((u8 *)arg0 + 0x00) = D_0047F608;
    *(void **)((u8 *)arg0 + 0x10) = func_002B7828(D_002AD408(0x18), arg0);
    tmp = func_002B62E0();
    v4 = *(s32 *)((u8 *)arg0 + 0x04);
    func_002B6290(tmp, v4, arg0);
    return arg0;
}

extern void *func_002B8368(void *);
extern s32 D_004288A0;

s32 func_002B83F0(void) {
    if (D_004288A0 == 0) {
        D_004288A0 = (s32)func_002B8368(D_002AD408(0x18));
    }
    return D_004288A0;
}

s32 func_002B5220(void **arg0, s8 *arg1, u32 arg2, u32 arg3) {
    s8 *p;
    s32 len;
    s32 start;
    s32 i;
    s32 j;
    s8 c;

    p = (s8 *)*arg0;
    len = *(s32 *)(p - 0x10);
    if (len == 0) {
        return -1;
    }
    start = len - 1;
    if (arg2 < (u32)start) {
        start = arg2;
    }
    start++;
    i = start;
    while (i != 0) {
        i--;
        c = p[i];
        *(s8 *)arg0; /* dummy? no */
        {
            s32 found = -1;
            if (arg3 != 0) {
                for (j = 0; j < (s32)arg3; j++) {
                    if (arg1[j] == c) {
                        found = j;
                        break;
                    }
                }
            }
            if (found == -1) {
                continue;
            }
            return i;
        }
    }
    return -1;
}

extern void *func_002B4808(void *);
extern s32 D_00428588;

s32 func_002B4AD8(void) {
    if (D_00428588 == 0) {
        D_00428588 = (s32)func_002B4808(D_002AD408(0x1C));
    }
    return D_00428588;
}
