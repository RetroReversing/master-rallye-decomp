typedef struct {
    s32 begin;
    s32 end;
} S_001E4100;

extern void func_001E4ED0(s32 ptr);

void func_001E4100(S_001E4100 *arg0, s32 arg1) {
    if (arg1 > 0) {
        s32 end = arg0->end;
        s32 begin = arg0->begin;
        s32 diff = end - begin;
        s32 count = (s32)(diff * 0xB6DB6DB7) >> 2;
        if ((u32)arg1 < (u32)count) {
            func_001E4ED0(begin + arg1 * 0x1C);
        }
    }
}
