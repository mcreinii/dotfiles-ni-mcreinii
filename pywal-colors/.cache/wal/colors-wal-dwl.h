/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x162f33ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc4cbccff, 0x162f33ff, 0x65787bff },
	[SchemeSel]  = { 0xc4cbccff, 0x5A9298ff, 0x4A7888ff },
	[SchemeUrg]  = { 0xc4cbccff, 0x4A7888ff, 0x5A9298ff },
};
