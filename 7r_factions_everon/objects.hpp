class FlagCarrierCore;
class FlagCarrier : FlagCarrierCore {class EventHandlers;};

class 7r_everon_Flag : FlagCarrier{
	_general_macro = "7r_everon_Flag";
	author = "Skitz";
	displayName = "Flag (Everon)";
	scope = 2;
	scopeCurator = 2;
	class EventHandlers{
		init = "(_this select 0) setFlagTexture '\7r_factions\7R_factions_everon\data\7r_everon_flag_co.paa'";
	};
	//editorPreview = "\7r_factions\7R_factions_everon\data\previews\7r_everon_flag.jpg";
};