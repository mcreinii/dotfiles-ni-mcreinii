const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#140e20", /* black   */
  [1] = "#837B69", /* red     */
  [2] = "#768E65", /* green   */
  [3] = "#739765", /* yellow  */
  [4] = "#8AA174", /* blue    */
  [5] = "#8FC17E", /* magenta */
  [6] = "#A4AF8F", /* cyan    */
  [7] = "#c4c2c7", /* white   */

  /* 8 bright colors */
  [8]  = "#645d72",  /* black   */
  [9]  = "#837B69",  /* red     */
  [10] = "#768E65", /* green   */
  [11] = "#739765", /* yellow  */
  [12] = "#8AA174", /* blue    */
  [13] = "#8FC17E", /* magenta */
  [14] = "#A4AF8F", /* cyan    */
  [15] = "#c4c2c7", /* white   */

  /* special colors */
  [256] = "#140e20", /* background */
  [257] = "#c4c2c7", /* foreground */
  [258] = "#c4c2c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
