#include "context.h"

extern int func_001D4010(void *);
extern void func_001D4040(void *, void *);
extern int func_003FA310(void *, char *, int, int);
extern char D_00472030[];

void func_001A0DA8(void *arg0, void *arg1) {
    char sp[0x70];
    if (arg1) {
        void *base = (u8 *)arg1 + 0x5C;
        void *out = (u8 *)arg0 + 0x10;
        int i = 0;
        while (i < 4) {
            func_003FA310(sp, D_00472030, func_001D4010(base), i);
            i++;
            func_001D4040(out, sp);
            out = (u8 *)out + 4;
        }
    }
}
