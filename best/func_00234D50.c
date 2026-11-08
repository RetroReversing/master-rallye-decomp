int func_00234D08(int *arg0, int *arg1) {
    int a0 = arg0[0];
    int b0 = arg1[0];

    if (a0 == b0) {
        return b0;
    } else {
        int b1 = arg1[1];
        if (a0 == b1) {
            return b1;
        } else {
            int a1 = arg0[1];
            int ret = a1;
            if (a1 == b0) {
                return ret;
            } else {
                int xorv = a1 ^ b1;
                ret = 0;
                if (xorv == 0) {
                    ret = a1;
                }
                return ret;
            }
        }
    }
}

int func_00234D50(int *arg0, int *arg1) {
    int a0 = arg0[6];
    int b0 = arg1[6];

    if (a0 == b0) {
        return b0;
    } else {
        int b1 = arg1[7];
        if (a0 == b1) {
            return b1;
        } else {
            int a1 = arg0[7];
            int ret = a1;
            if (a1 == b0) {
                return ret;
            } else {
                int xorv = a1 ^ b1;
                ret = 0;
                if (xorv == 0) {
                    ret = a1;
                }
                return ret;
            }
        }
    }
}
