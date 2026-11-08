extern void func_001D4040(void*,const char*),func_001E2460(void*,int),func_001E28F8(void*,const char*,void*),func_001E25B0(void*,const char*,void*);
extern char D_00445CD8[],D_00445CE8[],D_00445CF8[],D_00445D08[],D_00445D18[],D_00445CC0[],D_0044D880[],D_00445CA8[];
extern int D_0040DC00[];
extern void func_001D2458(void*,const char*),func_001D2900(void*,int),func_001D4810(void*,int),func_00262F88(int,void*),D_002AD390(int);
#define W(p,o) (*(int*)((char*)(p)+(o)))
void func_0010C5D0(char*p,int u,int a){int k[4];func_001E2460(k,a);func_001E28F8(k,D_00445CD8,p+16);func_001E28F8(k,D_00445CE8,p+20);func_001E28F8(k,D_00445CF8,p+24);func_001E25B0(k,D_00445D08,p+28);func_001E25B0(k,D_00445D18,p+32);}
void*func_0010C470(int*p){int k[4];func_001D4040(k,D_00445CC0);p[1]=k[0];p[0]=-1;p[2]=(int)D_0044D880;p[4]=0;p[5]=0;p[6]=0;p[3]=0;p[7]=0;p[8]=0;return p;}
void func_0010C160(char*p,char*q){int s[4],k[4];int n=func_001E3650(func_001E4280(),(int)(p+16));func_001D2458(s,D_00445CA8);func_001D2900(s,D_0040DC00[n]);k[0]=0;func_001D4810(k,s[0]);func_00262F88(W(q,80),k);D_002AD390(s[0]);}
