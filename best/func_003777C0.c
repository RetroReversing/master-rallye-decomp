extern s32 func_00377D58(void *a, void *b, void *c, void *d);

s32 func_00397368(s32 arg0) {
    return arg0 + 8;
}

void func_0037D018(void *arg0) {
    void *temp_6 = *(void **)((char *)arg0 + 0x10);
    int temp_2;
    if (temp_6 != NULL) {
        temp_2 = *(int *)((char *)temp_6 + 0x14) - 1;
        *(int *)((char *)temp_6 + 0x14) = temp_2;
        if (temp_2 == 0) {
            void *temp_2_2 = *(void **)((char *)temp_6 + 0x10);
            int (*cb)(void *, int, void *) = *(int **)((char *)temp_2_2 + 0xC);
            cb((char *)temp_6 + *(short *)((char *)temp_2_2 + 8), 3, temp_6);
        }
        *(void **)((char *)arg0 + 0x10) = NULL;
    }
    *(int *)((char *)arg0 + 8) = 0;
}

s16 func_00377E80(void *arg0) {
    int sp0 = -1;
    void *temp_4 = *(void **)((char *)arg0 + 0);
    int temp_6 = *(int *)((char *)temp_4 + 0x18);
    if (temp_6 != 0) {
        void *temp_6b = (char *)temp_4 + (temp_6 * 0x10);
        int temp_60 = *(int *)((char *)arg0 + 0x60);
        int sp10v = *(short *)((char *)temp_6b + 0xC);
        temp_60 = temp_60 - *(int *)((char *)temp_6b);
        *(int *)((char *)arg0 + 0x60) = temp_60;
        sp0 = sp10v;
        func_00377D58(arg0, &sp10v, temp_6b, arg0);
    }
    return (s16)sp0;
}

s32 func_003777C0(s32 arg0) {
    int sum = 0;
    int i;
    for (i = 0; i < 15; i++) {
        void *p0 = *(void **)((char *)arg0 + 8 + i * 16);
        char *p = (char *)p0;
        while (*p != 0) {
            sum += 1 << *(int *)((char *)p + 4);
            p = *(char **)((char *)p + 8);
        }
    }
    return sum;
}
