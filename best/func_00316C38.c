extern volatile u16 D_0042DA1C;
extern volatile s32 D_0042DA18;

void func_00316C38(s32 arg0) {
    s32 base;

    if (D_0042DA1C != 0) {
        base = D_0042DA18;
        if (D_0042DA18 - base < arg0) {
            do {
                for (s32 i = 100; i >= 0; i--) {
                    for (s32 j = 0x30; j >= 0; j--) {
                    }
                }
            } while (D_0042DA18 - base < arg0);
        }
    }
}
