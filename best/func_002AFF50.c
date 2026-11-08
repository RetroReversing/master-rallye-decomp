/* func_002B0358 */
extern void *D_0047DB18;

void *func_002B0358(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((s8 *)arg0 + 0) = arg1;
    *(s32 *)((s8 *)arg0 + 8) = arg2;
    *(void **)((s8 *)arg0 + 4) = &D_0047DB18;
    return arg0;
}

/* func_002AFF80 */
extern s32 func_003FA760(s32, s32);

s32 func_002AFF80(s32 *arg0, s32 *arg1) {
    s32 result;

    result = 0;
    if (arg0 != arg1) {
        if (func_003FA760(*arg0, *arg1) == 0) {
            result = 1;
        }
    }
    return result;
}

/* func_002AFF50 */
extern void D_002AD390(void *);
extern void *D_0047DB78;

void func_002AFF50(void *arg0, s32 arg1) {
    *(void **)((s8 *)arg0 + 4) = &D_0047DB78;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
