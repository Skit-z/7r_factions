class Infantry_Winter
{
	name = "Infantry (Winter)"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_ena_winter_RifleSquad
	{
		name = "Squad (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_light";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_winter_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7R_ena_winter_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7R_ena_winter_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_ena_winter_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_ena_winter_WeaponSquad
	{
		name = "Squad (Weapons)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_grenadier";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_winter_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_winter_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7R_ena_winter_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_ena_winter_machinegunner";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7R_ena_winter_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_ena_winter_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_ena_winter_ATSquad
	{
		name = "Squad (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_03";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_winter_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_winter_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7R_ena_winter_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7R_ena_winter_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7R_ena_winter_anti_tank";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7R_ena_winter_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_ena_winter_RifleTeam
	{
		name = "Team (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_02";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_ena_winter_MGTeam
	{
		name = "Team (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_mg_assist";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_ena_winter_machinegunner";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_ena_winter_machinegunner";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_ena_winter_ATTeam
	{
		name = "Team (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_lat";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_winter_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_winter_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_ena_winter_EngineerTeam
	{
		name = "Team (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_engineer";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_winter_demolitions";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_ena_winter_HQTeam
	{
		name = "Team (HQ)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_squad_leader";
			rank = "SERGEANT";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_winter_rto";
			rank = "CORPORAL";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_light";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_ena_winter_RiflePair_01
	{
		name = "Pair (Rifle-1)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_02";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_winter_RiflePair_02
	{
		name = "Pair (Rifle-2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_winter_RiflePair_03
	{
		name = "Pair (Light)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_light"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_rifleman_light";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_winter_MGPair
	{
		name = "Pair (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_mg_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_ena_winter_machinegunner";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_winter_ATPair
	{
		name = "Pair (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_anti_tank_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_anti_tank";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_winter_EngineerPair
	{
		name = "Pair (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_engineer"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_demolitions";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_winter_HQPair
	{
		name = "Pair (Command)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena_w"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_winter_Field_Officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_winter_rto";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
	};
};