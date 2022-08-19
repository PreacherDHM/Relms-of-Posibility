#ifndef ROP_MATH_H
#define ROP_MATH_H
//Start Coding rop-math.h

namespace rop {
    // Vector 2 float
    struct fVec2 {
        float x;
        float y;
    };
    // Vector 2 int
    struct iVec2 {
        int x;
        int y;
    };
    
    //Adding Vectors
    fVec2 fVec2Add(fVec2 v1, fVec2 v2);
    iVec2 iVec2Add(iVec2 v1, iVec2 v2);
    
    //Subtracting Vectors
    fVec2 fVec2Sub(fVec2 v1, fVec2 v2);
    iVec2 iVec2Sub(iVec2 v1, iVec2 v2);
    
    //Multipling Vectors
    fVec2 fVec2Mult(fVec2 v1, fVec2 v2);
    iVec2 iVec2Mult(iVec2 v1, iVec2 v2);
    
    //Deviding Vectors
    fVec2 fVec2Devi(fVec2 v1, fVec2 v2);
    iVec2 iVec2Devi(iVec2 v1, iVec2 v2);

}
#endif
