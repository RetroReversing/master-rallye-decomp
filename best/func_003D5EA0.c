extern unsigned char D_00488F48[];
extern unsigned char D_00489120[];
extern void D_002AD530(int);
extern void D_002AD390(void *);

void func_003D5EA0(void *arg0, int arg1) {
    unsigned char *v = *(unsigned char **)arg0;
    unsigned char *base = D_00488F48;

    *(unsigned char **)(v + 0x28) = base;
    if (arg1 == 0) {
        unsigned long long tmp[2];
        unsigned long long a = *(unsigned long long *)D_00488F48;
        unsigned short h = *(unsigned short *)(base + 8);
        unsigned long long b = *(unsigned long long *)(base + 8);
        unsigned int vsub = (unsigned int)v - 8;
        unsigned int diff = (unsigned int)arg0 - vsub;
        tmp[0] = a;
        tmp[1] = b;
        *(unsigned short *)((unsigned char *)tmp + 8) = h + (unsigned short)diff;
        *(unsigned char **)(v + 0x28) = (unsigned char *)tmp;
    }
    if (arg1 & 2) {
        unsigned char *vtab = D_00489120;
        int x = *(int *)(v + 0x20);
        *(unsigned char **)(v + 0x28) = vtab;
        if (x != 0) D_002AD530(x);
    }
    if (arg1 & 1) D_002AD390(arg0);
}
