typedef struct {
    s32 begin;
    s32 end;
} S_001E4100;

extern void func_001E4ED0(s32 ptr);

void func_001E4100(S_001E4100 *arg0, s32 arg1) {
    if (arg1 > 0) {
        s32 begin = arg0->begin;
        s32 end = arg0->end;
        s32 diff = end - begin;
        s32 count = (s32)((diff * 0xB6DB6DB7)) >> 2;
        if ((u32)arg1 < (u32)count) {
            func_001E4ED0(begin + arg1 * 0x1C);
        }
    }
}

typedef struct {
    s32 begin;
    s32 end;
} V_001E9D80;

extern void func_001E9F08(void *, s32);

void func_001E9D80(void *arg0, s32 arg1, s32 arg2, V_001E9D80 *arg3) {
    void **vt = *(void ***)((u8 *)arg0 + 0xC);
    ((void (*)(void *))vt[3])((u8 *)arg0 + *(s16 *)((u8 *)vt + 8));

    {
        s32 diff = arg3->end - arg3->begin;
        s32 n = (s32)(diff * 0xBA2E8BA3) >> 2;
        s32 i;
        s32 off;

        if (n > 0) {
            off = 0;
            for (i = n; i != 0; i--) {
                func_001E9F08(arg0, arg3->begin + off);
                off += 0x2C;
            }
        }
    }
}
