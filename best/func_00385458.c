/* func_003D5858 */
void func_003D5858(void *unused, void (*arg1)(void)) {
    (void)unused;
    arg1();
}

/* func_00386C38 */
typedef struct {
    u8 pad[8];
    s32 unk8;
    s32 unkC;
} S_40E658;

extern S_40E658 D_0040E658;

typedef struct {
    u8 pad[8];
    void *unk8;
} S_386C38;

void *func_00386C38(S_386C38 *arg0) {
    void **dest = &arg0->unk8;
    void *v;
    if (D_0040E658.unkC != 0) {
        v = (void *)func_00151930(&D_0040E658);
    } else {
        D_0040E658.unk8++;
        v = (void *)((char *)&D_0040E658 + 0x10);
    }
    *dest = v;
    return arg0;
}

/* func_00385458 */
typedef struct {
    u8 *begin;
    u8 *end;
} S_85458;

s32 func_00385458(S_85458 *arg0) {
    u8 *p = arg0->begin;
    u8 *end = arg0->end;
    s32 diff = (s32)(end - p);
    s32 count = (diff * 0x38E38E39) >> 3;
    s32 maxv;
    s32 minv;
    u8 *cur;

    if (count <= 0) {
        return 0;
    }
    maxv = *(s32 *)(p + 0x24);
    minv = maxv;
    cur = p;
    if (cur == end) {
        goto done;
    }
    {
        u8 *scan = cur + 0x20;
        do {
            s32 i = 2;
            cur += 0x48;
            do {
                s32 v = *(s32 *)(scan + 4);
                if (maxv < v) maxv = v;
                if (v < minv) minv = v;
                i--;
                scan += 8;
            } while (i >= 0);
            scan = cur + 0x20;
        } while (cur != end);
    }
done:
    return maxv - minv;
}
