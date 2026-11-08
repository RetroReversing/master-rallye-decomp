extern void func_001B2620(void *, void *);
extern float func_001B2900(void *, void *);
extern float func_001B2D60(void *);
extern float func_001B2DF0(void *);
extern float func_001B2E38(void *);

void func_001B2408(void *arg0) {
    unsigned char *s0 = (unsigned char *)arg0;
    float *vbase;
    void *sp[4];
    
    if (*(void **)(s0 + 0xC8) != 0) {
        void *a2 = *(void **)(s0 + 0xC8);
        void *v0p = *(void **)a2;
        short a0off = *(short *)(*(unsigned char **)a2 + 0x10);
        void (*v1f)(void *, void *, void *) = *(void (**)(void *, void *, void *))((unsigned char *)v0p + 0x14);
        v1f((unsigned char *)a2 + a0off, arg0, a2);
    }
    
    *(float *)(s0 + 0x48) = *(float *)(s0 + 0x38);
    *(float *)(s0 + 0x4C) = *(float *)(s0 + 0x3C);
    *(float *)(s0 + 0x50) = *(float *)(s0 + 0x40);
    
    *(float *)(s0 + 0x6C) = *(float *)(s0 + 0x60);
    *(float *)(s0 + 0x70) = *(float *)(s0 + 0x64);
    *(float *)(s0 + 0x84) = *(float *)(s0 + 0x7C);
    *(float *)(s0 + 0x94) = *(float *)(s0 + 0x8C);
    *(float *)(s0 + 0xA0) = *(float *)(s0 + 0x98);
    
    if (*(int *)(s0 + 0xC) != 0 || *(int *)(s0 + 0xCC) != 0) {
        vbase = (float *)(s0 + 0xA4);
        vbase[0] = *(float *)(s0 + 0);
        vbase[1] = *(float *)(s0 + 4);
        vbase[2] = *(float *)(s0 + 8);
    } else {
        func_001B2620(sp, arg0);
        vbase = (float *)(s0 + 0xA4);
        vbase[0] = ((float *)sp)[0];
        vbase[1] = ((float *)sp)[1];
        vbase[2] = ((float *)sp)[2];
    }
    
    if (*(int *)(s0 + 0x1C) != 0 || *(int *)(s0 + 0xCC) != 0) {
        float *v2b = (float *)(s0 + 0xB0);
        float *v1b = (float *)(s0 + 0x10);
        v2b[0] = v1b[0];
        v2b[1] = v1b[1];
        v2b[2] = v1b[2];
    } else {
        func_001B2900(sp, arg0);
        float *v2b = (float *)(s0 + 0xB0);
        v2b[0] = ((float *)sp)[0];
        v2b[1] = ((float *)sp)[1];
        v2b[2] = ((float *)sp)[2];
    }
    
    if (*(int *)(s0 + 0x24) != 0 || *(int *)(s0 + 0xCC) != 0) {
        vbase[1] = *(float *)(s0 + 0x20);
    } else {
        vbase[1] = func_001B2D60(arg0);
    }
    
    if (*(int *)(s0 + 0x2C) != 0 || *(int *)(s0 + 0xCC) != 0) {
        vbase[2] = *(float *)(s0 + 0x28);
    } else {
        vbase[2] = func_001B2DF0(arg0);
    }
    
    if (*(int *)(s0 + 0x34) != 0 || *(int *)(s0 + 0xCC) != 0) {
        vbase[0] = *(float *)(s0 + 0x30);
    } else {
        vbase[0] = func_001B2E38(arg0);
    }
}
