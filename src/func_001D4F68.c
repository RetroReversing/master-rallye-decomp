extern void *func_002B1FC0(int size);
extern void D_00476660;

void *func_001D4DB8(void *arg0) {
    int *p = (int *)arg0;
    p[3] = 1;
    p[0] = 0;
    p[1] = 0;
    p[2] = 1;
    return arg0;
}

void func_001D4F68(void *arg0) {
    int *p = (int *)arg0;
    int count;
    int i;

    if (p[11] != 1) return;
    if (p[15] == 0) return;
    count = p[13] * p[14];
    if (count <= 0) return;
    i = 0;
    do {
        ((char *)p[15])[i] = 0;
        i++;
        p[4] = 0;
    } while (i < p[13] * p[14]);
}

void *func_001D4B78(void *arg0, int arg1) {
    int *p = (int *)arg0;
    int temp;

    p[0] = (int)&D_00476660;
    temp = (int)func_002B1FC0(arg1);
    p[4] = temp;
    p[1] = temp + arg1;
    p[2] = temp;
    p[3] = temp;
    return arg0;
}
