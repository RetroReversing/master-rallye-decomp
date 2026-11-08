extern s32 func_00113778(void *, void *, void *, s32, f32);
extern char D_00446878[];
extern char D_00446880[];
void func_001139B8(void *arg0, void *arg1) {
    *(s32 *)((u8 *)arg0 + 0x7C) = func_00113778(arg0, D_00446878, arg1, 0, *(f32 *)((u8 *)arg0 + 0x8C));
    *(s32 *)((u8 *)arg0 + 0x80) = func_00113778(arg0, D_00446880, arg1, 1, *(f32 *)((u8 *)arg0 + 0x90));
}
