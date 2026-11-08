/* identical to func_002030A0 (matched), with its names changed by decompdecomp */
typedef struct { int b, e, c; } FV;
void func_00207540(FV *a, FV *b) {
    int n = (a->e - a->b) >> 2;
    int i = 0;
    if (n > 0) {
        do {
            int off = i * 4;
            float *p;
            i++;
            p = (float *)(a->b + off);
            *p += *(float *)(b->b + off);
        } while (i < n);
    }
}
