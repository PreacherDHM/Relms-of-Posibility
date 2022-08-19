#include "rop-math.h"
#include <CommonLib.h>

//Player.h

//rop-math.h
rop::fVec2 rop::fVec2Add(rop::fVec2 v1, rop::fVec2 v2){
    float x = v1.x + v2.x;
    float y = v1.y + v2.y;
    return {x, y};
}
rop::iVec2 rop::iVec2Add(rop::iVec2 v1, rop::iVec2 v2){
    int x = v1.x + v2.x;
    int y = v1.y + v2.y;
    return {x, y};
}

rop::fVec2 rop::fVec2Sub(rop::fVec2 v1, rop::fVec2 v2){
    float x = v1.x - v2.x;
    float y = v1.y - v2.y;
    return {x, y};
}
rop::iVec2 rop::iVec2Sub(rop::iVec2 v1, rop::iVec2 v2){
    int x = v1.x - v2.x;
    int y = v1.y - v2.y;
    return {x, y};
}

rop::fVec2 rop::fVec2Mult(rop::fVec2 v1, rop::fVec2 v2){
    float x = v1.x * v2.x;
    float y = v1.y * v2.y;
    return {x, y};
}
rop::iVec2 rop::iVec2Mult(rop::iVec2 v1, rop::iVec2 v2){
    int x = v1.x * v2.x;
    int y = v1.y * v2.y;
    return {x, y};
}

rop::fVec2 rop::fVec2Devi(rop::fVec2 v1, rop::fVec2 v2){
    float x = v1.x / v2.x;
    float y = v1.y / v2.y;
    return {x, y};
}
rop::iVec2 rop::iVec2Devi(rop::iVec2 v1, rop::iVec2 v2){
    int x = v1.x / v2.x;
    int y = v1.y / v2.y;
    return {x, y};
}
