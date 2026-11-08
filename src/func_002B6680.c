extern char D_0047EF98[] __attribute__((aligned(8)));
extern char D_00495CD8[] __attribute__((aligned(8)));
extern char D_00495CE6[];
char *func_003FAD88(char*, const char*, int);

char *func_002B6680(void *self, char *p) {
    int i;
    if (*p != '\\') {
        for (i = 0; i < 31;) {
            char c = p[i];
            if (!c) break;
            if (c == ':') { p += i + 1; break; }
            if (c == '\\') break;
            i++;
        }
    }
    __builtin_memcpy(D_00495CD8, D_0047EF98, 15);
    { char *q = p + 1; if (*p != '\\') q = p; func_003FAD88(D_00495CE6, q, 0xF0); }
    D_00495CD8[0xFF] = 0;
    return D_00495CD8;
}

extern void func_002B2028(int);

void func_002B3C20(int *arg0) {
    func_002B2028(arg0[0]);
    arg0[3] = 0;
    arg0[4] = 0;
    arg0[5] = 0;
}

extern void func_003FA8A4(int, char *);
extern char D_0047E400[];

void func_002B3A68(void *arg0, int arg1) {
    int tmp = arg1;
    func_003FA8A4(tmp, D_0047E400);
}

extern void func_003F9698(char *, ...);
extern int func_003FA760(char *, char *);
extern char D_0047E4B8[];
extern char D_0047E4E0[];
extern char D_0047E4E8[];
extern char D_0047E520[];

int func_002B3848(void *arg0) {
    func_003F9698(D_0047E4B8, D_0047E400);
    if (func_003FA760(D_0047E4E0, D_0047E4E0)) {
        func_003F9698(D_0047E4E8);
    }
    return 0;
}
