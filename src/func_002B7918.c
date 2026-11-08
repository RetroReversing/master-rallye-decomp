/* identical to func_002B6528 (matched), with its names changed by decompdecomp */
extern void func_002B6328(void *, int);
extern void func_002B7A58(void);
extern int D_0047F7E8;

void func_002B7918(void *arg0, int arg1) {
    void *v6, *v2;
    *(void **)((char *)arg0 + 8) = &D_0047F7E8;
    func_002B7A58();
    v6 = *(void **)((char *)arg0 + 0x10);
    if (v6) {
        v2 = *(void **)((char *)v6 + 0x10);
        ((void (*)(void *, int))*(void **)((char *)v2 + 0x1C))(
            (char *)v6 + *(short *)((char *)v2 + 0x18), 3);
    }
    func_002B6328(arg0, arg1);
}
