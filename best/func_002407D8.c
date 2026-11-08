typedef struct {
    void **unk18;
    s32 unk1C;
} S_arg0;

s32 func_002509C8(void *);

s32 func_002407D8(S_arg0 *arg0) {
    s32 temp_17 = ((s32)arg0->unk1C - (s32)arg0->unk18) >> 2;
    s32 var_16 = 0;
    if (temp_17 > 0) {
        void **base = arg0->unk18;
        do {
            if (func_002509C8(base[var_16]) == 0) {
                return 0;
            }
            var_16++;
            if (var_16 < temp_17) {
                base = arg0->unk18;
            }
        } while (var_16 < temp_17);
    }
    return 1;
}
