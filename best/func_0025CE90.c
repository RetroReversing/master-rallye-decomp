#include "context.h"

extern void func_0023BC60(int);

typedef struct {
    char pad[0xA0];
    int *unkA0;
    int *unkA4;
} UnkA;

void func_0025CE90(UnkA *arg0) {
    int *start = arg0->unkA0;
    int *end = arg0->unkA4;
    int count = (end - start) >> 2;
    int i = 0;
    if (count > 0) {
        do {
            func_0023BC60(start[i]);
            i++;
        } while (i < count);
    }
}
