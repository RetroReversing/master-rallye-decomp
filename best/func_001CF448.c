#include "context.h"

extern f32 func_001CF4C0(f32 *);
extern f32 D_00478468;

f32 func_001CF448(f32 *arg0) {
    f32 mag = func_001CF4C0(arg0);
    f32 eps = D_00478468;

    if (mag < eps) {
        arg0[2] = 0.0f;
        arg0[0] = 0.0f;
        arg0[1] = 0.0f;
    } else {
        arg0[0] = arg0[0] / mag;
        arg0[1] = arg0[1] / mag;
        arg0[2] = arg0[2] / mag;
    }
    return mag;
}
