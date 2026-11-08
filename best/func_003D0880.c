extern void func_003CD948(void *, unsigned int, unsigned int, unsigned int, int);
void func_003D0800(void **arg0, unsigned int arg1, unsigned int arg2) {
    func_003CD948((void *)((unsigned char *)*arg0 - 0x10), 0, 0, arg1, arg2);
}

extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern void *D_00437E18[16];

void func_003D0880(void **arg0, unsigned int arg1) {
    void *v0 = *arg0;
    void *v1 = (void *)((unsigned char *)v0 - 0x10);
    int cnt = *(int *)((unsigned char *)v1 + 8);
    cnt--;
    *(int *)((unsigned char *)v1 + 8) = cnt;
    if (cnt == 0) {
        int end = *(int *)((unsigned char *)v1 + 4);
        if ((unsigned int)(end + 0x10) >= 0x81) {
            func_002B2028(v1);
        } else {
            unsigned int idx = ((unsigned int)(end + 0x17) >> 3) - 1;
            void **bucket = (void **)&D_00437E18[idx];
            *(void **)((unsigned char *)v0 - 0x10) = *bucket;
            *bucket = v1;
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

void func_003D7B00(void *arg0, unsigned int arg1) {
    if (!*(unsigned int *)arg0) {
        arg1 |= 4;
    }
    *(unsigned char *)((unsigned char *)arg0 + 0x1A) = arg1;
}

extern void func_003CDDB0(void *, unsigned int, unsigned int, signed char);
void func_003D0700(signed char arg1) {
    func_003CDDB0(0, 0xFFFFFFFFU, 1, arg1);
}
