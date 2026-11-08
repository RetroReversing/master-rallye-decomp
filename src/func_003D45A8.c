extern void func_003D4D70(int);
extern signed char func_003D30B0(void *);
extern void func_003D6F68(void *, signed char);
extern void func_003D4168(void **, unsigned long long, int);
extern int func_003DA700(signed char, void *);
extern void func_003D5050(void **);

void **func_003D45A8(void **arg0, long long arg1) {
    unsigned char *obj = *(unsigned char **)arg0;
    int var_2;
    if (obj[0x1A] != 0) {
        var_2 = 0;
    } else {
        if (*(int *)(obj + 4) != 0) {
            func_003D4D70(*(int *)(obj + 4));
        }
        var_2 = 1;
    }
    if (var_2 != 0) {
        func_003D4168(arg0, (unsigned long long)(arg1 << 32) >> 32, 0);
    }
    return arg0;
}

void **func_003D4508(void **arg0, long long arg1) {
    unsigned char *obj = *(unsigned char **)arg0;
    int var_2;
    if (obj[0x1A] != 0) {
        var_2 = 0;
    } else {
        if (*(int *)(obj + 4) != 0) {
            func_003D4D70(*(int *)(obj + 4));
        }
        var_2 = 1;
    }
    if (var_2 != 0) {
        long long var_5 = arg1;
        int var_6 = 1;
        if (var_5 < 0) {
            unsigned long long flags = *(unsigned long long *)(*(unsigned char **)arg0 + 0x10);
            if ((flags & 0x60) == 0) {
                var_5 = -var_5;
                var_6 = -1;
            }
        }
        func_003D4168(arg0, (unsigned long long)(var_5 << 32) >> 32, var_6);
    }
    return arg0;
}

void **func_003D40B8(void **arg0, signed char arg1) {
    unsigned char *obj = *(unsigned char **)arg0;
    int var_2;
    if (obj[0x1A] != 0) {
        var_2 = 0;
    } else {
        if (*(int *)(obj + 4) != 0) {
            func_003D4D70(*(int *)(obj + 4));
        }
        var_2 = 1;
    }
    if (var_2 != 0) {
        signed char c = arg1;
        c = (signed char)(c << 24) >> 24;
        if (func_003DA700(c, *(void **)(obj + 0)) == -1) {
            ((unsigned char *)*arg0)[0x1A] |= 4;
        }
        if ((*(unsigned long long *)(obj + 0x10) & 0x6000) != 0) {
            func_003D5050(arg0);
        }
    }
    return arg0;
}

void **func_003D4DE8(void **arg0) {
    unsigned char *obj = *(unsigned char **)*arg0;
    int var_4;
    if (obj[0x1A] != 0) {
        obj[0x1A] |= 2;
        var_4 = 0;
    } else {
        int tmp = *(int *)(obj + 4);
        if (tmp != 0) {
            void *p2 = *(void **)(obj + 0);
            if (*(int *)((unsigned char *)p2 + 8) == *(int *)((unsigned char *)p2 + 4)) {
                func_003D4D70(tmp);
            }
            var_4 = 1;
        } else {
            var_4 = 1;
        }
    }
    if (var_4 != 0) {
        signed char v2 = func_003D30B0(*(void **)(obj + 0));
        if (v2 != -1) {
            func_003D6F68(*(void **)(obj + 0), v2);
        } else {
            ((unsigned char *)*arg0)[0x1A] |= 1;
        }
        return arg0;
    }
    return arg0;
}
