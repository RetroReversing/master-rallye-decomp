extern void func_002296D0(void *);

typedef struct Vec {
    void **begin;
    void **end;
} Vec;

void func_00226DC0(void *arg0) {
    Vec *v = (Vec *)arg0;
    int n = (int)((unsigned int)v->end - (unsigned int)v->begin) >> 2;
    int i = 0;
    if (n > 0) {
        void **base;
        do {
            base = v->begin;
            func_002296D0(*(void **)((char *)base + (i << 2)));
            i++;
        } while (i < n);
    }
}
