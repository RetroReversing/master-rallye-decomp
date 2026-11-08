extern void D_002AD530(void *);
extern void *D_002AD5A8(int);

void func_001A15F8(void *arg0) {
    char *p = *(char **)((u8 *)arg0 + 4);
    char *q;

    if (p != 0) {
        D_002AD530(p);
    }
    q = (char *)D_002AD5A8(0x13E800);
    *(char **)((u8 *)arg0 + 4) = q;
    q[1] = 0;
    q[0] = 0;
}
