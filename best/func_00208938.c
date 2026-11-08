extern void func_00207140(void *, s32);

void func_00208B18(void *arg0) {
    void *vt;
    vt = *(void **)((char *)arg0 + 0x10);
    (*(void (**)(void *))((char *)vt + 0x1C))((char *)arg0 + *(s16 *)((char *)vt + 0x18));
}

void func_00208938(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 < arg1) {
        func_00207140(arg0, arg2);
    } else {
        func_00207140(arg0, arg1);
    }
}
