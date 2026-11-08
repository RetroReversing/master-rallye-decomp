#include "context.h"

extern void *D_00473290;
extern void *D_0044DCD8;
extern void D_002AD390(void);

void func_001A0D68(void *arg0, int arg1) {
    *(void **)((char *)arg0 + 0xC) = &D_00473290;
    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390();
    }
}
