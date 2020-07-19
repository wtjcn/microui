
enum { ATLAS_WHITE = MU_ICON_MAX, ATLAS_FONT };
enum { ATLAS_WIDTH = 128, ATLAS_HEIGHT = 128 };


static char atlas_texture[ATLAS_WIDTH][ATLAS_HEIGHT] = {
#include "fs16.map"
};


static mu_Rect atlas[] = {
  [ MU_ICON_CLOSE ] = {  40, 98, 11, 13 },
  [ MU_ICON_CHECK ] = { 0, 0, 18, 18 },
  [ MU_ICON_EXPANDED ] = { 30, 96, 9, 10 },
  [ MU_ICON_COLLAPSED ] = {  0, 32, 8, 16 },
  [ ATLAS_WHITE ] = { 9, 99, 3, 3 },
#include "fs16.pos"
};

