extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);

void *func_002CF798(void *arg0) {
    void *n1, *n2, *t1, *t2;
    volatile int tmp[8];
    n1 = func_002B1FC0(0x10);
    if (!n1) n1 = func_003D2910(0x10);
    *(void**)((u8*)arg0 + 0x28) = n1;
    *(void**)n1 = n1;
    t1 = *(void**)((u8*)arg0 + 0x28);
    *(void**)((u8*)t1 + 4) = t1;
    n2 = func_002B1FC0(0x10);
    if (!n2) n2 = func_003D2910(0x10);
    *(void**)((u8*)arg0 + 0x2C) = n2;
    *(void**)n2 = n2;
    t2 = *(void**)((u8*)arg0 + 0x2C);
    *(void**)((u8*)t2 + 4) = t2;
    *(f32*)((u8*)arg0 + 0x18) = 1.0f;
    *(s32*)((u8*)arg0 + 4) = 0;
    *(s32*)((u8*)arg0 + 8) = 0;
    *(s32*)((u8*)arg0 + 0xC) = 0;
    *(s32*)((u8*)arg0 + 0x20) = 0;
    *(s32*)((u8*)arg0 + 0x24) = 0;
    *(f32*)((u8*)arg0 + 0x10) = 1.0f;
    *(f32*)((u8*)arg0 + 0x14) = 1.0f;
    *(s32*)((u8*)arg0 + 0x1C) = 0;
    return arg0;
}
