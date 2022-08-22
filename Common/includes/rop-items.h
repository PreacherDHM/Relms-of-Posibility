#ifndef ROP_ITEMS_H
#define ROP_ITEMS_H
//Start Coding rop-itmes
#include "rop-entity.h"

#define AttackFunction(fnName) void fnName(void* weapon, entity** entitys)
#define ArtifactFunction(fnName) void fnName(void* artifact, entity** entity)
#define ArtifactProckCheckFunction(fnName) bool fnName(void **args, entity** entity)
#define OnUseFunction(fnName) void fnName(void **args, int count)


typedef void(*fnptr)(void **args, int count);
typedef bool(*bfnptr)(void **args, int count);
typedef void(*attackFnptr)(void* weapon, entity** entitys);

namespace rop{
    enum DamageType{
        slashing,
        blugening,
        persing,
        exsplosive,
    };
    enum ItemType {
        item,
        //Weapons Types
        sword,
        sheeld,
        axe,
        Throwables, //IE gernades
        //Armmor Types
        Helment,
        ChestPlate,
        Leggings,
        Boots,
        //Artifacts
        Artifact,
        //Blocks
        block
    };
    enum Mod {
        NightVision,
        OverCharge,
        Thorns,
        IronDome,
        TargetAcquired,
        StimBoost,
        Sober,
    };
    enum EffectType {
        Fire,
        Ice,
        Poisen,
    };
    struct Item{
        char* id;
        char* Name;
        char* sprite;
        ItemType type;

        fnptr OnUse;
    };
    //Weapons
    struct Sword{
        Item type;
        DamageType* damageType; 
        attackFnptr OnAttack;
        int attackSpeed;
        int damage;
        int stranth;
        int agility;
    };
    struct Sheeld{
        Item type;
        DamageType blockType;
        int damage;
        int stranth;
        int agility;
        int speed;
    };
    struct Bow{
        Item type;
        DamageType damageType;
        int range;
        int damage;
        int agility;
        int fireRate;
        int speed;
        attackFnptr OnAttack;
    };
    struct Axe{
        Item type;
        DamageType damageType;
        int damage;
        int stranth;
        int agility;
        int attackSpeet;
        attackFnptr OnAttack;
    };
    struct Throwable{
        Item type;
        DamageType damageType;
        int range;
        int damage;
        int agility;
        int speed;
        attackFnptr OnAttack;
    };
    
    //Armmor
    struct Helment{
        Item type;
        Mod* mods;
        int modCount;
        EffectType resistanceType;
        int protection;
        int intelagents;
    };
    struct ChestPlate{
        Item type;
        Mod* mods;
        int modCount;
        EffectType resistanceType;
        int protection;
        int stranth;
    };
    struct Leggings{
        Item type;
        Mod* mods;
        int modCount;
        EffectType resistanceType;
        int protection;
        int agility;
    };
    struct Boots{
        Item type;
        Mod* mods;
        int modCount;
        EffectType resistanceType;
        int protection;
        int speed;
    };

    //misc
    struct Artifact{
        Item type;
        void* ItemBase;
        int speed;
        int stranth;
        int agility;
        int intelagents;
        bfnptr ArtifactProckCheck;
    };
    struct Block{};
};
#endif
