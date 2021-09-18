/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 35;
/* grid width and height for right center alignment */
static const int logow = 22;
static const int logoh = 22;

// static XRectangle rectanlges[9] = {
// 	/* x    y       w       h */
// 	{ 0,    3,      1,      3 },
// 	{ 1,    3,      2,      1 },
// 	{ 0,    5,      8,      1 },
// 	{ 3,    0,      1,      5 },
// 	{ 5,    3,      1,      2 },
// 	{ 7,    3,      1,      2 },
// 	{ 8,    3,      4,      1 },
// 	{ 9,    4,      1,      2 },
// 	{ 11,   4,      1,      2 },
// };

static XRectangle rectangles[35] = {
	/* x     y       w       h */
    /// fumo
    // left eye
	{  0,    0,      9,      1 },
	{  0,    1,      1,      7 },
	{  1,    8,      1,      2 },
	{  2,    10,     1,      1 },
	{  3,    11,     3,      1 },
	{  6,    10,     1,      1 },
	{  7,    8,      1,      2 },
	{  8,    1,      1,      7 },
    // right eye
	{  13,    0,      9,      1 },
	{  13,    1,      1,      7 },
	{  14,    8,      1,      2 },
	{  15,    10,     1,      1 },
	{  16,    11,     3,      1 },
	{  19,    10,     1,      1 },
	{  20,    8,      1,      2 },
	{  21,    1,      1,      7 },
    // mouth
	{  9,     12,     1,      1 },
	{  10,    13,     2,      1 },
	{  12,    12,     1,      1 },
    /// reo101
    // r
	{  0,    17,      3,      1 },
	{  0,    18,      1,      4 },
    // e
	{  4,    17,      1,      5 },
	{  5,    17,      2,      1 },
	{  5,    19,      2,      1 },
	{  5,    21,      2,      1 },
    // o
	{  8,    17,      4,      1 },
	{  8,    18,      1,      3 },
	{  11,   18,      1,      3 },
	{  8,    21,      4,      1 },
    // 1
	{  14,   17,      1,      5 },
    // 0
	{  16,   17,      4,      1 },
	{  16,   18,      1,      3 },
	{  19,   18,      1,      3 },
	{  16,   21,      4,      1 },
    // 1
	{  21,   17,      1,      5 },
};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=7;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;
