extern char D_00445BE0[];
void func_0010A648(void *);
void *func_0010B1C8(void);
void func_001D4040(void *, const char *);
void func_002A1290(void *, void *, int);
void *func_002A1700(void);
void func_0011E278(int, int);

void func_00140C78(void *arg0) {
    void *sp;
    void *v0 = func_0010B1C8();
    func_0010A648(v0);
    void *v1 = func_002A1700();
    func_001D4040(&sp, D_00445BE0);
    func_002A1290(v1, &sp, 3);
    func_0011E278(*(int *)((char *)arg0 + 0xC), 0x2F);
}
