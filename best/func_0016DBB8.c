void *func_0016DBB8(void *arg0, void *arg1) {
    void *p = *(void **)((char *)arg1 + 8);
    f32 f2 = *(f32 *)((char *)p + 0x48);
    f32 f1 = *(f32 *)((char *)p + 0x44);
    f32 f0 = *(f32 *)((char *)p + 0x40);
    *(volatile f32 *)((char *)arg0 + 4) = f1;
    *(volatile f32 *)((char *)arg0 + 8) = f2;
    *(volatile f32 *)((char *)arg0 + 0) = f0;
    volatile f32 sp[3];
    sp[0] = f0;
    sp[1] = f1;
    sp[2] = f2;
    return arg0;
}
