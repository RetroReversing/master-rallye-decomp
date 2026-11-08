typedef struct {
    u32 flags;
    u8 pad4[0x20];
    void *field24;
    void *field28;
    void *field2C;
} S003D7F00;

extern int func_002B2028(void *);
extern void func_003D7DE0(S003D7F00 *);

void func_003D7F00(S003D7F00 *arg0) {
    if (arg0->flags & 0x100) {
        func_003D7DE0(arg0);
    }
    func_002B2028(arg0->field24);
    arg0->field24 = 0;
    arg0->field28 = 0;
    arg0->field2C = 0;
}
