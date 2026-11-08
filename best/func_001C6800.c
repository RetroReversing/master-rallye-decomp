s32 func_001C6780(s32, s32);
s32 *func_001C67A0(s32, s32, s32);
s32 *func_001C67D0(s32, s32, s32);

void func_001C6800(void *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 div0 = *(s32 *)arg0;
    s32 q1 = arg1 / div0;
    s32 q2 = arg2 / div0;
    s32 r1 = arg1 - div0 * q1;
    s32 r2 = arg2 - div0 * q2;
    s32 idx = func_001C6780(r1, r2);
    s32 *tbl = func_001C67A0(*(s32 *)((u8 *)arg0 + 8), q1, q2);
    if (*tbl != 0) {
        s32 *tbl2 = func_001C67D0(*(s32 *)((u8 *)arg0 + 8), q1, q2);
        *(u8 *)(*tbl2 + idx) = *arg3;
    }
}

s32 func_001C68B0(void *arg0, s32 arg1, s32 arg2) {
    s32 div0 = *(s32 *)arg0;
    s32 q1 = arg1 / div0;
    s32 q2 = arg2 / div0;
    s32 r1 = arg1 - div0 * q1;
    s32 r2 = arg2 - div0 * q2;
    s32 idx = func_001C6780(r1, r2);
    s32 *tbl = func_001C67A0(*(s32 *)((u8 *)arg0 + 8), q1, q2);
    return *tbl + idx;
}
