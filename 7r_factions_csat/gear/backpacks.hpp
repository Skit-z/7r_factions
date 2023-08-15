class VSM_OGA_Backpack_Kitbag;
class B_Messenger_Coyote_F;
class B_FieldPack_cbr;
class B_Kitbag_rgr;
class B_FieldPack_ghex_F;
class B_Messenger_Olive_F;

class VSM_OGA_Backpack_Kitbag_RPK : VSM_OGA_Backpack_Kitbag
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportMagazines
	{
		BACK_MAG_XX(rhs_60Rnd_545X39_7N10_AK,5);
	};
};

class VSM_OGA_Backpack_Kitbag_MG : VSM_OGA_Backpack_Kitbag
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportMagazines
	{
		BACK_MAG_XX(150Rnd_762x54_Box_Tracer,5);
	};
};

class VSM_OGA_Backpack_Kitbag_AT : VSM_OGA_Backpack_Kitbag
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportMagazines
	{
		BACK_MAG_XX(RPG32_F,2);
	};
};

class B_Messenger_Coyote_F_medic : B_Messenger_Coyote_F{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportItems
	{
		BACK_ITEM_XX(Medikit,2);
	};
};

class B_FieldPack_cbr_ENG : B_FieldPack_cbr
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportItems
	{
		BACK_ITEM_XX(Toolkit,1);
		BACK_ITEM_XX(MineDetector,1);
		BACK_ITEM_XX(rhs_ec200_mag,1);
	};
};

class B_FieldPack_cbr_DEMO : B_FieldPack_cbr
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportItems
	{
		BACK_ITEM_XX(rhs_mine_tm62_mag,1);
		BACK_ITEM_XX(rhs_ec200_mag,3);
	};
};

class B_Kitbag_rgr_RPK : B_Kitbag_rgr
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportMagazines
	{
		BACK_MAG_XX(100Rnd_580x42_Mag_Tracer_F,5);
	};
};

class B_Kitbag_rgr_MG : B_Kitbag_rgr
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportMagazines
	{
		BACK_MAG_XX(rhs_100Rnd_762x54mmR_green,5);
	};
};

class B_Kitbag_rgr_AT : B_Kitbag_rgr
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportMagazines
	{
		BACK_MAG_XX(RPG32_F,2);
	};
};

class B_FieldPack_ghex_F_ENG : B_FieldPack_ghex_F
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportItems
	{
		BACK_ITEM_XX(Toolkit,1);
		BACK_ITEM_XX(MineDetector,1);
		BACK_ITEM_XX(rhs_ec200_mag,1);
	};
};

class B_FieldPack_ghex_F_DEMO : B_FieldPack_ghex_F
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportItems
	{
		BACK_ITEM_XX(rhs_mine_tm62_mag,1);
		BACK_ITEM_XX(rhs_ec200_mag,3);
	};
};

class B_Messenger_Olive_F_medic : B_Messenger_Olive_F{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;
	scopeCurator = 1;
	class TransportItems
	{
		BACK_ITEM_XX(Medikit,2);
	};
};