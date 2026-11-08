typedef struct {
    void **begin;
    void **end;
    void **cap;
} Vec;

extern void func_001CAED8(Vec *, void *, void *, int);

void func_00247640(int arg0, int arg1, Vec *arg2) {
    Vec *sp28 = arg2;
    void **p = arg2->begin;
    int n = (int)(arg2->end - arg2->begin);
    int i = 0;
    if (n > 0) {
        do {
            if (*p == (void *)arg1) break;
            i++;
            p++;
        } while (i < n);
    }
    if (arg2->end != arg2->cap) {
        if (arg2->end) {
            *arg2->end = (void *)arg1;
        }
        arg2->end++;
        return;
    }
    func_001CAED8(arg2, arg2->end, &sp28, i);
}
