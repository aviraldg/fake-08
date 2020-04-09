

#define COLOR_00 {  0,   0,   0, 255}
#define COLOR_01 { 29,  43,  83, 255}
#define COLOR_02 {126,  37,  83, 255}
#define COLOR_03 {  0, 135,  81, 255}
#define COLOR_04 {171,  82,  54, 255}
#define COLOR_05 { 95,  87,  79, 255}
#define COLOR_06 {194, 195, 199, 255}
#define COLOR_07 {255, 241, 232, 255}
#define COLOR_08 {255,   0,  77, 255}
#define COLOR_09 {255, 163,   0, 255}
#define COLOR_10 {255, 240,  36, 255}
#define COLOR_11 {  0, 231,  86, 255}
#define COLOR_12 { 41, 173, 255, 255}
#define COLOR_13 {131, 118, 156, 255}
#define COLOR_14 {255, 119, 168, 255}
#define COLOR_15 {255, 204, 170, 255}

#define BG_GRAY_COLOR {128, 128, 128, 255}


typedef struct {
	char Red;
	char Green;
	char Blue;
	char Alpha;
} Color;

typedef struct {
    uint16_t color;
    uint16_t bgColor;
} GraphicsState;

void initPico8Graphics();

void cls();

void pset(short x, short y, uint16_t col);
uint16_t pget(short x, short y);

void color(uint16_t c);

void line (short x1, short y1, short x2, short y2, uint16_t col);

void rect(short x1, short y1, short x2, short y2, uint16_t col);
void rectfill(short x1, short y1, short x2, short y2, uint16_t col);

void flipBuffer(u8* fb);