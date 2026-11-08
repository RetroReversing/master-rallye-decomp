void func_003FA8A4(void *);
extern u32 D_00436158[8];
extern u8 D_00488C08;

void func_003CA558(u32 arg0, u8 *arg1) {
    if (arg0 < 8) {
        func_003FA8A4((void *)D_00436158[arg0]);
        return;
    }
    *arg1 = D_00488C08;
}
