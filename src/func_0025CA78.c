#include "context.h"

extern void func_0025CAC0(void *);

typedef struct {
    char pad[0x98];
    float unk98;
    float unk9C;
} UnkA;

void func_0025CA78(UnkA *arg0) {
    if ((arg0->unk9C / arg0->unk98) > 1.01f) {
        func_0025CAC0(arg0);
    }
}
