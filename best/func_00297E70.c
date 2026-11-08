extern void func_001D4040(void *, const char *);
extern char D_0047BB78[];
extern void *D_0047C878;

void *func_00297E70(void *arg0) {
    char sp[0x30];
    func_001D4040(sp, D_0047BB78);
    ((void **)arg0)[1] = *(void **)sp;
    *(int *)arg0 = -1;
    ((void **)arg0)[2] = &D_0047C878;
    *(int *)((char *)arg0 + 0xC) = 0;
    *(float *)((char *)arg0 + 0x10) = 1.0f;
    *(float *)((char *)arg0 + 0x14) = 1.0f;
    *(float *)((char *)arg0 + 0x18) = 1.0f;
    *(float *)((char *)arg0 + 0x1C) = 1.0f;
    *(float *)((char *)arg0 + 0x20) = 1.0f;
    *(float *)((char *)arg0 + 0x24) = 1.0f;
    *(float *)((char *)arg0 + 0x28) = 1.0f;
    *(int *)((char *)arg0 + 0x30) = 0;
    *(int *)((char *)arg0 + 0x34) = 0x3C;
    *(int *)((char *)arg0 + 0x38) = 0;
    *(float *)((char *)arg0 + 0x40) = 1.0f;
    *(float *)((char *)arg0 + 0x44) = 1.0f;
    *(float *)((char *)arg0 + 0x48) = 1.0f;
    *(int *)((char *)arg0 + 0x4C) = 0;
    *(int *)((char *)arg0 + 0x50) = 0;
    *(int *)((char *)arg0 + 0x54) = 0;
    *(int *)((char *)arg0 + 0x58) = 0;
    *(int *)((char *)arg0 + 0x5C) = 0;
    *(int *)((char *)arg0 + 0x60) = 0;
    return arg0;
}
