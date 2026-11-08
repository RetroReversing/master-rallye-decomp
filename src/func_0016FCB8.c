void func_0016FD38(void *);  /* matched elsewhere */
void func_0016FD78(void *);

void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((char *)arg0 + 0x30) * 2.5f;
}

void func_0016FCB8(void *arg0, int arg1) {
    *(int *)((char *)arg0 + 0x78) = 0;
    *(int *)((char *)arg0 + 0x108) = arg1;
    func_0016FD38(arg0);
    *(int *)((char *)arg0 + 0x100) = *(int *)((char *)arg0 + 0xFC) + 1;
    func_0016FD78(arg0);
}

void func_0016FD78(void *arg0) {
    float temp_f0;
    float temp_f1;
    int temp_2;
    int temp_5;
    char *p = (char *)arg0;

    if (*(int *)(p + 0xF8) == 0) {
        temp_2 = *(int *)(p + 0x100) + 1;
        *(int *)(p + 0x100) = temp_2;
        if (*(int *)(p + 0xFC) < temp_2) {
            temp_5 = *(int *)(p + 0x108);
            *(int *)(p + 0xF8) = 1;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 1;
            *(int *)(p + 0x80) = temp_5;
            if (temp_5 == 1) {
                temp_f1 = *(float *)(p + 0x40);
                *(float *)(p + 0x18) = temp_f1;
                *(float *)(p + 0x1C) = 1.0f / temp_f1;
            } else {
                temp_f0 = *(float *)(p + 0x40) + (*(float *)(p + 0x3C) / *(float *)(*(int *)(p + 0x64) + (temp_5 * 4)));
                *(float *)(p + 0x18) = temp_f0;
                *(float *)(p + 0x1C) = 1.0f / temp_f0;
            }
            *(float *)(p + 0x24) = *(float *)(p + 0x28) * *(float *)(p + 0x18);
        }
    }
}

void *func_00168378(void *);  /* local override attempt */
extern void func_0015ACE0(float, float, float);

float func_0016A4D8(void *arg0, float f12, float f13) {
    void *p;
    float f21, f22, f0;
    float af13 = f13 < 0.0f ? -f13 : f13;

    p = func_00168378(arg0);
    f21 = *(float *)((char *)p + 0x5C);
    p = func_00168378(arg0);
    f22 = *(float *)((char *)p + 0x60);
    p = func_00168378(arg0);
    f0 = *(float *)((char *)p + 0x64);

    if ((f21 < af13) && (f22 < f12)) {
        func_0015ACE0(f12 * f0, 0.0f, 1.0f);
        return 0.0f; /* not quite - see asm */
    }
    return 0.0f;
}
