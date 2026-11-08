void func_00200200(void *arg0) {
    if (*(int *)((char *)arg0 + 0x28) != 0) {
        *(float *)((char *)arg0 + 0x24) = 1.0f;
        *(float *)((char *)arg0 + 0x0) = 0.3f;
        *(float *)((char *)arg0 + 0x4) = 0.3f;
        *(float *)((char *)arg0 + 0x1C) = 1.0f;
        *(int *)((char *)arg0 + 0x8) = 0;
        *(int *)((char *)arg0 + 0x18) = 0;
        *(int *)((char *)arg0 + 0xC) = 0;
        *(int *)((char *)arg0 + 0x2C) = 0;
        *(float *)((char *)arg0 + 0x20) = 1.0f;
    }
}

void func_00200200(void *arg0);

void *func_002001C0(void *arg0) {
    *(int *)((char *)arg0 + 0x10) = 0;
    *(int *)((char *)arg0 + 0x14) = 0;
    *(int *)((char *)arg0 + 0x2C) = 0;
    *(int *)((char *)arg0 + 0x28) = 1;
    func_00200200(arg0);
    return arg0;
}
