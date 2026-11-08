extern void func_001D4040(void *, const char *);
extern int D_00473B50;

void *func_001B1898(void *arg0) {
    int buf[4];
    func_001D4040(buf, "gaImageSpinner");
    *(int *)((char *)arg0 + 0) = -1;
    *(int *)((char *)arg0 + 4) = buf[0];
    *(int *)((char *)arg0 + 8) = (int)&D_00473B50;
    *(int *)((char *)arg0 + 12) = 4;
    *(int *)((char *)arg0 + 16) = 0;
    return arg0;
}
