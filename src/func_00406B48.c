/* identical to func_003F7810 (matched), with its names changed by decompdecomp */
extern char *D_004411AC;
void SignalSema_2(void *);
void func_00406B48(void){SignalSema_2(D_004411AC);}
int func_003F7820(void *);
short func_003F7600(char *p){
 char *r=*(char **)(p+0x54);int x;
 if(r)x=*(int *)(r+0x38);
 else{r=D_004411AC;*(char **)(p+0x54)=r;x=*(int *)(r+0x38);}
 if(!x)func_003F7820(r);
 return *(short *)(p+14);
}
long func_003FB2B8(const char *,void *,int);
int func_003F73B8(const char *s){return (int)func_003FB2B8(s,0,10);}
void *func_002B1FC0(int);
int func_003F7320(int cb){
 char *p=*(char **)(D_004411AC+0x148);int n,off;
 if(!p){p=D_004411AC+0x14c;*(char **)(D_004411AC+0x148)=p;}
 n=*(int *)(p+4);off=n*4;
 if(n>=32){p=func_002B1FC0(0x88);if(!p)return -1;n=0;*(int *)(p+4)=0;*(char **)p=*(char **)(D_004411AC+0x148);*(char **)(D_004411AC+0x148)=p;off=n*4;}
 *(int *)(p+off+8)=cb;*(int *)(p+4)=n+1;return 0;
}
