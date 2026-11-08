typedef struct { u32 pad[2]; u32 *pixels; s32 width,height; } ImageDump;
extern int func_003F9698(const char *, ...);
extern char D_00476890[],D_004768A0[],D_004768A8[],D_004768C0[],D_004768C8[];
void func_001DE7F0(void *unused, ImageDump *img) {
s32 x,y;
u32 c;
u8 *p;
y=0;
func_003F9698(D_00476890);
if(img->height>0) do {
func_003F9698(D_004768A0,y);
for(x=0;x<img->width;x++) {
p=(u8 *)((y*img->width+x)*4+(u32)img->pixels);
c=*(u32 *)p;
func_003F9698(D_004768A8,c&255,((u8*)p)[1],((u8*)p)[2],c>>24);
if(x+1<img->width) func_003F9698(D_004768C0);
}
y++;
func_003F9698(D_004768C8);
}while(y<img->height);
}
