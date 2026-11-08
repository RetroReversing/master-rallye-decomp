extern void func_002B6328(void *, int);
extern void func_002B6670(void);
extern int D_0047F208;

void func_002B6528(void *arg0, int arg1) {
    void *v6, *v2;
    *(void **)((char *)arg0 + 8) = &D_0047F208;
    func_002B6670();
    v6 = *(void **)((char *)arg0 + 0x10);
    if (v6) {
        v2 = *(void **)((char *)v6 + 0x10);
        ((void (*)(void *, int))*(void **)((char *)v2 + 0x1C))(
            (char *)v6 + *(short *)((char *)v2 + 0x18), 3);
    }
    func_002B6328(arg0, arg1);
}
