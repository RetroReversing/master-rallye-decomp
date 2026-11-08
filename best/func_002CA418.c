int func_002CA8C0(char*p){char*q=*(char**)(p+156);char*v=*(char**)q;return ((int(*)(void*))*(void**)(v+44))(q+*(s16*)(v+40));}

int func_002CA890(char*p){char*q=*(char**)(p+156);char*v=*(char**)q;return ((int(*)(void*))*(void**)(v+52))(q+*(s16*)(v+48));}

int func_002CA860(char*p){char*q=*(char**)(p+156);char*v=*(char**)q;return ((int(*)(void*))*(void**)(v+36))(q+*(s16*)(v+32));}

int func_002CA830(char*p){char*q=*(char**)(p+156);char*v=*(char**)q;return ((int(*)(void*))*(void**)(v+28))(q+*(s16*)(v+24));}
extern void func_002CA1D0(void*,s8,s16);extern int func_003F9698(const char*,...);extern char D_00482528[];
void func_002CA418(char*p,s8 c){s16 found=-1;int i=6;for(;i<24;i++){if(!p[132+i]){found=i;func_002CA1D0(p,c,found);break;}}if(found<0)func_003F9698(D_00482528,c,c);}
