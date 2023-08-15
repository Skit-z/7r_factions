class rhs_weap_m24sws;

class rhs_weap_m24sws_scoped : rhs_weap_m24sws{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_m8541_low";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_harris_swivel";
        };
    };
};

class rhs_weap_m16a4_carryhandle;

class  rhs_weap_m16a4_handguard : rhs_weap_m16a4_carryhandle{class WeaponSlotsInfo;};

class 7r_weap_car_lsw : rhs_weap_m16a4_handguard{
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    baseWeapon = "7r_weap_car_lsw";
    displayName = "Colt C7 LSW";
    modes[] = {"Single","Single_AI","single_medium_optics1","single_far_optics2","FullAuto","fullauto_medium"};
    magazines[] = {"rhs_mag_100Rnd_556x45_M855_cmag"};
    class LinkedItems
    {
        class LinkedItemsPointer
        {
            slot = "pointerSlot";
            item = "rhs_acc_m16_handguard_m203";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "bipod_01_f_blk";
        };
    };
    class WeaponSlotsInfo : WeaponSlotsInfo{
        class UnderBarrelSlot{
            linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
            class compatibleItems{
                rhs_acc_m16_norail = 0;
                bipod_01_f_blk = 1;
            };
        };
    };
};