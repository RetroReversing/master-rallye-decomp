f32 func_00151088(void *arg0, s32 arg1) {
    s32 var_5;
    s32 var_6;
    void **arr;
    s32 count;
    f32 *p;
    var_5 = arg1;
    var_6 = 0;
    arr = (void **)((char *)arg0 + 0x88);
    count = *(s32 *)((char *)arg0 + 0xB0);
    if (count <= 0) {
        p = (f32 *)arr[count - 1];
        return p[0];
    }
loop:
    if (var_5 != 0) {
        s32 tmp;
        tmp = var_6 + 1;
        var_6 = tmp;
        var_5 = var_5 - 1;
        if (tmp < count) {
            f32 *q;
            q = (f32 *)arr[var_6];
            if (*q == -1.0f) {
                var_5 = var_5 - 1;
            }
        }
        if (var_6 >= count) {
            p = (f32 *)arr[var_6 - 1 >= 0 ? var_6 - 1 : count - 1];
            return p[0];
        }
        goto loop;
    }
    p = (f32 *)arr[var_6];
    return p[0];
}

s32 func_00151568(unsigned char *s1, unsigned char *e1, unsigned char *s2, unsigned char *e2) {
    unsigned char c1;
    unsigned char c2;
    if (s1 == e1) {
        if (s2 == e2) {
            return 0;
        }
        return -1;
    }
    if (s2 == e2) {
        return -1;
    }
    c1 = *s1;
loop2:
    c2 = *s2;
    if (c1 < c2) {
        return -1;
    }
    if (c2 < c1) {
        return 1;
    }
    s1 = s1 + 1;
    if (s1 == e1) {
        if (s2 + 1 == e2) {
            return 0;
        }
        if (s2 == e2) {
            return 0;
        }
        s2 = s2 + 1;
        if (s2 == e2) {
            return 1;
        }
        return 0;
    }
    s2 = s2 + 1;
    if (s2 == e2) {
        return 1;
    }
    c1 = *s1;
    goto loop2;
}

void *func_002B2028(void *p);

void func_001515C8(void **arg0) {
    void *cur;
    void *next;
    cur = *arg0;
    next = *(void **)cur;
    if (next != cur) {
        do {
            next = *(void **)next;
            func_002B2028(cur);
            cur = next;
        } while (next != *arg0);
    }
    *(void **)*arg0 = *arg0;
    *(void **)(*(void **)*arg0 + 4) = *(void **)*arg0;
}

extern s32 func_001E2460(void *sp, s32);
extern s32 func_001E25B0(void *sp, const char *str, void *ptr);
extern s32 func_00193B60(void);
extern s32 func_001930D8(s32, s32);
extern const char D_0044BC38[];

void func_00150250(void *arg0, s32 arg2) {
    char sp[0x30];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0044BC38, (void *)((char *)arg0 + 0xB8));
    *(s32 *)((char *)arg0 + 0x18) = func_001930D8(func_00193B60(), *(s32 *)((char *)arg0 + 0xB8));
}
