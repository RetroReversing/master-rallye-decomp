typedef struct {
    void **begin;
    void **end;
    void **cap;
} Vec;

extern int func_00242C88(int, int, int);

void func_00248780(Vec *arg0, int arg1, int arg2) {
    int n = (int)(arg0->end - arg0->begin);
    int i = n - 1;
    if (i < 0) return;
    do {
        void *elem = arg0->begin[i];
        if (func_00242C88(arg1, arg2, *(int *)((char *)elem + 0xC)) == 0) {
            arg0->begin[i] = 0;
        }
        i--;
    } while (i >= 0);
}
