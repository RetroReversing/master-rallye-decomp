extern void func_003F9698(void *);
extern void func_002B2028(s32);
extern void D_002AD390(void *);
extern char D_00476090[];

extern void func_001D9080(void *, s32, s32, void *);
extern void func_003F931C(s32, s32, s32);
extern void func_003F93CC(s32, s32, s32);

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0 && v != (s32 *)arg0)
        ret = *v;
    return ret;
}

void *func_001D7048(void *arg0) {
    volatile s32 temp[4];
    *(s32 *)arg0 = 0;
    *(s32 *)((char *)arg0 + 4) = 0;
    *(s32 *)((char *)arg0 + 8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    return arg0;
}

void func_001D7068(void *arg0, s32 arg1) {
    s32 fC = *(s32 *)((char *)arg0 + 0xC);
    s32 var;

    if (fC != 0 && fC != *(s32 *)((char *)arg0 + 4) - *(s32 *)((char *)arg0 + 0))
        func_003F9698(D_00476090);
    var = arg1 & 1;
    if (*(s32 *)((char *)arg0 + 8) != *(s32 *)((char *)arg0 + 0)) {
        func_002B2028(*(s32 *)((char *)arg0 + 0));
        var = arg1 & 1;
    }
    if (var != 0)
        D_002AD390(arg0);
}

void func_001D70E8(void *arg0, s32 arg1, s32 arg2) {
    s32 begin = *(s32 *)((char *)arg0 + 0);
    s32 end = *(s32 *)((char *)arg0 + 4);
    u32 len = (u32)(end - begin);
    u32 need = len + (u32)arg2;
    u8 flag = 0;

    if (need < len) {
        s32 newend = begin + (s32)need;
        func_003F93CC(newend, end, 0);
        *(s32 *)((char *)arg0 + 4) = *(s32 *)((char *)arg0 + 4) - (end - newend);
    } else {
        func_001D9080(arg0, end, (s32)(need - len), &flag);
    }
    func_003F931C(*(s32 *)((char *)arg0 + 0) + (s32)len, arg1, arg2);
}
