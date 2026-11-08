extern void func_00112920(void);
extern void func_00112F10(void *);
void func_001134D8(void *arg0) {
    func_00112920();
    if (*(s32 *)((u8 *)arg0 + 0x34) != 0) {
        func_00112F10(arg0);
    }
}
