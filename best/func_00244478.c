s32 func_001D3920(void *arg0) {
    void *v1 = *(void **)((char *)arg0 + 4);
    if (v1 == arg0) return 0;
    if (v1 != arg0) return *(s32 *)v1;
    return 0;
}

extern void func_00234028(void *, void *);
extern void func_0023FF58(void *, void *);

void func_00244478(void *arg0, void *arg1) {
    func_00234028(*(void **)((char *)arg0 + 8), arg1);
    if (*(s32 *)((char *)arg1 + 0x34) != 0) {
        func_0023FF58(*(void **)((char *)arg0 + 4), arg1);
        if (*(s32 *)((char *)arg1 + 0x34) != 0) {
            func_00234028(*(void **)((char *)arg0 + 8), arg1);
        }
    }
}

extern void func_00244788(void);
s32 func_00244DE0(s32, void *, void *, void *, void *, void *, void *);
s32 func_00244F00(s32, void *, void *, void *, void *);

void func_00244C58(s32 arg0, void *arg1, void *arg2) {
    f32 sp20, sp24, sp28;
    f32 sp30, sp34, sp38;
    s32 sp10 = 0, sp14 = 0, sp18 = 0;
    func_00244788();
    sp20 = *(f32 *)((char *)arg1 + 0);
    sp24 = *(f32 *)((char *)arg1 + 4);
    sp28 = *(f32 *)((char *)arg1 + 8);
    sp30 = *(f32 *)((char *)arg2 + 0);
    sp34 = *(f32 *)((char *)arg2 + 4);
    sp38 = *(f32 *)((char *)arg2 + 8);
    func_00244CF8(arg0, &sp20, &sp30, &sp10, &sp14);
}

s32 func_00244CF8(s32 arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    func_00244788();
    if (func_00244DE0(arg0, (void *)((char *)arg0 + 0x34), (void *)((char *)arg0 + 0x48), arg1, arg2, arg3, arg4) != 0) {
        return 1;
    }
    if (func_00244DE0(arg0, (void *)((char *)arg0 + 0x54), (void *)((char *)arg0 + 0x68), arg1, arg2, arg3, arg4) != 0) {
        return 1;
    }
    return func_00244F00(arg0, arg1, arg2, arg3, arg4) != 0;
}
