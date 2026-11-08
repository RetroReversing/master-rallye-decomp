extern void func_003F93CC(void **, s32, s32);
void func_001E6BE8(void *arg0) {
    void **p = *(void ***)arg0;
    void **e = *(void ***)((char *)arg0 + 4);
    void **beg;
    if (p != e) {
        do {
            void *v = *p;
            if (v != 0) {
                void *vt = *(void **)((char *)v + 4);
                void (*fn)(void *, s32, void *) = *(void (**)(void *, s32, void *))((char *)vt + 12);
                fn((char *)v + *(short *)((char *)vt + 8), 3, v);
            }
            p++;
        } while (p != e);
    }
    beg = *(void ***)arg0;
    e = *(void ***)((char *)arg0 + 4);
    func_003F93CC(beg, (s32)(e - beg), 0);
    *(void ***)((char *)arg0 + 4) = beg;
}

extern s32 D_00426388;
extern s32 D_00492278;
void *func_001E5CC0(void *arg0) {
    if (D_00426388 == 0) {
        D_00492278 = 0;
        D_00426388 = 1;
    }
    if (*(s32 *)((char *)arg0 + 8) == 8) {
        return *(void **)((char *)arg0 + 4);
    }
    return &D_00492278;
}

extern void *D_002AD408(u32);
extern s32 func_001E5C58(void *, s32);
void func_001E56D8(void *arg0, void *arg1) {
    if (*(s32 *)((char *)arg0 + 8) != 7) {
        func_001E5C58(arg0, 7);
        void *p = D_002AD408(8);
        *(void **)((char *)arg0 + 4) = p;
        *(float *)p = *(float *)arg1;
        *(float *)((char *)p + 4) = *(float *)((char *)arg1 + 4);
    } else {
        void *p = *(void **)((char *)arg0 + 4);
        if (!(*(float *)p == *(float *)arg1 && *(float *)((char *)p + 4) == *(float *)((char *)arg1 + 4))) {
            void *pp = *(void **)((char *)arg0 + 4);
            *(s32 *)((char *)arg0 + 0x10) = *(s32 *)((char *)arg0 + 0x10) + 1;
            *(float *)pp = *(float *)arg1;
            *(float *)((char *)pp + 4) = *(float *)((char *)arg1 + 4);
        }
    }
}

void func_001E5588(void *arg0) {
    if (*(s32 *)((char *)arg0 + 8) != 4) {
        func_001E5C58(arg0, 4);
        void *p = D_002AD408(4);
        *(void **)((char *)arg0 + 4) = p;
        *(s32 *)p = 0;
    }
    *(void **)((char *)arg0 + 4)[0] = 0;
}
