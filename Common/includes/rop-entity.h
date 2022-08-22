#ifndef ROP_ENTITY_H
#define ROP_ENTITY_H
//Start Coding rop-entity.h
struct entity{
    //entity id
    int id;
    //entity name
    char* name;
    //entity childeren
    entity** childeren;
    //entity parent
    entity* parent;
    //entity sprite
    char* spritePath;
};
#endif
