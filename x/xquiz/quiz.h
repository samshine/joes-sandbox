int nexthint();
void checkanswer();
int showanswer(DSPOBJ *dspobj);
void newproblem();
void showscrn(DSPOBJ *dspobj);
void help();
extern char **levels;
extern int nlevels;
void dolevel(DSPOBJ *b, int a);
extern LST *ans;
extern DSPOBJ *prompt;
extern int cury;
extern DSPOBJ *top;