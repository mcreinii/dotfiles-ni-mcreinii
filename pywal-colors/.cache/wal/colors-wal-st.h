const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b0b1a", /* black   */
  [1] = "#686D94", /* red     */
  [2] = "#686D95", /* green   */
  [3] = "#7D83B1", /* yellow  */
  [4] = "#838AB9", /* blue    */
  [5] = "#949BD1", /* magenta */
  [6] = "#B4BDFD", /* cyan    */
  [7] = "#c2c2c5", /* white   */

  /* 8 bright colors */
  [8]  = "#5a5a6f",  /* black   */
  [9]  = "#686D94",  /* red     */
  [10] = "#686D95", /* green   */
  [11] = "#7D83B1", /* yellow  */
  [12] = "#838AB9", /* blue    */
  [13] = "#949BD1", /* magenta */
  [14] = "#B4BDFD", /* cyan    */
  [15] = "#c2c2c5", /* white   */

  /* special colors */
  [256] = "#0b0b1a", /* background */
  [257] = "#c2c2c5", /* foreground */
  [258] = "#c2c2c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
