/* func_0016D178 - correct C, known scheduling artifact under 2.95.2 */
void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

/* func_00227868 */
int func_00227868(void *arg0, int arg1) {
    int *base = *(int **)arg0;
    return base[arg1];
}

/* func_002278A0 */
extern int func_00227850(void *);
extern int func_00227868(void *, int);
extern int func_00227880(void *, int);
extern int func_00229A48(int, int);

int func_002278A0(void *arg0) {
    int i;
    int count;

    count = func_00227850(arg0);
    for (i = 0; i < count; i++) {
        int a = func_00227868(arg0, i);
        int b = func_00227880(arg0, i);
        if (func_00229A48(a, b) == 0)
            return 0;
    }
    return 1;
}

/* func_002281E8 */
extern int func_00227850(int);
extern void func_00228320(void *);
extern unsigned char D_0047A820[];

void *func_002281E8(void *arg0, int arg1, int arg2, void *arg3) {
    unsigned char *a = (unsigned char *)arg0;
    unsigned char *b = (unsigned char *)arg3;

    *(int *)(a + 0x04) = arg1;
    *(void **)(a + 0x10) = arg3;
    *(void **)(a + 0x28) = D_0047A820;
    *(int *)(a + 0x00) = 0;
    *(int *)(a + 0x08) = 0;
    *(int *)(a + 0x0C) = 0;
    *(int *)(a + 0x18) = arg2;
    *(int *)(a + 0x14) = *(int *)(b + 0x14) + 1;
    *(float *)(a + 0x1C) = *(float *)(b + 0x1C);
    *(float *)(a + 0x20) = *(float *)(b + 0x20);
    *(float *)(a + 0x24) = *(float *)(b + 0x24);
    func_00227850(*(int *)(a + 0x04));
    func_00228320(arg0);
    return arg0;
}
