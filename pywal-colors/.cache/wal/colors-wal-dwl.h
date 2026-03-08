/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x0b0b1aff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc2c2c5ff, 0x0b0b1aff, 0x5a5a6fff },
	[SchemeSel]  = { 0xc2c2c5ff, 0x686D95ff, 0x686D94ff },
	[SchemeUrg]  = { 0xc2c2c5ff, 0x686D94ff, 0x686D95ff },
};
