void *func_003A4BB8(void *arg0) {
    volatile void *v = arg0;
    *(volatile s32 *)v = 0;
    return (void *)v;
}

extern void func_002B8438(void *);
extern char D_00484828[];

void *func_003A4B60(void *arg0) {
    volatile void *s = arg0;
    func_002B8438((void *)s);
    *(char **)((char *)s + 8) = D_00484828;
    return (void *)s;
}

extern f32 func_003AC6C8(void *, void *);

f32 func_003A4B00(void *arg0, void *arg1) {
    volatile void *s0 = arg0;
    volatile void *s1 = arg1;
    f32 f0 = func_003AC6C8((void *)s0, (void *)s1);
    f32 f1 = f0;
    return f1;
}
