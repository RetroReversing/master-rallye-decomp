typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef unsigned int u32;

void func_00200250(void *arg0) {
    *(s32 *)((char *)arg0 + 0x20) = 0;
    *(float *)((char *)arg0 + 0x1C) = 1.0f;
    *(s32 *)((char *)arg0 + 8) = 1;
}

void *func_001FC500(void *arg0, void *arg1) {
    void **it = *(void ***)arg0;
    void **end = *(void ***)((char *)arg0 + 4);
    void *key = *(void **)arg1;

    if (it != end) {
        void **bound = end;
        do {
            void *obj = *it;
            if (*(void **)((char *)obj + 4) == key) {
                return obj;
            }
            it++;
        } while (it != bound);
    }
    return 0;
}

extern void *func_001FC500(void *, void *);

s32 func_001FC4C0(void *arg0, void *arg1) {
    void *obj = func_001FC500(arg0, arg1);
    if (obj != 0) {
        void *vt = *(void **)((char *)obj + 8);
        s32 (*fn)(void *) = *(s32 (**)(void *))((char *)vt + 0x14);
        s16 off = *(s16 *)((char *)vt + 0x10);
        return fn((char *)obj + off);
    }
    return 0;
}

extern void *D_002AD408(int);
extern void *D_00426420;

void *func_001FC310(void) {
    void *p = D_00426420;
    if (p == 0) {
        p = D_002AD408(0xC);
        D_00426420 = p;
        *(s32 *)p = 0;
        *(void **)((char *)p + 8) = p;
        *(void **)((char *)p + 4) = p;
    }
    return D_00426420;
}
