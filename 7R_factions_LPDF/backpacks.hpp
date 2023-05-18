class UK3CB_B_Fieldpack;

class rhs_rpg_2;

class rhs_medic_bag;

class UK3CB_B_Largepack_Des;

class UK3CB_B_Fieldpack_RPK : UK3CB_B_Fieldpack
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportMagazines
	{
		BACK_MAG_XX(UK3CB_RPK74_60Rnd_545x39_G,5);
	};
};
class UK3CB_B_Fieldpack_MG : UK3CB_B_Fieldpack
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportMagazines
	{
		BACK_MAG_XX(rhs_100Rnd_762x54mmR,5);
	};
};

class rhs_rpg_2_AT : rhs_rpg_2
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportMagazines
	{
		BACK_MAG_XX(rhs_rpg7_PG7VL_mag,2);
	};
};

class rhs_medic_bag_med : rhs_medic_bag
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportItems
	{
		BACK_ITEM_XX(Medikit,2);
	};
};

class UK3CB_B_Largepack_Des_ENG : UK3CB_B_Largepack_Des
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportItems
	{
		BACK_ITEM_XX(Toolkit,1);
		BACK_ITEM_XX(MineDetector,1);
		BACK_ITEM_XX(rhs_ec200_mag,1);
	};
};

class UK3CB_B_Largepack_Des_DEMO : UK3CB_B_Largepack_Des
{
	scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
	class TransportItems
	{
		BACK_ITEM_XX(rhs_mine_tm62_mag,1);
		BACK_ITEM_XX(rhs_ec200_mag,3);
	};
};