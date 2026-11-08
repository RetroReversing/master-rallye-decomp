extern void func_002B8438(void *);
extern void func_002BFB00(void);
extern char D_00480368[];

typedef struct {
    char pad[0x24];
    char *f24;
    char pad2[0x38];
    s32 f60;
    u16 f64;
} S_2BB6A0;

void *func_002BB6A0(S_2BB6A0 *arg0) {
    func_002BFB00();
    arg0->f24 = D_00480368;
    func_002B8438((char *)arg0 + 0x28);
    arg0->f64 = 0xFFFF;
    arg0->f60 = 0;
    return arg0;
}
