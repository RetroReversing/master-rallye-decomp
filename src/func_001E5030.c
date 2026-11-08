void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

typedef struct {
    s32 *begin;
    s32 *end;
} Vec_001E4100;

extern void func_001E4ED0(s32 *ptr);

void func_001E4100(Vec_001E4100 *arg0, s32 arg1) {
    s32 *begin;
    s32 count;

    if (arg1 <= 0) {
        return;
    }
    begin = arg0->begin;
    count = (arg0->end - begin) * 0xB6DB6DB7; /* magic for /28 in 4-byte units? */
    count = count >> 2;
    if ((u32)arg1 < (u32)count) {
        func_001E4ED0(begin + arg1 * 7);
    }
}

typedef struct {
    s32 unk0;
    s32 *payload;
    s32 tag;
    s32 unkC;
    s32 changes;
} Obj_001E5030;

extern void func_001E5C58(void *, void *, s32);
extern void *D_002AD408(s32);

void func_001E5030(Obj_001E5030 *arg0, s32 arg1) {
    if (arg0->tag != 2) {
        func_001E5C58(arg0, arg0, 2);
        arg0->payload = D_002AD408(4);
        *arg0->payload = arg1;
    } else {
        s32 *v = arg0->payload;
        if (*v != arg1) {
            arg0->changes++;
            *v = arg1;
        }
    }
}

typedef struct {
    void **begin;
    void **end;
} Vec44_001E9D80;

extern void func_001E9F08(void *, void *);

void func_001E9D80(void *arg0, s32 arg1, s32 arg2, Vec44_001E9D80 *arg3) {
    void **vt = *(void ***)((u8 *)arg0 + 0xC);
    ((void (*)(void *))vt[3])((u8 *)arg0 + *(s16 *)((u8 *)vt + 8));

    {
        s32 n = (s32)((arg3->end - arg3->begin) * 0xBA2E8BA3) >> 2;
        s32 i;
        for (i = 0; i < n; i++) {
            func_001E9F08(arg0, (u8 *)arg3->begin + i * 0x2C);
        }
    }
}
