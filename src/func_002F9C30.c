void func_003D5F80(int arg0, void (*arg1)(void)) {
    arg1();
}

void *func_00376D08(void *a0, int a1, int a2);
void func_002F96D8(void *a0, void *a1);

typedef struct S_func_002F9C30_arg0 {
    unsigned char unk_00[0x3C];
    void *unk_3C;
    unsigned char unk_40[0x3C];
    int unk_7C;
} S_func_002F9C30_arg0;

void func_002F9C30(S_func_002F9C30_arg0 *arg0) {
    void *r;
    do {
        r = func_00376D08(arg0->unk_3C, arg0->unk_7C, 0x78);
        if (r) {
            func_002F96D8(arg0, r);
            arg0->unk_3C = arg0->unk_3C; /* try to force reload? */
        }
    } while (r);
}
