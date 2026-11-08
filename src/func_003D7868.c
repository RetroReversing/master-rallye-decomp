typedef struct {
    u32 flags;
    s32 field4;
    u8 pad8[0x1C];
    s32 field24;
} S003D7868;

void func_003D7868(S003D7868 *arg0, s32 arg1) {
    if (arg0->flags & 0x100) {
        arg0->field24 += arg1;
    } else {
        arg0->field4 += arg1;
    }
}
