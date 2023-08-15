class FlagCarrierCore;
class FlagCarrier : FlagCarrierCore {class EventHandlers;};

class 7r_adf_Flag : FlagCarrier{
	_general_macro = "7r_adf_Flag";
	author = "Skitz";
	displayName = "Flag (Artemisa)";
	scope = 2;
	scopeCurator = 2;
	class EventHandlers{
		init = "(_this select 0) setFlagTexture '\7r_factions\7r_factions_adf\data\artemisa_flag.paa'";
	};
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_Flag.jpg";
};