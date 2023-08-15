class rhsgref_helmet_M1_liner;
class H_beret_02;

class 7r_blp_m1_helmet : rhsgref_helmet_M1_liner{
	author = "Skitz";
	scope = 2;
	displayName = "M1 [BLP] (Liner)";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"7r_factions\7R_factions_blp\data\7r_blp_m1_co.paa"};
	picture = "\7r_factions\7R_factions_blp\data\icons\7r_blp_m1_helmet_ca.paa";
};

class 7r_beret_blp : H_beret_02
{
	author = "Skitz";
	scope = 2;
	displayName = "Beret [BLP]";
	picture = "\7r_factions\7R_factions_blp\data\icons\7r_blp_beret_ca.paa";

	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_blp\data\7r_beret_blp_co.paa"};
};