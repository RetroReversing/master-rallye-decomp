void *func_002F8BC0(int *a0, int *a1) {
    int v0 = *a1;
    int *v1 = (int *)a0[0];
    v0 = v0 << 2;
    v1 = (int *)((char *)v1 + v0);
    a1 = (int *)a0[9]; /* reuse reg? no, changes semantics - bad idea */
    return (void *)((char *)a1 + *v1 * 0x12C);
}
