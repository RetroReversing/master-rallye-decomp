int func_00196028(void);
int func_00194D58(int, int);
void func_00194CD0(int, int, int);
int func_00195788(int, int);
void func_00195700(int, int, int);
void func_001D4040(void*, const char*);
void func_001E3EC0(int, void*, int);
int func_001E4280(void);
int func_002A1700(void);
void func_002A1290(int, void*, int);
extern char D_00445BE0[], D_00445BF0[], D_00445C10[], D_00445C30[], D_00445C50[], D_00445C70[];

int func_0010BDA0(void) {
    char key[16];
    int obj;
    const char *car_unlocked;

    if ((func_00194D58(func_00196028(), 93) ^ 1) != 0) {
        obj = func_001E4280();
        car_unlocked = D_00445BF0;
        func_001D4040(key, car_unlocked);
        func_001E3EC0(obj, key, -1);

        obj = func_001E4280();
        func_001D4040(key, D_00445C10);
        func_001E3EC0(obj, key, -1);

        obj = func_001E4280();
        func_001D4040(key, D_00445C30);
        func_001E3EC0(obj, key, -1);

        if (func_00194D58(func_00196028(), 104) == 1) {
            func_00194CD0(func_00196028(), 93, 1);
            obj = func_001E4280();
            func_001D4040(key, D_00445C50);
            func_001E3EC0(obj, key, 18);

            if (!func_00195788(func_00196028(), 12)) {
                obj = func_001E4280();
                func_001D4040(key, car_unlocked);
                func_001E3EC0(obj, key, 23);
            }
            func_00195700(func_00196028(), 12, 1);
            obj = func_001E4280();
            func_001D4040(key, D_00445C70);
            func_001E3EC0(obj, key, 39);
            obj = func_002A1700();
            func_001D4040(key, D_00445BE0);
            func_002A1290(obj, key, 3);
            return 43;
        }
    }
    return 39;
}
