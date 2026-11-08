/* func_00227868 */
int func_00227868(int **arg0, int arg1) {
    return (*arg0)[arg1];
}

/* func_002281E8 */
extern int func_00227850(int);
extern void func_00228320(void *);
extern unsigned char D_0047A820[];

void *func_002281E8(void *arg0, int arg1, int arg2, void *arg3) {
    void *p3 = (char *)arg3 + 0x1C;
    void *p0 = (char *)arg0 + 0x1C;

    *(int *)((char *)arg0 + 0x04) = arg1;
    *(void **)((char *)arg0 + 0x10) = arg3;
    *(void **)((char *)arg0 + 0x28) = D_0047A820;
    *(int *)((char *)arg0 + 0x00) = 0;
    *(int *)((char *)arg0 + 0x08) = 0;
    *(int *)((char *)arg0 + 0x0C) = 0;
    *(int *)((char *)arg0 + 0x14) = *(int *)((char *)arg3 + 0x14) + 1;
    *(int *)((char *)arg0 + 0x18) = arg2;
    *(float *)((char *)arg0 + 0x1C) = *(float *)((char *)arg3 + 0x1C);
    *(float *)((char *)p0 + 0x04) = *(float *)((char *)p3 + 0x04);
    *(float *)((char *)p0 + 0x08) = *(float *)((char *)p3 + 0x08);
    func_00227850(*(int *)((char *)arg0 + 0x04));
    func_00228320(arg0);
    return arg0;
}
