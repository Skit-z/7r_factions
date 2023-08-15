class Infantry
{
	name = "Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_lpdf_RifleSquad
	{
		name = "Squad (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_light";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7R_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7R_lpdf_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7R_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_lpdf_WeaponSquad
	{
		name = "Squad (Weapons)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_grenadier";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7R_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7R_lpdf_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7R_lpdf_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7R_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_lpdf_ATSquad
	{
		name = "Squad (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_03";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7R_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7R_lpdf_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7R_lpdf_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7R_lpdf_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7R_lpdf_anti_tank";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7R_lpdf_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_lpdf_RifleTeam
	{
		name = "Team (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_02";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_lpdf_MGTeam
	{
		name = "Team (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_lpdf_ATTeam
	{
		name = "Team (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7R_lpdf_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7R_lpdf_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_lpdf_EngineerTeam
	{
		name = "Team (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_engineer";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7R_lpdf_demolitions";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_lpdf_HQTeam
	{
		name = "Team (HQ)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_squad_leader";
			rank = "SERGEANT";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7R_lpdf_rto";
			rank = "CORPORAL";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_light";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_lpdf_RiflePair_01
	{
		name = "Pair (Rifle-1)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_02";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_lpdf_RiflePair_02
	{
		name = "Pair (Rifle-2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_lpdf_RiflePair_03
	{
		name = "Pair (Light)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_light"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_rifleman_light";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_lpdf_MGPair
	{
		name = "Pair (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_mg_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_lpdf_ATPair
	{
		name = "Pair (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_anti_tank_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_anti_tank";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_lpdf_EngineerPair
	{
		name = "Pair (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_engineer"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_demolitions";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_lpdf_HQPair
	{
		name = "Pair (Command)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7R_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7R_lpdf_Field_Officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7R_lpdf_rto";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
	};
};

class Motorized
{
	name = "Motorized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_lpdf_uaz_squad_hmg
	{
		name = "UAZ Squad (DShKM)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_lpdf_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_lpdf_uaz_dshkm";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_lpdf_uaz_dshkm";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_lpdf_uaz_squad_gmg
	{
		name = "UAZ Squad (AGS-30)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_lpdf_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_lpdf_uaz_ags30";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_lpdf_uaz_ags30";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_lpdf_uaz_squad_mixed
	{
		name = "UAZ Squad (DShKM/AGS-30)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_lpdf_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_lpdf_uaz_dshkm";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_lpdf_uaz_ags30";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_lpdf_gaz_squad
	{
		name = "GAZ-66 Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_lpdf_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_lpdf_gaz66";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
	};
};

class Mechanized
{
	name = "Mechanized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_lpdf_btr60_squad
	{
		name = "BTR-60PB Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_lpdf_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_lpdf_btr60";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_lpdf_btr60";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_lpdf_btr80_squad
	{
		name = "BTR-80 Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_lpdf_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_lpdf_btr80";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_lpdf_btr80";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_lpdf_brdm2_squad
	{
		name = "BRDM-2 Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_lpdf_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_lpdf_brdm2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_lpdf_brdm2_hq";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_lpdf_bmp1_squad
	{
		name = "BMP-1 Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_lpdf_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_lpdf_bmp1";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_lpdf_bmp1";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_lpdf_bmp2_squad
	{
		name = "BMP-2 Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_lpdf_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_lpdf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_lpdf_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_lpdf_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_lpdf_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_lpdf_bmp2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_lpdf_bmp2";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
};

class Armor
{
	name = "Armor"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_lpdf_t72_squad
	{
		name = "Tank Section (T-72)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_t72ba"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_t72bb";
			rank = "CORPORAL";
			position[] = {15,-15,0};
		};
	};
	class 7r_lpdf_t80_squad
	{
		name = "Tank Section (T-80)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_t80b"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_t80b";
			rank = "CORPORAL";
			position[] = {15,-15,0};
		};
	};
	class 7r_lpdf_mixed_tank_squad
	{
		name = "Tank Section (T-72/T-80)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_t72bb"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_t80b";
			rank = "CORPORAL";
			position[] = {15,-15,0};
		};
	};
	class 7r_lpdf_tank_platoon
	{
		name = "Tank Platoon"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_lpdf"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_lpdf_t72bb"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_lpdf_t80b";
			rank = "CORPORAL";
			position[] = {15,-15,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_lpdf_t72ba"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {-15,-15,0}; //Position in the formation 
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_lpdf_t80b";
			rank = "CORPORAL";
			position[] = {30,-30,0};
		};
	};
	
};