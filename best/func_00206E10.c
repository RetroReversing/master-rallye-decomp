typedef struct { s32 b, e, c; } FV;

void func_00207650(FV *a, FV *b, FV *c) { (void)0; }

void func_00206E10(void *arg0, void *arg1, void *arg2) {
    s32 n = ((*(s32 *)((u8 *)arg0 + 4)) - *(s32 *)((u8 *)arg0 + 0)) >> 2;
    for (s32 i = 0; i < n; i++) {
        *(f32 *)((u8 *)arg2 + (i << 2)) = *(f32 *)((u8 *)arg1 + (i << 2)) * *(f32 *)((u8 *)arg0 + (i << 2));
    }
}
