extern char D_00471898[],D_0048DED0[];extern char *D_0048DED8[];
extern int func_001D2458(void*,const char*);extern void func_001D2900(void*,const char*),func_001D4040(void*,const char*),func_001E3EC0(int,void*,int),D_002AD390(void*);extern int func_001E3598(int,void*);
extern void*D_002AD408(int);extern int*D_00425D78;
void func_00194CD0(int u,int n,int v){int s[4],k[4],root;func_001D2458(s,D_00471898);func_001D2900(s,D_0048DED8[n]);root=func_001E4280();func_001D4040(k,(char*)s[0]);func_001E3EC0(root,k,v);D_002AD390((void*)s[0]);}
int func_00194D58(int u,int n){int s[4],k[4],root,v;func_001D2458(s,D_00471898);func_001D2900(s,D_0048DED8[n]);root=func_001E4280();func_001D4040(k,(char*)s[0]);v=func_001E3650(root,(int)k);D_002AD390((void*)s[0]);return v;}
void*func_00194C40(void){if(!D_00425D78){D_00425D78=D_002AD408(16);D_00425D78[3]=0;}return D_00425D78;}
int func_00194C10(void){return func_001E3598(func_001E4280(),D_0048DED0);}
