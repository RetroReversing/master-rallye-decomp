extern void D_002AD390(s32);

void func_001FD0D8(void *arg0) {
    s32 *p = (s32 *)arg0;
    D_002AD390(p[0]);
    p[2] = 0;
    p[0] = 0;
    p[1] = -1;
}
