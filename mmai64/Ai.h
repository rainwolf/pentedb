/* DO NOT EDIT THIS FILE - it is machine generated */

#include "CPoint.h"
#include <jni.h>

class CAi
{
// Construction
public:
	CAi();

// Attributes
protected: 
CPoint p1xy[24], p2xy[24], p3xy[24];    
int *pfhn, *pFk, *pFh; //fuk[361][4], fhole[500][4], 
int *pTr, *pTm, *pTo, *pTi;
int fr, en, np, cp, cap1, turn, tourn, multipbem, breadth;
int bd[19][19], cc[20][7], p1d[24], p2d[24], p3d[24], cap2, cap3; 
int sco[7], exfl[20], exel[20], mxst, plv, extnt, extent;
int rotx[8], roty[8], rotf[8], maxscr;
int fhn, mvct, lvl, gf, ppd, vct, ferr, erfl, alpha, beta, a1, b1;
int ciel[20][7], mxnd[20], dx[8], dy[8], sec[3];
int mxvt[19], mxvf[19];

short *pAs, *pAt ;//,*pPbk, *pKbk, *pPNm, *pPOs, *pKNm, *pKOs;
short AScr[12768], ATbl[3772];//, PObk[12000], KObk[12000];

unsigned int *pHashY, HValX[20], HValY[20], 
  TableX[362], TableY[362];
short int *pHashS;
unsigned char *pHashD;

public:
int bmove, bscr, stopped, callbacks, Kgame;


// Operations
public:
int Move(JNIEnv *env, jobject obj, jmethodID mid,jmethodID mid2,
              jsize numMoves, jint *movesp, jint level, jint vct);

protected: 
int Tree(JNIEnv *env, jobject obj, jmethodID mid,jmethodID mid2);
int Eval(JNIEnv *env, jobject obj, jmethodID mid,jmethodID mid2, int x, int y);
int Score(CPoint pt);        
void Print();

// Implementation
public:
	virtual ~CAi();


protected:

};
