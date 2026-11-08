/* identical to func_003D1EE0 (matched), with its names changed by decompdecomp */
extern char D_00488D30[];
char *func_003D26D0(void **a) {
    char *p = (char *)a[1];
    unsigned n = *(unsigned *)(p - 0x10);
    if (n == 0) {
        return D_00488D30;
    }
    p[n] = 0;
    return (char *)a[1];
}
