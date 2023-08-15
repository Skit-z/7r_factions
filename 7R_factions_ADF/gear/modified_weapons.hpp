class rhs_weap_m249_pip_S_vfg3;
class rhs_weap_m249;
class rhs_weap_m21s;
class rhs_weap_m14_rail_fiberglass;
class rhs_weap_m4_carryhandle_mstock_grip2;
class rhs_weap_m4_carryhandle_m203S;
class rhs_weap_l1a1_para;
class hgun_ACPC2_F;
class rhs_weap_m14ebrri;
class rhs_weap_svds;
class rhs_weap_ak105_zenitco01_b33;
class rhs_weap_ak74m_zenitco01_b33;
class rhs_weap_akm_zenitco01_b33;
class rhs_weap_rpk74m_npz;
class rhs_weap_ak74mr_gp25;
class hgun_Rook40_F;

class hgun_Rook40_F_sf : hgun_Rook40_F{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
			item = "muzzle_snds_l";
		};
    };
};

class rhs_weap_svds_scoped_sf : rhs_weap_svds{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhs_acc_pso1m21";
        };

        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
			item = "rhs_acc_tgpv2";
		};
    };
};

class rhs_weap_ak74mr_gp25_sf : rhs_weap_ak74mr_gp25{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_aco_grn_smg";
        };

        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
			item = "rhs_acc_ak5";
		};

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_wmx_bk";
		};
    };
};

class rhs_weap_rpk74m_npz_sf : rhs_weap_rpk74m_npz{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_aco_grn_smg";
        };

        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
			item = "rhs_acc_ak5";
		};

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhs_acc_2dpzenit";
		};
    };
};

class rhs_weap_ak105_zenitco01_b33_sf : rhs_weap_ak105_zenitco01_b33{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_aco_grn_smg";
        };

        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
			item = "rhs_acc_ak5";
		};

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_wmx_bk";
		};
    };
};

class rhs_weap_ak74m_zenitco01_b33_sf : rhs_weap_ak74m_zenitco01_b33{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_aco_grn_smg";
        };

        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
			item = "rhs_acc_ak5";
		};

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_wmx_bk";
		};
    };
};

class rhs_weap_akm_zenitco01_b33_sf : rhs_weap_akm_zenitco01_b33{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_aco_grn_smg";
        };

        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
			item = "rhs_acc_pbs1";
		};

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_wmx_bk";
		};
    };
};

class rhs_weap_svds_scoped : rhs_weap_svds{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhs_acc_pso1m21";
        };
    };
};

class rhs_weap_m14ebrri_sf : rhs_weap_m14ebrri{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_khs_blk";
        };

        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
			item = "rhsusf_acc_aac_762sdn6_silencer";
		};

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_m952v";
		};

        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_harris_bipod";
        };
    };
};

class hgun_ACPC2_F_sf : hgun_ACPC2_F{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
			item = "muzzle_snds_acp";
		};
    };
};

class rhs_weap_l1a1_para_sf : rhs_weap_l1a1_para{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsgref_acc_l1a1_l2a2";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
			item = "rhsgref_sdn6_suppressor";
		};
    };
};

class rhs_weap_m4_carryhandle_m203S_sf : rhs_weap_m4_carryhandle_m203S{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_holosight_blk_f";
        };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_m952v";
		};
    };
};

class rhs_weap_m4_carryhandle_mstock_sf : rhs_weap_m4_carryhandle_mstock_grip2{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_holosight_blk_f";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip2";
        };


		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_m952v";
		};
    };
};

class rhs_weap_m249_pip_S_grip : rhs_weap_m249_pip_S_vfg3{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_holosight_blk_f";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_kac_grip_saw_bipod";
        };

    };
};

class rhs_weap_m249_bipod : rhs_weap_m249{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_saw_bipod";
        };
    };
};

class rhs_weap_m21s_pkas_sf : rhs_weap_m21s{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhs_acc_pkas";
        };


		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhs_acc_2dpzenit";
		};
    };
};

class rhs_weap_m14_rail_fiberglass_scoped : rhs_weap_m14_rail_fiberglass{
    scope = 1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_khs_old";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_m14_bipod";
        };
    };
};