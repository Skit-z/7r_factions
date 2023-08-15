class B_Messenger_Coyote_F;

class rhs_rpg_2;

class rhs_medic_bag;

class rhs_rd54;

class B_Messenger_Coyote_F_RPK : B_Messenger_Coyote_F
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeCurator = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportMagazines
	{
		BACK_MAG_XX(rhs_60Rnd_545X39_AK_Green,5);
	};
};
class B_Messenger_Coyote_F_MG : B_Messenger_Coyote_F
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeCurator = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportMagazines
	{
		BACK_MAG_XX(rhs_100Rnd_762x54mmR,5);
	};
};

class rhs_rpg_2_AT : rhs_rpg_2
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeCurator = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportMagazines
	{
		BACK_MAG_XX(rhs_rpg7_PG7VL_mag,2);
	};
};

class rhs_medic_bag_med : rhs_medic_bag
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeArsenal = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	scopeCurator = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportItems
	{
		BACK_ITEM_XX(Medikit,2);
	};
};

class rhs_rd54_ENG : rhs_rd54
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

class rhs_rd54_DEMO : rhs_rd54
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