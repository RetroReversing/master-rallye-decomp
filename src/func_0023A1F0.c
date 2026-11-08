f32 func_00205988(void *a0, void *a1, void *a2);
s32 func_00234D08(void *a0, void *a1);
f32 func_002059A8(void *a0, void *a1, void *a2, s32 *a3);

f32 func_00239FD8(void *arg0) {
    f32 f20 = 0.0f;
    void *v1 = *(void **)((u8 *)arg0);
    void *v2 = *(void **)((u8 *)(*(void **)((u8 *)v1 + 4)) + 8);
    void *v3;
    s32 res = func_00234D08(v2, *(void **)((u8 *)(*(void **)((u8 *)v1)) + 8));
    if (*(void **)v2 != (void *)res) {
        v3 = *(void **)v2;
    } else {
        v3 = *(void **)((u8 *)v2 + 4);
    }
    void *cur = *(void **)(*(void **)arg0);
    while (1) {
        void *t6 = *(void **)((u8 *)cur + 8);
        void *t5 = *(void **)t6;
        void *t6_2 = *(void **)((u8 *)t6 + 4);
        if (v3 == t5 || v3 == t6_2) {
            break;
        }
        cur = *(void **)((u8 *)cur);
        f20 += func_00205988(v3, t5, t6_2);
    }
    return f20;
}

s32 func_00239F28(void *arg0) {
    u32 sp0 = 0;
    void *v1 = *(void **)((u8 *)arg0);
    void *v16 = *(void **)((u8 *)v1);
    void *v3_ptr = v1;
    void *v4 = *(void **)((u8 *)(*(void **)((u8 *)v1 + 4)) + 8);
    if (v16 != v1) {
        do {
            void *v17 = *(void **)((u8 *)v16 + 8);
            if (func_00234D08(v4, v17) != 0) {
                v16 = *(void **)((u8 *)v16);
                v4 = v17;
                if (v16 == *(void **)arg0) {
                    break;
                }
                continue;
            }
            return 0;
        } while (v16 != *(void **)arg0);
    }
    /* check block */
    sp0 = 0;
    void *v3 = *(void **)((u8 *)(*(void **)arg0));
    if (v3 != *(void **)arg0) {
        do {
            v3 = *(void **)v3;
            sp0 += 1;
        } while (v3 != *(void **)arg0);
    }
    if (sp0 >= 3) {
        return 1;
    } else {
        return 0;
    }
}

s32 func_00239EA0(void *arg0, void *arg1, void **arg2, void **arg3) {
    void *v1 = *(void **)((u8 *)arg0);
    void *v11 = *(void **)v1;
    if (v11 == v1) {
        *arg2 = 0;
        *arg3 = 0;
        return 0;
    }
    void *v10 = *(void **)((u8 *)v11 + 8);
    while (1) {
        if (*(s32 *)((u8 *)v10 + 0x24) != 0) {
            void *v2 = *(void **)((u8 *)arg1);
            void *v8 = *(void **)v2;
            if (v8 != v2) {
                void *v9 = *(void **)((u8 *)v8 + 8);
                while (1) {
                    if (*(s32 *)((u8 *)v10 + 0x24) == *(s32 *)((u8 *)v9 + 0x24)) {
                        *arg2 = v10;
                        *arg3 = v9;
                        return 1;
                    }
                    v8 = *(void **)v8;
                    if (v8 == v2) {
                        break;
                    }
                    v9 = *(void **)((u8 *)v8 + 8);
                }
            }
        }
        v11 = *(void **)v11;
        if (v11 == *(void **)arg0) {
            break;
        }
        v10 = *(void **)((u8 *)v11 + 8);
    }
    *arg2 = 0;
    *arg3 = 0;
    return 0;
}

void func_0023A1F0(void *arg0) {
    void *v1 = *(void **)((u8 *)arg0);
    void *v17 = *(void **)((u8 *)v1);
    void *v4 = *(void **)((u8 *)(*(void **)((u8 *)v1 + 4)) + 8);
    if (v17 != v1) {
        do {
            void *v16 = *(void **)((u8 *)v17 + 8);
            func_00234D08(v4, v16);
            v17 = *(void **)((u8 *)v17);
            v4 = v16;
        } while (v17 != *(void **)arg0);
    }
}
