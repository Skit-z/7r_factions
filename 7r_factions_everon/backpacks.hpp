class B_FieldPack_green_F;

class rhsgref_hidf_alicepack;

class VSM_OGA_OD_Backpack_Kitbag;

class B_TacticalPack_blk;

class B_FieldPack_green_F_RPK : B_FieldPack_green_F
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeCurator = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportMagazines
	{
		BACK_MAG_XX(rhs_mag_100Rnd_556x45_M855_cmag_mixed,5);
	};
};
class rhsgref_hidf_alicepack_MG : rhsgref_hidf_alicepack
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeCurator = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportMagazines
	{
		BACK_MAG_XX(rhsgref_296Rnd_792x57_SmE_belt,2);
	};
};

class VSM_OGA_OD_Backpack_Kitbag_AT : VSM_OGA_OD_Backpack_Kitbag
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeCurator = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportMagazines
	{
		BACK_MAG_XX(rhs_mag_maaws_HEAT,2);
	};
};

class B_TacticalPack_blk_ENG : B_TacticalPack_blk
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeCurator = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportItems
	{
		BACK_ITEM_XX(Toolkit,1);
		BACK_ITEM_XX(MineDetector,1);
		BACK_ITEM_XX(rhs_ec200_mag,1);
	};
};

class B_TacticalPack_blk_DEMO : B_TacticalPack_blk
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeCurator = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportItems
	{
		BACK_ITEM_XX(rhs_mine_tm62_mag,1);
		BACK_ITEM_XX(rhs_ec200_mag,3);
	};
};