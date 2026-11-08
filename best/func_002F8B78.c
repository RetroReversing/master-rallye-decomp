extern int func_002AD350(void *arg0);
extern void func_003D4820(void *arg0, int arg1);

void func_003D5FC0(void *arg0) {
    func_003D4820(arg0, func_002AD350(arg0));
}

extern void func_00376658(void *dst, int arg1, int size);

void func_002F8BE8(void *arg0, int *arg1) {
    int *table = *(int **)arg0;
    int base = *(int *)((char *)arg0 + 0x24);
    int idx = *arg1;
    func_00376658((char *)base + table[idx] * 0x12C, base, 0x12C);
}

void *func_002F8BC0(void *arg0, int *arg1) {
    int *table = *(int **)arg0;
    int base = *(int *)((char *)arg0 + 0x24);
    int idx = *arg1;
    return (void *)((char *)base + table[idx] * 0x12C);
}

extern void func_00374BB8(int a0, int a1, int a2, int a3, void *a4, int a5);

void func_002F8B78(void *arg0, int arg1, int arg2, int arg3, int arg4) {
    int *table = *(int **)arg0;
    int base = *(int *)((char *)arg0 + 0x24);
    int *entry = (int *)((char *)base + table[arg1] * 0x12C);
    func_00374BB8(entry[0], arg2, arg3, arg4, entry, 0x12C);
}
