void func_003AD968(void *a0, void *a1);
void func_003AD9C8(void *a0, void *a1, void *a2, void *a3);

void func_003A6B70(void *arg0, void *arg1) {
    char sp[0x60];
    func_003AD968(sp + 0x10, arg0);
    func_003AD9C8(sp, arg0, sp + 0x10, arg1);
}

s32 func_003A6B38(void *arg0) {
    volatile s32 *v1 = (volatile s32 *)arg0;
    s32 a0 = v1[5];
    s32 v0 = a0;
    return v0;
}

u16 *func_003A69F8(u16 *arg0, u16 *arg1) {
    volatile u16 *v1 = (volatile u16 *)arg1;
    u16 v0 = *v1;
    *arg0 = v0;
    return arg0;
}
