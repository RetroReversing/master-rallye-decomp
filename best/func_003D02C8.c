extern int func_003CD948(int, int, int, int, int);
extern unsigned func_003FA9B8(int);
int func_003D0110(int arg0, int arg1, int arg2, int arg3) {
    return func_003CD948(arg0, arg1, arg2, arg3, (int)func_003FA9B8(arg3));
}

extern int func_003CDDB0(int, int, int, int);
extern void func_003CE0D0(void **arg0, int arg1, int arg2);
int func_003D0178(void **arg0, int arg1, int arg2) {
    void *temp;
    int off;
    void *ret;

    off = arg1 - (int)*arg0;
    func_003CDDB0(off, arg2 - arg1, 0, 0);
    temp = *arg0;
    ret = (void *)((int)temp + off);
    if ((u32)(*(int *)((u8 *)temp - 8)) >= 2U) {
        func_003CE0D0(arg0, *(int *)((u8 *)temp - 0x10), 1);
        ret = (void *)((int)*arg0 + off);
    }
    *(int *)((u8 *)*arg0 - 4) = 1;
    return (int)ret;
}

extern void func_003CE0D0(void **arg0, int arg1, int arg2);
void *func_003D02C8(void **arg0) {
    void *temp;
    void *var3;

    temp = *arg0;
    var3 = (void *)((int)temp - 0x10);
    if ((u32)(*(int *)((u8 *)temp - 8)) >= 2U) {
        func_003CE0D0(arg0, *(int *)((u8 *)temp - 0x10), 1);
        var3 = (void *)((int)*arg0 - 0x10);
    }
    *(int *)((u8 *)var3 + 0xC) = 1;
    if ((u32)(*(int *)((u8 *)var3 + 8)) >= 2U) {
        func_003CE0D0(arg0, *(int *)((u8 *)*arg0 - 0x10), 1);
    }
    *(int *)((u8 *)*arg0 - 4) = 1;
    return *arg0;
}

void func_003D7B00(void *arg0, int arg1) {
    if (*(int *)((u8 *)arg0 + 0) == 0) {
        arg1 |= 4;
    }
    *(u8 *)((u8 *)arg0 + 0x1A) = (u8)arg1;
}
