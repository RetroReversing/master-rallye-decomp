void func_0027E708(void *arg0, f32 arg1) {
    s32 state = *(s32 *)((u8 *)arg0 + 0x1C);
    f32 val;
    f32 limit;
    f32 out;

    if (state != 0) {
        if (state == 1) {
            val = *(f32 *)((u8 *)arg0 + 0x18) + *(f32 *)arg0 * arg1;
            limit = *(f32 *)((u8 *)arg0 + 0x14);
            *(f32 *)((u8 *)arg0 + 0x18) = val;
            if (!(limit <= val)) return;
            out = limit;
            if (val < limit) out = val;
        } else {
            val = *(f32 *)((u8 *)arg0 + 0x18) - *(f32 *)((u8 *)arg0 + 0x4) * arg1;
            limit = *(f32 *)((u8 *)arg0 + 0x14);
            *(f32 *)((u8 *)arg0 + 0x18) = val;
            if (!(val <= limit)) return;
            out = limit;
            if (limit < val) out = val;
        }
        *(f32 *)((u8 *)arg0 + 0x18) = out;
        *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    }
}
