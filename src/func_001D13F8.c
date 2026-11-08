void func_001D13F8(char *arg0, f32 f0, f32 f1) {
    *(f32 *)(arg0 + 0x44) = f0;
    *(f32 *)(arg0 + 0x48) = f1;
}

extern void *D_002AD408(s32);
extern u32 D_004765B8;

void *func_001D5FB8(void *arg0) {
    void *p = D_002AD408(4);
    *(void **)arg0 = p;
    *(void **)p = &D_004765B8;
    *(void **)((char *)arg0 + 4) = p;
    return arg0;
}
