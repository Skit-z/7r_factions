class Infantry
{
	name = "Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_csat_p_RifleSquad
	{
		name = "Squad (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_csat_p_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_csat_p_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_csat_p_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_csat_p_WeaponSquad
	{
		name = "Squad (Weapons)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_grenadier";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_csat_p_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_csat_p_machinegunner";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_csat_p_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_csat_p_autorifleman";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_csat_p_ATSquad
	{
		name = "Squad (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_03";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_csat_p_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_csat_p_autorifleman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_csat_p_anti_tank";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_csat_p_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_csat_p_RifleTeam
	{
		name = "Team (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_autorifleman";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_csat_p_MGTeam
	{
		name = "Team (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_mg_assist";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_machinegunner";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_machinegunner";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_csat_p_ATTeam
	{
		name = "Team (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_lat";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_csat_p_EngineerTeam
	{
		name = "Team (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_engineer";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_demolitions";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_csat_p_HQTeam
	{
		name = "Team (HQ)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_squad_leader";
			rank = "SERGEANT";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_rto";
			rank = "CORPORAL";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_light";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_csat_p_RiflePair_01
	{
		name = "Pair (Rifle-1)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_02";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_csat_p_RiflePair_02
	{
		name = "Pair (Rifle-2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_csat_p_RiflePair_03
	{
		name = "Pair (Light)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_light"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_light";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_csat_p_MGPair
	{
		name = "Pair (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_mg_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_machinegunner";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_csat_p_ATPair
	{
		name = "Pair (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_anti_tank_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_anti_tank";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_csat_p_EngineerPair
	{
		name = "Pair (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_engineer"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_demolitions";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_csat_p_HQPair
	{
		name = "Pair (Command)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_Field_Officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_rto";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
	};
};

class Motorized
{
	name = "Motorized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_csat_p_karatel_squad_hmg
	{
		name = "Karatel Squad (HMG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_csat_p_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_csat_p_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_csat_p_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_csat_p_karatel_hmg";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_csat_p_karatel_hmg";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_csat_p_karatel_squad_gmg
	{
		name = "Karatel Squad (GMG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_csat_p_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_csat_p_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_csat_p_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_csat_p_karatel_gmg";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_csat_p_karatel_gmg";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_csat_p_karatel_squad_mixed
	{
		name = "Karatel Squad (HMG/GMG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_csat_p_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_csat_p_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_csat_p_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_csat_p_karatel_hmg";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_csat_p_karatel_gmg";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_csat_p_tigr_squad
	{
		name = "Tigr Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_csat_p_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_csat_p_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_csat_p_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_csat_p_tigr_sts";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_csat_p_tigr";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_csat_p_kamaz_squad
	{
		name = "Kamaz Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_csat_p_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_csat_p_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_csat_p_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_csat_p_kamaz_transport";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
	};
};

class Mechanized
{
	name = "Mechanized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_csat_p_otk_arma_squad
	{
		name = "Otokar Arma Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_csat_p"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_csat_p_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_csat_p_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_csat_p_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_csat_p_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_csat_p_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_csat_p_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_csat_p_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_csat_p_otokar_arma";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_csat_p_otokar_arma";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
};