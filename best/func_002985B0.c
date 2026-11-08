extern void *D_002AD408(int, int, unsigned int, int, int);
extern void *func_0026B7C8(void *, int);
extern void *D_0044DCD8;
extern void *D_0047CBF8;
extern unsigned int D_00494B80;

void *func_002985B0(void *arg0) {
    unsigned char *p = (unsigned char *)arg0;
    ((void **)p)[2] = &D_0044DCD8;
    ((int *)p)[1] = 0;
    ((int *)p)[6] = 0;
    ((int *)p)[7] = 0;
    ((int *)p)[8] = 0;
    ((int *)p)[9] = 0;
    ((int *)p)[10] = 0;
    ((int *)p)[4] = 0;
    ((int *)p)[1] = D_00494B80;
    ((int *)p)[0] = -1;
    ((int *)p)[12] = 0x19;
    ((int *)p)[3] = 1;
    ((int *)p)[11] = 0x19;
    ((int *)p)[14] = 0xE;
    ((int *)p)[13] = 0xE;
    ((void **)p)[2] = &D_0047CBF8;
    ((void **)p)[5] = func_0026B7C8(D_002AD408(0x34, 0xE, D_00494B80, 1, 0x19), 0);
    return arg0;
}
