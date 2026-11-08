extern void *func_001E3820(s32, void *, void *);

void func_00168ED8(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    void *temp_2;
    void *temp_2_2;

    *(f32 *)((u8 *)arg0 + 0xB0) = fparg3;
    temp_2 = func_001E3820(func_001E4280(), (u8 *)arg0 + 0x80, (u8 *)arg0 + 0x84);
    if (temp_2 != NULL) {
        temp_2_2 = *(void **)((u8 *)temp_2 + 8);
        if (temp_2_2 != NULL) {
            *(volatile f32 *)((u8 *)temp_2_2 + 0x28) = fparg2;
            *(volatile f32 *)((u8 *)temp_2_2 + 0x1C) = fparg0;
            *(volatile f32 *)((u8 *)temp_2_2 + 0x24) = fparg1;
            *(volatile f32 *)((u8 *)temp_2_2 + 0x20) = fparg3;
            *(volatile f32 *)((u8 *)arg0 + 0x34) = fparg2;
            *(volatile f32 *)((u8 *)arg0 + 0x28) = fparg3;
            *(volatile f32 *)((u8 *)arg0 + 0x2C) = fparg0;
            *(volatile f32 *)((u8 *)arg0 + 0x30) = fparg1;
        }
    }
}
