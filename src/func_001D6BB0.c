/* identical to func_001D6048 (matched), with its names changed by decompdecomp */
extern s32 D_004262C0;
extern s32 D_002AD408(s32);
extern s32 func_001D69C0(s32);

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0) {
        if (v != (s32 *)arg0) {
            ret = *v;
        }
    }
    return ret;
}

s32 func_001D6BB0(void) {
    if (D_004262C0 == 0) {
        D_004262C0 = func_001D69C0(D_002AD408(8));
    }
    return D_004262C0;
}

void func_001D6188(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *v;
    v = *(s32 **)((char *)arg0 + 8);
    ((void (*)(char *))*(s32 *)((char *)v + 0x64))((char *)arg0 + *(s16 *)((char *)v + 0x60));
    v = *(s32 **)((char *)arg0 + 8);
    ((void (*)(char *, s32, s32))*(s32 *)((char *)v + 0x54))((char *)arg0 + *(s16 *)((char *)v + 0x50), arg2, arg3);
}

s32 func_001D61F0(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s16 sp[4];
    s32 *v;
    s32 ret;
    v = *(s32 **)((char *)arg0 + 8);
    ret = ((s32 (*)(char *, void *, s32))*(s32 *)((char *)v + 0x54))((char *)arg0 + *(s16 *)((char *)v + 0x50), sp, 8);
    if (ret == 0) {
        return 0;
    }
    *arg1 = (s32)sp[0];
    *arg2 = (s32)(s16)((u16)sp[1]);
    *arg3 = *(s32 *)&sp[2];
    return 1;
}
