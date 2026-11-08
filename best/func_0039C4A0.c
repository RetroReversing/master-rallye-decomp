extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

s32 func_002AFEB8(s32 arg0, s32 arg1);
s32 *func_0039C6C8(s32 *arg0, s32 *arg1);

s32 *func_0039C740(s32 arg0, s32 arg1) {
    s32 *temp;

    temp = (s32 *)func_002AFEB8(0xC, arg0);
    if (temp != 0) {
        temp = func_0039C6C8(temp, (s32 *)arg1);
    }
    return temp;
}

s32 *func_003A55E8(s32 *arg0, s32 *arg1);

s32 *func_0039C6C8(s32 *arg0, s32 *arg1) {
    func_003A55E8(arg0, arg1);
    *(s32 *)(arg0 + 1) = *(s32 *)(arg1 + 1);
    *(s32 *)((s8 *)arg0 + 8) = *(s32 *)((s8 *)arg1 + 8);
    return arg0;
}

s32 func_0039C430(s32 arg0);
s32 func_0039C468(s8 *arg0, s32 arg1);

s32 func_0039C4A0(s32 arg0) {
    s8 local;
    s32 ret;

    local = 0;
    ret = func_0039C468(&local, func_0039C430(arg0));
    return ret;
}
