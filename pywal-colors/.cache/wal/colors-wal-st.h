const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#170909", /* black   */
  [1] = "#C15846", /* red     */
  [2] = "#BB8566", /* green   */
  [3] = "#DB9572", /* yellow  */
  [4] = "#BA7784", /* blue    */
  [5] = "#F0AD9D", /* magenta */
  [6] = "#F1B191", /* cyan    */
  [7] = "#c5c1c1", /* white   */

  /* 8 bright colors */
  [8]  = "#6d5959",  /* black   */
  [9]  = "#C15846",  /* red     */
  [10] = "#BB8566", /* green   */
  [11] = "#DB9572", /* yellow  */
  [12] = "#BA7784", /* blue    */
  [13] = "#F0AD9D", /* magenta */
  [14] = "#F1B191", /* cyan    */
  [15] = "#c5c1c1", /* white   */

  /* special colors */
  [256] = "#170909", /* background */
  [257] = "#c5c1c1", /* foreground */
  [258] = "#c5c1c1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
