void func_00297398(s32 a, s32 b);
void func_002973F0(s32 a, s32 b);
s32 func_00297500(void);
s32 func_002971B0(s32 a);
s32 func_002971F8(s32 a);

typedef struct {
    char pad[0x10];
    s32 unk10;
    char pad2[8];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
} unk002A0600;

void func_002A0600(unk002A0600 *arg0) {
    s32 temp_16;
    s32 temp_18;
    void *temp_19;
    s32 v0;

    if (func_002971B0(func_00297500()) == arg0->unk24) {
        if (arg0->unk10 != 0) {
            temp_19 = (void *)((char *)arg0 + 0x10);
            v0 = func_001E4280();
            temp_16 = func_001E3650(v0, (void *)((int)temp_19));
            v0 = func_00297500();
            temp_18 = func_002971F8(v0);
            func_002973F0(func_00297500(), 0);
            if ((temp_18 ^ 1) == 0) {
                temp_16 = temp_16 - 1;
            }
            if ((temp_18 ^ 7) == 0) {
                temp_16 = temp_16 + 1;
            }
            if (temp_18 == 4) {
                if (arg0->unk28 != 0) {
                    func_00297398(func_00297500(), arg0->unk28);
                }
            }
            if (temp_18 == 5) {
                if (arg0->unk2C != 0) {
                    func_00297398(func_00297500(), arg0->unk2C);
                }
            }
            if (arg0->unk1C > temp_16) {
                temp_16 = arg0->unk1C;
            }
            if (arg0->unk20 < temp_16) {
                temp_16 = arg0->unk20;
            }
            func_001E3EC0(func_001E4280(), temp_19, temp_16);
        }
    }
}
