/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x170909ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc5c1c1ff, 0x170909ff, 0x6d5959ff },
	[SchemeSel]  = { 0xc5c1c1ff, 0xBB8566ff, 0xC15846ff },
	[SchemeUrg]  = { 0xc5c1c1ff, 0xC15846ff, 0xBB8566ff },
};
