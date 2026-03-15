/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x140e20ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc4c2c7ff, 0x140e20ff, 0x645d72ff },
	[SchemeSel]  = { 0xc4c2c7ff, 0x768E65ff, 0x837B69ff },
	[SchemeUrg]  = { 0xc4c2c7ff, 0x837B69ff, 0x768E65ff },
};
