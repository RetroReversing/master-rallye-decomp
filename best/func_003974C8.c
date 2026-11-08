extern int func_003CE2B8(void *, unsigned, int);

int func_003CFE90(void *a, unsigned b)
{
    return func_003CE2B8(a, b, 0);
}

typedef struct { u64 a, b, c; } __attribute__((packed)) S24;

S24 *func_003974C8(S24 *arg0, S24 *arg1, S24 *arg2, S24 *arg3, S24 *arg4)
{
    s32 n = (s32)(arg1 - arg0);

    while (n > 0) {
        arg2--;
        arg3 = arg2;
        arg1--;
        arg4 = arg1;
        *arg3 = *arg4;
        n--;
    }
    return arg2;
}

extern void func_001C6938(void *, void *);
extern void **func_00397330(void *);
extern void **func_00397368(void *);
extern void func_003973C8(void *, void *);

void func_00397428(void *arg0, void *arg1)
{
    void *p = arg1;

    while (p != NULL) {
        void *next;

        func_001C6938(arg0, *func_00397330(p));
        next = *func_00397368(p);
        func_003973C8(arg0, p);
        p = next;
    }
}

extern void func_003973A0(void *);
extern void func_003A5C10(void *, void *);

void func_003973C8(void *arg0, void *arg1)
{
    func_003973A0((u8 *)arg1 + 0x10);
    func_003A5C10(arg0, arg1);
}
