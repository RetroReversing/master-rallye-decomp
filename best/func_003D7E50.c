typedef struct {
    u32 flags;
    u32 field4;
    u32 field8;
    u32 fieldC;
    u32 field10;
    u32 field14;
    u32 field18;
    u32 field1C;
    u8 pad20[8];
    u32 field28;
    u8 pad2C[0x24];
    void *field50;
} S003D7E50;

s32 func_003D7E50(S003D7E50 *arg0) {
    s32 v0;
    if (arg0->field10 < arg0->field14) {
        s32 (*fn)(S003D7E50 *, s32) = *(s32 (**)(S003D7E50 *, s32))((u8 *)arg0->field50 + 0x14);
        v0 = fn(arg0, -1);
        if (v0 == -1) {
            return -1;
        }
    }
    if (arg0->flags & 0x100) {
        arg0->fieldC = arg0->field28;
    } else {
        arg0->fieldC = arg0->field1C;
        if (arg0->field8 < arg0->field14) {
            arg0->field8 = arg0->field14;
        }
    }
    arg0->field10 = arg0->field14;
    arg0->field4 = arg0->field14;
    arg0->flags = arg0->flags & ~0x800;
    arg0->field18 = arg0->field14;
    arg0->field14 = arg0->field14;
    return 0;
}
