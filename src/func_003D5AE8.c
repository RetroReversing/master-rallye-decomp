/* func_003D5AE8 */
s32 func_003D4D70(s32, s32);

s32 func_003D5AE8(void **arg0) {
    void *obj = arg0[0];
    u8 *t = (u8 *)obj;
    if (t[0x1A]) {
        t[0x1A] |= 2;
        return 0;
    }
    s32 tmp = *(s32 *)(t + 4);
    if (tmp) {
        void *lst = *(void **)t;
        if (*(s32 *)((u8 *)lst + 8) == *(s32 *)((u8 *)lst + 4)) {
            func_003D4D70(tmp, tmp);
            return 1;
        }
    }
    return 1;
}

/* func_003D5A40 */
s32 func_003D4D70(s32, s32);
s32 func_003DA6B8(void *);

s32 func_003D5A40(void **arg0) {
    void *obj = arg0[0];
    u8 *t = (u8 *)obj;
    s32 v4 = 0;
    if (t[0x1A]) {
        t[0x1A] |= 2;
        v4 = 0;
    } else {
        s32 tmp = *(s32 *)(t + 4);
        v4 = 1;
        if (tmp) {
            void *lst = *(void **)t;
            if (*(s32 *)((u8 *)lst + 8) == *(s32 *)((u8 *)lst + 4)) {
                func_003D4D70(tmp, tmp);
                v4 = 1;
            }
        }
    }
    if (!v4) return -1;
    s32 r = func_003DA6B8(*(void **)obj);
    if (r == -1) {
        t = (u8 *)arg0[0];
        t[0x1A] |= 1;
    }
    return r;
}

/* func_003D5990 */
s32 func_003D6F88(void *);

void **func_003D5990(void **arg0) {
    void *obj = arg0[0];
    u8 *t = (u8 *)obj;
    if (t[0x1A] == 0) {
        if (func_003D6F88(*(void **)obj) == -1) {
            t = (u8 *)arg0[0];
            t[0x1A] |= 4;
        }
    }
    return arg0;
}

/* func_003D5938 */
s32 func_003D6F68(void *, s8);

void **func_003D5938(void **arg0, s8 a1) {
    void *obj = arg0[0];
    u8 *t = (u8 *)obj;
    if (t[0x1A] == 0) {
        if (func_003D6F68(*(void **)obj, (s8)(a1 << 24) >> 24) == -1) {
            t = (u8 *)arg0[0];
            t[0x1A] |= 4;
        }
    }
    return arg0;
}
