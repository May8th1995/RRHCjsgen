static const struct BattleTowerSpread sNormalModeBattle_ViridianForest_AceTrainer[] =
{
	{
		.species = SPECIES_CHARCADET,
		.nature = NATURE_BASHFUL,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Flame Body
		.item = ITEM_BERRY_JUICE,
		.moves =
		{
			MOVE_FIRESPIN,
			MOVE_NIGHTSHADE,
			MOVE_WILLOWISP,
			MOVE_CLEARSMOG,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GULPIN, 
		.nature = NATURE_BASHFUL,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Gluttony
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_BELCH,
			MOVE_SLUDGE,
			MOVE_BULLETSEED, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	
};

static const struct BattleTowerSpread sNormalModeBattle_Pewter_Falkner1[] =
{
	{
		.species = SPECIES_RUFFLET,
		.nature = NATURE_JOLLY,
		.level = 12,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Hustle
		.item = ITEM_BERRY_JUICE,
		.moves =
		{
			MOVE_AERIALACE,
			MOVE_ROCKTOMB,
			MOVE_ROCKSMASH,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WATTREL,
		.nature = NATURE_TIMID,
		.level = 14,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Volt Absorb
		.item = ITEM_BERRY_JUICE,
		.moves =
		{
			MOVE_FLASH,
			MOVE_AIRSLASH,
			MOVE_SLEEPTALK,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FLITTLE, 
		.nature = NATURE_BOLD,
		.level = 14,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Speed Boost
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_DISARMINGVOICE,
			MOVE_ROOST,
			MOVE_PSYBEAM, 
			MOVE_CALMMIND, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	
};

static const struct BattleTowerSpread sNormalBossBattle_MtMoon_Scientist[] =
//doubles
{
	{
		.species = SPECIES_THWACKEY,
		.nature = NATURE_ADAMANT,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Grassy Surge
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_RAZORLEAF, 
			MOVE_KNOCKOFF,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_VOLTORB_H,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Reckless
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_MAGICALLEAF,
			MOVE_SELFDESTRUCT,
			MOVE_SHOCKWAVE, 
			MOVE_HIDDENPOWER, //ice
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_BIBAREL,
		.nature = NATURE_CAREFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Simple
		.item = ITEM_GRASSY_SEED,
		.moves =
		{
			MOVE_QUICKATTACK,
			MOVE_AQUAJET, 
			MOVE_CURSE,
			MOVE_ROCKSMASH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SABLEYE,
		.nature = NATURE_CAREFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Prankster
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_WILLOWISP,
			MOVE_RECOVER, 
			MOVE_PROTECT,
			MOVE_FOULPLAY, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_MtMoon_Archer1[] =
//singles
{
	{
		.species = SPECIES_GLIMMET,
		.nature = NATURE_TIMID,
		.level = 18,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Toxic Debris
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_ANCIENTPOWER,
			MOVE_VENOSHOCK, 
			MOVE_MUDSHOT,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_HOUNDOUR,
		.nature = NATURE_TIMID,
		.level = 19,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Reckless
		.item = ITEM_WISE_GLASSES,
		.moves =
		{
			MOVE_INCINERATE,
			MOVE_SNARL,
			MOVE_PROTECT, 
			MOVE_HIDDENPOWER, //grass 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_MIGHTYENA,
		.nature = NATURE_JOLLY,
		.level = 21,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Strong Jaw
		.item = ITEM_BERRY_JUICE,
		.moves =
		{
			MOVE_BITE,
			MOVE_ICEFANG, 
			MOVE_HOWL,
			MOVE_FIREFANG, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	}
};


static const struct BattleTowerSpread sNormalBossBattle_Route16_Biker1[] =
{
	{
		.species = SPECIES_MIENSHAO,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv= 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY inner Focus
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_CLOSECOMBAT, 
			MOVE_KNOCKOFF,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_HELIOLISK,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv= 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sand Veil
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_BOOMBURST, 
			MOVE_WEATHERBALL,
			MOVE_SURF,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_DUGTRIO_A,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv= 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_IRONHEAD, 
			MOVE_SUCKERPUNCH, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route16_Biker2[] =
{
	{
		.species = SPECIES_DUGTRIO,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv= 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Arena Trap
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_STONEEDGE, 
			MOVE_AERIALACE, 
			MOVE_SUCKERPUNCH,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_HARIYAMA,
		.nature = NATURE_CAREFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv= 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Thick Fat
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_KNOCKOFF, 
			MOVE_DRAINPUNCH,
			MOVE_HEAVYSLAM,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route16_Biker3[] =
{
	{
		.species = SPECIES_DRACOZOLT,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv= 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Rush
		.item = ITEM_MAGNET,
		.moves =
		{
			MOVE_BOLTBEAK,
			MOVE_DRAGONCLAW, 
			MOVE_EARTHQUAKE, 
			MOVE_FIREBLAST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route16_Biker4[] =
{
	{
		.species = SPECIES_STUNFISK,
		.nature = NATURE_CALM,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv= 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Veil
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_THUNDERWAVE, 
			MOVE_EARTHPOWER,
			MOVE_VOLTSWITCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_DRACOVISH,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv= 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Rush
		.item = ITEM_MYSTIC_WATER,
		.moves =
		{
			MOVE_FISHIOUSREND,
			MOVE_DRAGONCLAW, 
			MOVE_PSYCHICFANGS,
			MOVE_CRUNCH,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_BEEDRILL,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv= 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Adaptability Mega
		.item = ITEM_BEEDRILLITE,
		.moves =
		{
			MOVE_UTURN,
			MOVE_DRILLRUN, 
			MOVE_POISONJAB, 
			MOVE_PURSUIT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_GRENINJA,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv= 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Protean
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_UTURN,
			MOVE_HYDROPUMP, 
			MOVE_GUNKSHOT, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_ARON,
		.nature = NATURE_BASHFUL,
		.level = 1,
		.hpIv = 0,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sturdy
		.item = ITEM_SHELL_BELL,
		.moves =
		{
			MOVE_ENDEAVOR,
			MOVE_NONE, 
			MOVE_NONE, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route16_Biker5[] =
{
	{
		.species = SPECIES_ACCELGOR,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv= 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_BUGBUZZ, 
			MOVE_FOCUSBLAST,
			MOVE_SLUDGEBOMB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_GIGALITH,
		.nature = NATURE_CAREFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv= 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Force
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_STONEEDGE, 
			MOVE_EXPLOSION,
			MOVE_BODYPRESS,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_ROSERADE,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_WEATHERBALL, 
			MOVE_HIDDENPOWER, //fire
			MOVE_SLEEPPOWDER,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_HOUNDSTONE,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv= 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Rush
		.item = ITEM_SPELL_TAG,
		.moves =
		{
			MOVE_LASTRESPECTS,
			MOVE_BODYPRESS, 
			MOVE_FIREFANG,
			MOVE_ICEFANG,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route16_Biker6[] =
{
	{
		.species = SPECIES_SWAMPERT,
		.nature = NATURE_SASSY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Damp
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_FLIPTURN, 
			MOVE_EARTHQUAKE,
			MOVE_YAWN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_REVAVROOM,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Filter
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_SHIFTGEAR,  
			MOVE_IRONHEAD,  
			MOVE_GUNKSHOT, 
			MOVE_HIGHHORSEPOWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SCIZOR,
		.nature = NATURE_ADAMANT,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Technician Mega
		.item = ITEM_SCIZORITE,
		.moves =
		{
			MOVE_UTURN,
			MOVE_BULLETPUNCH, 
			MOVE_ROCKSMASH,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_CACTURNE,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Rush
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_NEEDLEARM,
			MOVE_SUCKERPUNCH, 
			MOVE_KNOCKOFF, 
			MOVE_SWORDSDANCE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Route18_Biker1[] =
{
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 4,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sturdy
		.item = ITEM_CUSTAP_BERRY, 
		.moves =
		{
			MOVE_THUNDER,
			MOVE_VOLTSWITCH, 
			MOVE_EXPLOSION,
			MOVE_BODYPRESS,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_WHISCASH,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Water Bubble
		.item = ITEM_RINDO_BERRY, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_WATERFALL, 
			MOVE_EARTHQUAKE,
			MOVE_BOUNCE,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 4,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_YACHE_BERRY, 
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_DRAGONPULSE, 
			MOVE_HYDROPUMP,
			MOVE_EARTHQUAKE,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_STARMIE,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Analytic
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLIPTURN,
			MOVE_HYDROPUMP, 
			MOVE_THUNDER,
			MOVE_PSYCHIC,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route18_Trainer1[] = 
{
	{
		.species = SPECIES_CRAMORANT,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY gulp missile
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SURF,
			MOVE_HURRICANE, 
			MOVE_ICEBEAM,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_DECIDUEYE,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tinted Lens
		.item = ITEM_SPELL_TAG, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_HURRICANE, 
			MOVE_SPIRITSHACKLE,
			MOVE_LEAFBLADE,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_MANTINE,
		.nature = NATURE_MODEST,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_SHARP_BEAK, 
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_ICEBEAM, 
			MOVE_FLIPTURN,
			MOVE_HURRICANE,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_NIDOQUEEN,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_THUNDER,
			MOVE_EARTHPOWER, 
			MOVE_SLUDGEWAVE,
			MOVE_BUBBLEBEAM,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route18_Trainer2[] = 
//make this dragon tamer doubles
{
	{
		.species = SPECIES_PIKACHU_SURFING,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Lightnignrod
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_BOUNCYBUBBLE,
			MOVE_THUNDER, 
			MOVE_FAKEOUT,
			MOVE_ELECTROWEB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_MILOTIC,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Competitive
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_BOUNCYBUBBLE,
			MOVE_ICEBEAM, 
			MOVE_MIRRORCOAT,
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_LAPRAS,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Water Absorb Liquid Voice
		.item = ITEM_LAPRASITE, 
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_DRAGONPULSE, 
			MOVE_THUNDER,
			MOVE_FREEZEDRY,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_GOODRA_H,
		.nature = NATURE_MODEST,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Gooey
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_SURF,
			MOVE_DRAGONPULSE, 
			MOVE_FLASHCANNON,
			MOVE_THUNDER,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	}
}; 

static const struct BattleTowerSpread sNormalBossBattle_Route18_Trainer3[] = 
//make ace trainer
{
	{
		.species = SPECIES_DRAGAPULT,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Cursed Body
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_THUNDER, 
			MOVE_DRACOMETEOR,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_KILOWATTREL,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Volt Absorb
		.item = ITEM_SHARP_BEAK, 
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_THUNDER, 
			MOVE_WEATHERBALL,
			MOVE_VOLTSWITCH,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_PINSIR,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Hyper Cutter
		.item = ITEM_PINSIRITE, 
		.moves =
		{
			MOVE_XSCISSOR,
			MOVE_DOUBLEEDGE, 
			MOVE_QUICKATTACK,
			MOVE_CLOSECOMBAT,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_OMASTAR,
		.nature = NATURE_MODEST,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_WHITE_HERB, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_HYDROPUMP, 
			MOVE_ICEBEAM,
			MOVE_POWERGEM,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Route13_Trainer1[] = 
//drought in overworld, bird keeper
{
	{
		.species = SPECIES_GLISCOR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 0,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Poison Heal
		.item = ITEM_TOXIC_ORB, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_EARTHQUAKE, 
			MOVE_STEALTHROCK,
			MOVE_DUALWINGBEAT,
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze Tough Claws
		.item = ITEM_CHARIZARDITE_X,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_FLAREBLITZ, 
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_TOGEKISS,
		.nature = NATURE_MODEST,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Serene Grace
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_AIRSLASH,
			MOVE_FIREBLAST, 
			MOVE_THUNDERWAVE, 
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_TROPIUS,
		.nature = NATURE_ADAMANT,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_GROWTH,
			MOVE_GIGADRAIN, 
			MOVE_WEATHERBALL, 
			MOVE_DRAGONPULSE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route13_Trainer2[] = 
//drought in overworld 
{
	{
		.species = SPECIES_SHIFTRY,
		.nature = NATURE_ADAMANT,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_SOLARBLADE, 
			MOVE_KNOCKOFF, 
			MOVE_PARTINGSHOT, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_GOODRA,
		.nature = NATURE_MODEST,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv= 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sap Sipper
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_DRACOBARRAGE, 
			MOVE_SLUDGEBOMB, 
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_ESPEON,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Bounce
		.item = ITEM_TWISTED_SPOON,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_PSYCHIC, 
			MOVE_WEATHERBALL, 
			MOVE_SHADOWBALL, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_ARCANINE_H,
		.nature = NATURE_ADAMANT,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_HEADSMASH,
			MOVE_SOLARBEAM, 
			MOVE_FLAREBLITZ, 
			MOVE_ACCELEROCK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_ALCREMIE_STRAWBERRY,
		.nature = NATURE_BOLD,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sweet Veil
		.item = ITEM_ALCREMITE,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_MYSTICALFIRE, 
			MOVE_MISTYEXPLOSION, 
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route13_Trainer3[] = 
//drought in overworld 
{
	{
		.species = SPECIES_TANGROWTH,
		.nature = NATURE_TIMID,
		.level =  THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_SOLARBEAM,
			MOVE_HIDDENPOWER, 
			MOVE_SLUDGEBOMB, 
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_CHANSEY,
		.nature = NATURE_BOLD,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
				.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Natural Cure
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_THUNDERWAVE,
			MOVE_SEISMICTOSS, 
			MOVE_TELEPORT, 
			MOVE_SOFTBOILED, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_CHANDELURE,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Shadow Tag
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_SOLARBEAM, 
			MOVE_SHADOWBALL, 
			MOVE_TRICK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_ALTARIA,
		.nature = NATURE_BOLD,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Natural Cure
		.item = ITEM_ALTARIANITE,
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_HYPERVOICE, 
			MOVE_ROOST, 
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route13_Trainer4[] =
//first doubles
{
	{
		.species = SPECIES_CHERRIM,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flower Gift 1.5x speed and attack in sun 
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_PETALBLIZZARD,
			MOVE_SAFEGUARD, //needs this to trick AI into thinking its a support mon so it clicks petal blizzard
			MOVE_XSCISSOR,
			MOVE_RETURN, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 4,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Chlorophyll
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_PETALBLIZZARD,
			MOVE_SAFEGUARD, //needs this to trick AI into thinking its a support mon so it clicks petal blizzard
			MOVE_EARTHPOWER,
			MOVE_WEATHERBALL, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_FLORGES,
		.nature = NATURE_CALM,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 4,
		.spDefEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Natural Cure
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_PETALBLIZZARD,
			MOVE_MOONBLAST, 
			MOVE_SAFEGUARD, //needs this to trick AI into thinking its a support mon so it clicks petal blizzard
			MOVE_HIDDENPOWER, //fire
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},

};

static const struct BattleTowerSpread sNormalBossBattle_Route13_Trainer5[] =
//second doubles
{
	{
		.species = SPECIES_BOUFFALANT,
		.nature = NATURE_ADAMANT,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sap Sipper
		.item = ITEM_NORMAL_GEM, 
		.moves =
		{
			MOVE_HEADCHARGE,
			MOVE_HIGHHORSEPOWER, 
			MOVE_ZENHEADBUTT,
			MOVE_CLOSECOMBAT, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_ZEBSTRIKA,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sap Sipper
		.item = ITEM_MAGNET, 
		.moves =
		{
			MOVE_BOLTSTRIKE,
			MOVE_FLAREBLITZ, 
			MOVE_LOWKICK,
			MOVE_RETURN, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route13_Trainer6[] =
//drought overworld
{
	{
		.species = SPECIES_RHYPERIOR,
		.nature = NATURE_CAREFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Solid Rock
		.item = ITEM_RINDO_BERRY, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_STONEEDGE, 
			MOVE_EARTHQUAKE,
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_GARDEVOIR,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Trace
		.item = ITEM_LUM_BERRY, 
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_PSYCHIC, 
			MOVE_MOONBLAST,
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_RAPIDASH,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Blazing Soul
		.item = ITEM_CHARCOAL, 
		.moves =
		{
			MOVE_FIRELASH,
			MOVE_SOLARBLADE, 
			MOVE_JUMPKICK,
			MOVE_HIGHHORSEPOWER, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_DRAGAPULT,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 4,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Cursed Body
		.item = ITEM_SPELL_TAG, 
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_DRAGONDARTS, 
			MOVE_FIREBLAST,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route13_Trainer7[] =
//drought overworld 
{
	{
		.species = SPECIES_CRUSTLE,
		.nature = NATURE_ADAMANT,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sturdy
		.item = ITEM_CUSTAP_BERRY, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_SPIKES, 
			MOVE_STONEEDGE,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_LEAVANNY,
		.nature = NATURE_ADAMANT,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Chlorophyll
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SOLARBLADE,
			MOVE_SWORDSDANCE, 
			MOVE_XSCISSOR,
			MOVE_SACREDSWORD, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_CAMERUPT,
		.nature = NATURE_MODEST,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Solid Rock
		.item = ITEM_CAMERUPTITE, 
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_EARTHPOWER, 
			MOVE_SOLARBEAM,
			MOVE_ANCIENTPOWER, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_MAMOSWINE,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Thick Fat
		.item = ITEM_SOFT_SAND, 
		.moves =
		{
			MOVE_HEADLONGRUSH,
			MOVE_ICICLECRASH, 
			MOVE_ICESHARD,
			MOVE_ROCKTOMB, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},

};

static const struct BattleTowerSpread sNormalBossBattle_Route13_Trainer8[] =
//drought overworld
{
	{
		.species = SPECIES_EXEGGUTOR,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SLEEPPOWDER,
			MOVE_SOLARBEAM, 
			MOVE_PSYSHOCK,
			MOVE_WEATHERBALL, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_ARCHEOPS,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defeatist
		.item = ITEM_SHARP_BEAK, 
		.moves =
		{
			MOVE_BRAVEBIRD,
			MOVE_HEADSMASH, 
			MOVE_EARTHQUAKE,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_EMBOAR,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Bull Rush
		.item = ITEM_CHARCOAL, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_CLOSECOMBAT, 
			MOVE_WILDCHARGE,
			MOVE_SOLARBEAM, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},	
	{
		.species = SPECIES_JOLTEON,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Volt Absorb
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_THUNDERBOLT, 
			MOVE_WEATHERBALL,
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_POKE_BALL,

	}
};


static const struct BattleTowerSpread sNormalBossBattle_Route12_Electrician[] = 
//hail overworld
{
	{
		.species = SPECIES_PILOSWINE,
		.nature = NATURE_CAREFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Thick Fat
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_EARTHQUAKE, 
			MOVE_ROAR, 
			MOVE_ICICLECRASH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_HELIOLISK,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dry Skin
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_SURF, 
			MOVE_WEATHERBALL,
			MOVE_VOLTSWITCH,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_NIDOQUEEN,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTHPOWER,
			MOVE_BLIZZARD, 
			MOVE_FIREBLAST,
			MOVE_THUNDERBOLT,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_YANMEGA,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Tinted Lens
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BUGBUZZ,
			MOVE_AIRSLASH, 
			MOVE_UTURN, 
			MOVE_GIGADRAIN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_WALREIN,
		.nature = NATURE_BOLD,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Ice Body
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE, 
			MOVE_PROTECT, 
			MOVE_TOXIC, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route12_Cooltrainer[] = 
//hail overworld
{
	{
		.species = SPECIES_DARMANITAN_G,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Gorilla Tactics
		.item = ITEM_CHOICE_SCARF, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_FLAREBLITZ, 
			MOVE_ICICLECRASH,
			MOVE_EARTHQUAKE,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SANDSLASH_A,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Slush Rush
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_EARTHQUAKE, 
			MOVE_IRONHEAD,
			MOVE_ICICLECRASH,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_CONKELDURR,
		.nature = NATURE_CAREFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Iron Fist
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DRAINPUNCH,
			MOVE_MACHPUNCH, 
			MOVE_KNOCKOFF, 
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route12_Fisherman[] = 
//hail overworld
//change this trainer class
{
	{
		.species = SPECIES_FROSLASS,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Snow Cloak
		.item = ITEM_LIGHT_CLAY, 
		.moves =
		{
			MOVE_AURORAVEIL,
			MOVE_BLIZZARD, 
			MOVE_SHADOWBALL,
			MOVE_FREEZEDRY,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_ARCTOZOLT,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Slush Rush
		.item = ITEM_MAGNET,
		.moves =
		{
			MOVE_BOLTBEAK,
			MOVE_BLIZZARD, 
			MOVE_LOWKICK, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Pewter_BrockRematch[] =
//sandstorm overworld
{
	{
		.species = SPECIES_GREATTUSK,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Protosynthesis
		.item = ITEM_BOOSTER_ENERGY, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_CLOSECOMBAT, 
			MOVE_HEADLONGRUSH,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_OMASTAR,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Weak Armor
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_METEORBEAM, 
			MOVE_SURF, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_SANDSLASH,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Rush
		.item = ITEM_SOFT_SAND,
		.moves =
		{
			MOVE_RAPIDSPIN,
			MOVE_EARTHQUAKE, 
			MOVE_STONEEDGE,
			MOVE_XSCISSOR,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
	},
	{
		.species = SPECIES_TYRANITAR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Stream
		.item = ITEM_WEAKNESS_POLICY, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_STONEEDGE, 
			MOVE_FIREPUNCH,
			MOVE_CRUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	},
	{
		.species = SPECIES_ARCANINE_H,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_HEADSMASH, 
			MOVE_WILDCHARGE, 
			MOVE_EXTREMESPEED, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_AERODACTYL,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Pressure Tough Claws Mega
		.item = ITEM_AERODACTYLITE, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_STONEEDGE, 
			MOVE_EARTHQUAKE,
			MOVE_DUALWINGBEAT, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
	},
};

static const struct BattleTowerSpread sNormalBossBattle_Cerulean_MistyRematch[] =
//rain overworld
{
	{
		.species = SPECIES_PALAFIN,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Zero To Hero
		.item = ITEM_MYSTIC_WATER,
		.moves =
		{
			MOVE_FLIPTURN,
			MOVE_WAVECRASH, 
			MOVE_JETPUNCH,
			MOVE_DRAINPUNCH,
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_KINGDRA,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_SNIPESHOT,
			MOVE_DRAGONPULSE, 
			MOVE_HURRICANE,
			MOVE_ICEBEAM,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SEISMITOAD,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_WAVECRASH,
			MOVE_EARTHQUAKE, 
			MOVE_POWERWHIP,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_GYARADOS,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31, 
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate, Mold Breaker Mega
		.item = ITEM_GYARADOSITE, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_WATERFALL, 
			MOVE_CRUNCH,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_FERROTHORN,
		.nature = NATURE_RELAXED,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Iron Barbs
		.item = ITEM_ROCKY_HELMET, 
		.moves =
		{
			MOVE_LEECHSEED,
			MOVE_GYROBALL, 
			MOVE_POWERWHIP,
			MOVE_THUNDERWAVE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_GOREBYSS,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dazzling
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_SURF, 
			MOVE_ICEBEAM,
			MOVE_MOONBLAST, 
		},
		.ball = BALL_TYPE_LOVE_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Vermilion_LtSurgeRematch[] =
//auto electric terrain
{
	{
		.species = SPECIES_IRONTREADS,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Quark Drive
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_IRONHEAD, 
			MOVE_STEALTHROCK,
			MOVE_VOLTSWITCH,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
	},
	{
		.species = SPECIES_BELLIBOLT,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Electromorphosis
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PARABOLICCHARGE,
			MOVE_HIDDENPOWER, 
			MOVE_MUDDYWATER, 
			MOVE_VOLTSWITCH, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
	},
	{
		.species = SPECIES_ROTOM_WASH,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_RISINGVOLTAGE, 
			MOVE_SCALD,
			MOVE_HIDDENPOWER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_PAWMOT,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Iron Fist
		.item = ITEM_PUNCHING_GLOVE, 
		.moves =
		{
			MOVE_PLASMAFISTS,
			MOVE_CLOSECOMBAT, 
			MOVE_MACHPUNCH,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_MANECTRIC,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Intimidate Mega Intimidate
		.item = ITEM_MANECTITE, 
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_RISINGVOLTAGE, 
			MOVE_FLAMETHROWER, 
			MOVE_HIDDENPOWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	},
	{
		.species = SPECIES_IRONHANDS,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Quark Drive
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_PLASMAFISTS,
			MOVE_DRAINPUNCH, 
			MOVE_ICEPUNCH,
			MOVE_FAKEOUT, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
	},
};

static const struct BattleTowerSpread sNormalBossBattle_Fuschia_Koga[] =
{
	{
		.species = SPECIES_SWELLOW,
		.nature = NATURE_TIMID,
		.level = 67,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Aerilate
		.item = ITEM_CHOICE_SPECS, 
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_UTURN, 
			MOVE_NONE,
			MOVE_NONE,  
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_ACCELGOR,
		.nature = NATURE_TIMID,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_BUGBUZZ,
			MOVE_UTURN, 
			MOVE_FOCUSBLAST, 
			MOVE_SLUDGEBOMB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_GRENINJA,
		.nature = NATURE_TIMID,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Battle Bond
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_WATERSHURIKEN, 
			MOVE_DARKPULSE, 
			MOVE_ICEBEAM,
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_DRAPION,
		.nature = NATURE_ADAMANT,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY SNIPER
		.item = ITEM_CHOICE_SCARF, 
		.moves =
		{
			MOVE_WICKEDBLOW,
			MOVE_CROSSPOISON, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_IRONVALIANT,
		.nature = NATURE_TIMID,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Quark Drive
		.item = ITEM_BOOSTER_ENERGY, 
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_SPIRITBREAK, 
			MOVE_KNOCKOFF,
			MOVE_LIQUIDATION, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_TOXTRICITY,
		.nature = NATURE_TIMID,
		.level = 68,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Punk Rock
		.item = ITEM_TOXTRICITITE, 
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_OVERDRIVE, 
			MOVE_SLUDGEBOMB,
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_CHERISH_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Celadon_ErikaRe[] =
//grassy terrain overworld
{
	{
		.species = SPECIES_TSAREENA,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Striker
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_TROPKICK,
			MOVE_TRIPLEAXEL, 
			MOVE_HIGHJUMPKICK,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_MEOWSCARADA,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Protean
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_UTURN,
			MOVE_KNOCKOFF,
			MOVE_FLOWERTRICK, 
			MOVE_TRIPLEAXEL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_HAWLUCHA,
		.nature = NATURE_ADAMANT,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Unburden
		.item = ITEM_GRASSY_SEED,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_CLOSECOMBAT, 
			MOVE_ACROBATICS, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
	},
	{
		.species = SPECIES_BELLOSSOM,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_QUIVERDANCE,
			MOVE_SLEEPPOWDER, 
			MOVE_FIERYDANCE,
			MOVE_GIGADRAIN, 
		},
		.ball = BALL_TYPE_LOVE_BALL,

	},
	{
		.species = SPECIES_LILLIGANT_H,
		.nature = NATURE_JOLLY,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Hustle
		.item = ITEM_WIDE_LENS, 
		.moves =
		{
			MOVE_VICTORYDANCE,
			MOVE_LEAFBLADE, 
			MOVE_CLOSECOMBAT,
			MOVE_ICESPINNER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow, Thick Fat mega
		.item = ITEM_VENUSAURITE, 
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_EARTHPOWER, 
			MOVE_SYNTHESIS,
			MOVE_SLUDGEBOMB,
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Seafoam_Pryce1[] =
//perma hail 
{
	{
		.species = SPECIES_JYNX,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Skill Link
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_LOVELYKISS,
			MOVE_PSYSTRIKE, 
			MOVE_FREEZEDRY,
			MOVE_FOCUSBLAST,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_CLOYSTER,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Skill Link
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_ICICLESPEAR, 
			MOVE_WATERFALL, 
			MOVE_ROCKBLAST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_WALREIN,
		.nature = NATURE_CALM,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Fur Coat
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_REST, 
			MOVE_SLEEPTALK, 
			MOVE_ICEBEAM,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_BAXCALIBUR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Thermal Exchange
		.item = ITEM_DRAGON_FANG, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_ICICLECRASH, 
			MOVE_GLAIVERUSH,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_ARCTOZOLT,
		.nature = NATURE_LONELY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Slush Rush
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_BOLTBEAK,
			MOVE_ICICLECRASH, 
			MOVE_FREEZEDRY,
			MOVE_LOWKICK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_GLALIE,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Ice Body, Refrigerate Mega
		.item = ITEM_GLALITITE, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_QUICKATTACK, 
			MOVE_EARTHQUAKE,
			MOVE_DOUBLEEDGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Seafoam_Pryce2[] =
//perma hail 
{
	{
		.species = SPECIES_JYNX,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Skill Link
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_LOVELYKISS,
			MOVE_PSYSTRIKE, 
			MOVE_FREEZEDRY,
			MOVE_FOCUSBLAST,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_CLOYSTER,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Skill Link
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_ICICLESPEAR, 
			MOVE_WATERFALL, 
			MOVE_ROCKBLAST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_WALREIN,
		.nature = NATURE_CALM,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Fur Coat
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_REST, 
			MOVE_SLEEPTALK, 
			MOVE_ICEBEAM,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_BAXCALIBUR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Thermal Exchange
		.item = ITEM_DRAGON_FANG, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_ICICLECRASH, 
			MOVE_GLAIVERUSH,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_ARCTOZOLT,
		.nature = NATURE_LONELY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Slush Rush
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_BOLTBEAK,
			MOVE_ICICLECRASH, 
			MOVE_FREEZEDRY,
			MOVE_LOWKICK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_GLALIE,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Ice Body, Refrigerate Mega
		.item = ITEM_GLALITITE, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_QUICKATTACK, 
			MOVE_EARTHQUAKE,
			MOVE_DOUBLEEDGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Seafoam_Pryce3[] =
//perma hail
{
	{
		.species = SPECIES_JYNX,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Skill Link
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_LOVELYKISS,
			MOVE_PSYSTRIKE, 
			MOVE_FREEZEDRY,
			MOVE_FOCUSBLAST,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_CLOYSTER,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Skill Link
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_ICICLESPEAR, 
			MOVE_WATERFALL, 
			MOVE_ROCKBLAST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_WALREIN,
		.nature = NATURE_CALM,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Fur Coat
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_REST, 
			MOVE_SLEEPTALK, 
			MOVE_ICEBEAM,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_BAXCALIBUR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Thermal Exchange
		.item = ITEM_DRAGON_FANG, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_ICICLECRASH, 
			MOVE_GLAIVERUSH,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_ARCTOZOLT,
		.nature = NATURE_LONELY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Slush Rush
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_BOLTBEAK,
			MOVE_ICICLECRASH, 
			MOVE_FREEZEDRY,
			MOVE_LOWKICK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_GLALIE,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Ice Body, Refrigerate Mega
		.item = ITEM_GLALITITE, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_QUICKATTACK, 
			MOVE_EARTHQUAKE,
			MOVE_DOUBLEEDGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Cinnabar_AceTrainer1[] =
//Sun Overworld
//Blaine Gym
{
	{
		.species = SPECIES_MIENSHAO,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Inner Focus
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_CLOSECOMBAT, 
			MOVE_UTURN,
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_ARCANINE_H,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_CHARCOAL, 
		.moves =
		{
			MOVE_HEADSMASH,
			MOVE_FLAREBLITZ, 
			MOVE_WILDCHARGE,
			MOVE_ACCELEROCK, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_RHYPERIOR,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Solid Rock
		.item = ITEM_HARD_STONE,
		.moves =
		{
			MOVE_STONEEDGE, 
			MOVE_EARTHQUAKE, 
			MOVE_FIREPUNCH, 
			MOVE_MEGAHORN, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_CENTISKORCH,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flash Fire, Mountaineer Mega
		.item = ITEM_CENTISKITE, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_LEECHLIFE, 
			MOVE_POWERWHIP,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_SUNFLORA,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_GROWTH,
			MOVE_SOLARBEAM, 
			MOVE_FLAMETHROWER,
			MOVE_HIDDENPOWER,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Cinnabar_AceTrainer2[] =
//Blaine Gym
//Sun overworld
{
	{
		.species = SPECIES_LYCANROC,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Steadfast
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_ENDEAVOR, 
			MOVE_ACCELEROCK,
			MOVE_ROCKTOMB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_DARMANITAN_G,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Zen Mode
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_UTURN, 
			MOVE_ICICLECRASH,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_GLISCOR,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Poison Heal
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_SWORDSDANCE, 
			MOVE_EARTHQUAKE, 
			MOVE_DUALWINGBEAT, 
			MOVE_FACADE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_URSALUNA,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flame Orb
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_HEADLONGRUSH,
			MOVE_FACADE, 
			MOVE_CLOSECOMBAT, 
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Solar Power
		.item = ITEM_FIRIUM_Z, 
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_SOLARBEAM, 
			MOVE_AIRSLASH,
			MOVE_SCORCHINGSANDS,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Cinnabar_AceTrainer3[] =
//Blaine Gym
//Sun Overworld
//Doubles
{
	{
		.species = SPECIES_NIDOKING,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_EARTHPOWER,
			MOVE_SLUDGEWAVE, 
			MOVE_FIREBLAST,
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_NOIVERN,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Infiltrator
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_HEATWAVE,
			MOVE_TAILWIND, 
			MOVE_AEROBLAST,
			MOVE_DRAGONPULSE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_BRAVIARY_H,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tinted Lens
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_AIRSLASH, 
			MOVE_HEATWAVE, 
			MOVE_SHADOWBALL, 
			MOVE_ESPERWING, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_EXCADRILL,
		.nature = NATURE_ADAMANT,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Mold Breaker
		.item = ITEM_SOFT_SAND,
		.moves =
		{
			MOVE_HIGHHORSEPOWER,
			MOVE_IRONHEAD, 
			MOVE_RAPIDSPIN, 
			MOVE_ROCKSLIDE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_VOLCARONA,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flame Body
		.item = ITEM_CHARCOAL, 
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_BUGBUZZ, 
			MOVE_GIGADRAIN,
			MOVE_PSYCHIC,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Cinnabar_Blaine[] =
{
	{
		.species = SPECIES_ARMAROUGE,
		.nature = NATURE_TIMID,
		.level = 75,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Mega Launcher
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_ARMORCANNON,
			MOVE_PSYSHOCK, 
			MOVE_AURASPHERE,
			MOVE_ENERGYBALL, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_SLITHERWING,
		.nature = NATURE_JOLLY,
		.level = 76,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Protosynthesis
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FIRSTIMPRESSION,
			MOVE_UTURN, 
			MOVE_CLOSECOMBAT,
			MOVE_FLAREBLITZ, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,

		.shiny      = TRUE, 
	},
	{
		.species = SPECIES_EXEGGUTOR,
		.nature = NATURE_TIMID,
		.level = 76,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_GROWTH, 
			MOVE_GIGADRAIN, 
			MOVE_PSYSHOCK, 
			MOVE_WEATHERBALL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_TYPHLOSION,
		.nature = NATURE_MODEST,
		.level = 76,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Blazing Soul
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_ERUPTION,
			MOVE_FLAMETHROWER, 
			MOVE_HIDDENPOWER, 
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SCOVILLAIN,
		.nature = NATURE_TIMID,
		.level = 76,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_FIREBLAST, 
			MOVE_GROWTH,
			MOVE_HIDDENPOWER, //rock
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_TIMID,
		.level = 76,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Drought MEga
		.item = ITEM_CHARIZARDITE_Y, 
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_AIRSLASH, 
			MOVE_SOLARBEAM,
			MOVE_DRAGONPULSE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Viridian_Clair[] =
{
	{
		.species = SPECIES_AERODACTYL,
		.nature = NATURE_JOLLY,
		.level = 80,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Unnerve
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_STONEEDGE, 
			MOVE_EARTHQUAKE,
			MOVE_TAUNT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_ROARINGMOON,
		.nature = NATURE_JOLLY,
		.level = 81,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Protosynthesis
		.item = ITEM_BOOSTER_ENERGY, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_CRUNCH, 
			MOVE_EARTHQUAKE,
			MOVE_IRONHEAD, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

		.shiny      = TRUE, 
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_ADAMANT,
		.level = 80,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Multiscale
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_EXTREMESPEED, 
			MOVE_DRAGONDANCE, 
			MOVE_FIREPUNCH, 
			MOVE_DUALWINGBEAT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_MAGEARNA,
		.nature = NATURE_MODEST,
		.level = 81,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soul Heart 
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SHIFTGEAR,
			MOVE_FLEURCANNON, 
			MOVE_FLASHCANNON, 
			MOVE_AURASPHERE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

	},
	{
		.species = SPECIES_DURALUDON,
		.nature = NATURE_TIMID,
		.level = 81,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Bad Company
		.item = ITEM_DURALUDONITE, 
		.moves =
		{
			MOVE_DRACOMETEOR,
			MOVE_STEELBEAM, 
			MOVE_THUNDERBOLT,
			MOVE_DARKPULSE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_NAGANADEL,
		.nature = NATURE_TIMID,
		.level = 81,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_NASTYPLOT, 
			MOVE_SLUDGEWAVE,
			MOVE_DRACOMETEOR, 
		},
		.ball = BALL_TYPE_BEAST_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Viridian_GaryPreE4Charmander[] =
{
	{
		.species = SPECIES_STARAPTOR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SHARP_BEAK, 
		.moves =
		{
			MOVE_BRAVEBIRD,
			MOVE_UTURN, 
			MOVE_CLOSECOMBAT,
			MOVE_QUICKATTACK, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_KINGAMBIT,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Supreme Overlord
		.item = ITEM_CHOPLE_BERRY, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_IRONHEAD, 
			MOVE_KNOCKOFF, 
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_SANDYSHOCKS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Protosynthesis
		.item = ITEM_BOOSTER_ENERGY,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_EARTHPOWER, 
			MOVE_HIDDENPOWER,//ice 
			MOVE_VOLTSWITCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_AZUMARILL,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 0, 
		.ability = FRONTIER_ABILITY_2, //ABILITY Huge Power
		.item = ITEM_MYSTIC_WATER, 
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_PLAYROUGH, 
			MOVE_AQUAJET,
			MOVE_SUPERPOWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SNEASLER,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_2, //ABILITY Unburden
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DIRECLAW, 
			MOVE_CLOSECOMBAT,
			MOVE_UTURN, 
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
				.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_CHARIZARDITE_X,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_FLAREBLITZ, 
			MOVE_EARTHQUAKE, 
			MOVE_DRAGONCLAW, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Viridian_GaryPreE4Bulbasaur[] =
//swamp (pokemon get 1/4 speed)
{
	{
		.species = SPECIES_STARAPTOR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SHARP_BEAK, 
		.moves =
		{
			MOVE_BRAVEBIRD,
			MOVE_UTURN, 
			MOVE_CLOSECOMBAT,
			MOVE_QUICKATTACK, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_KINGAMBIT,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Supreme Overlord
		.item = ITEM_CHOPLE_BERRY, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_IRONHEAD, 
			MOVE_KNOCKOFF, 
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_DARMANITAN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_ROCKSLIDE, 
			MOVE_UTURN, 
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_IRONBUNDLE,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_1, //ABILITY Quark Drive
		.item = ITEM_BOOSTER_ENERGY, 
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_FREEZEDRY, 
			MOVE_FLIPTURN,
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_SNEASLER,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_2, //ABILITY Unburden
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DIRECLAW, 
			MOVE_CLOSECOMBAT,
			MOVE_UTURN, 
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow Thick Fat
		.item = ITEM_VENUSAURITE,
		.moves =
		{
			MOVE_CHLOROBLAST,
			MOVE_SLUDGEBOMB, 
			MOVE_EARTHPOWER, 
			MOVE_SLEEPPOWDER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Viridian_GaryPreE4Squirtle[] =
// serene grace, rain
{
	{
		.species = SPECIES_STARAPTOR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SHARP_BEAK, 
		.moves =
		{
			MOVE_BRAVEBIRD,
			MOVE_UTURN, 
			MOVE_CLOSECOMBAT,
			MOVE_QUICKATTACK, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_KINGAMBIT,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Supreme Overlord
		.item = ITEM_CHOPLE_BERRY, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_IRONHEAD, 
			MOVE_KNOCKOFF, 
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_AZUMARILL,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Huge Power
		.item = ITEM_MYSTIC_WATER,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_WATERFALL, 
			MOVE_PLAYROUGH, 
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_IRONMOTH,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_1, //ABILITY Quark Drive
		.item = ITEM_BOOSTER_ENERGY, 
		.moves =
		{
			MOVE_FIERYDANCE,
			MOVE_SLUDGEWAVE, 
			MOVE_ENERGYBALL,
			MOVE_DAZZLINGGLEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_SNEASLER,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_2, //ABILITY Unburden
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DIRECLAW, 
			MOVE_CLOSECOMBAT,
			MOVE_UTURN, 
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rain Dish
		.item = ITEM_BLASTOISINITE,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_DARKPULSE, 
			MOVE_HYDROPUMP, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},

};

static const struct BattleTowerSpread sNormalModeBattle_VictoryRoad_AceTrainer1[] =
{
	{
		.species = SPECIES_MAUSHOLD,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_WIDE_LENS, 
		.moves =
		{
			MOVE_POPULATIONBOMB,
			MOVE_BULLETSEED, 
			MOVE_UTURN,
			MOVE_BEATUP, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_VELUZA,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sharpness
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_FILLETAWAY,
			MOVE_AQUACUTTER, 
			MOVE_PSYCHOCUT,
			MOVE_AQUAJET, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Wonder Guard
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_WILLOWISP,
			MOVE_POLTERGEIST, 
			MOVE_SHADOWSNEAK, 
			MOVE_XSCISSOR, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,

	},
	{
		.species = SPECIES_ABSOL,
		.nature = NATURE_NAIVE,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Super Luck Sharpness
		.item = ITEM_ABSOLITE,
		.moves =
		{
			MOVE_NIGHTSLASH, 
			MOVE_SUCKERPUNCH,
			MOVE_PLAYROUGH, 
			MOVE_PSYCHOCUT, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_GALVANTULA,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Compound eyes
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_VOLTSWITCH, 
			MOVE_ENERGYBALL,
			MOVE_BUGBUZZ, 
			MOVE_THUNDER, 
		},
		.ball = BALL_TYPE_NET_BALL,

	}

};

static const struct BattleTowerSpread sNormalModeBattle_VictoryRoad_AceTrainer2[] =
{
	{
		.species = SPECIES_CYCLIZAR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Regenerator
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_SHEDTAIL,
			MOVE_KNOCKOFF, 
			MOVE_BODYSLAM,
			MOVE_DRAGONCLAW, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_FLYGON,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_EARTHQUAKE, 
			MOVE_DRAGONCLAW, 
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_CROBAT,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sniper
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_NASTYPLOT, 
			MOVE_HURRICANE,
			MOVE_HEATWAVE, 
			MOVE_GIGADRAIN, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_KINGLER,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Hyper Cutter Tough Claws Mega
		.item = ITEM_KINGLERITE,
		.moves =
		{
			MOVE_CRABHAMMER, 
			MOVE_CLOSECOMBAT,
			MOVE_ICEHAMMER, 
			MOVE_SWORDSDANCE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_HATTERENE,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Magic Bounce
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_DRAININGKISS, 
			MOVE_PSYSHOCK, 
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};


static const struct BattleTowerSpread sNormalModeBattle_VictoryRoad_AceTrainer3[] =
{
	{
		.species = SPECIES_BOMBIRDIER,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Rocky Payload
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_STEALTHROCK, 
			MOVE_KNOCKOFF,
			MOVE_TAUNT, 
			MOVE_MEMENTO, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_FIREBLAST, 
			MOVE_ICEBEAM,
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_DONDOZO,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unaware
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_CURSE,
			MOVE_LIQUIDATION, 
			MOVE_BODYPRESS,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_INFERNAPE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_UTURN,
			MOVE_FLAMETHROWER, 
			MOVE_AURASPHERE, 
			MOVE_VACUUMWAVE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,

	},
	{
		.species = SPECIES_DIGGERSBY,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Compound eyes
		.item = ITEM_SOFT_SAND,
		.moves =
		{
			MOVE_RETURN, 
			MOVE_EARTHQUAKE,
			MOVE_THUNDERPUNCH, 
			MOVE_QUICKATTACK, 
		},
		.ball = BALL_TYPE_NET_BALL,

	}

};

static const struct BattleTowerSpread sNormalBossBattle_E4_LoreleiRain[] =
{
	{
		.species = SPECIES_POLITOED, 
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Drizzle
		.item = ITEM_DAMP_ROCK, 
		.moves =
		{
			MOVE_SCALD,
			MOVE_HAZE, 
			MOVE_RAINDANCE,
			MOVE_FLIPTURN, 
		},
		.ball = BALL_TYPE_DIVE_BALL,

	},
	{
		.species = SPECIES_POLIWRATH,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Swift Swim
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SURGINGSTRIKES,
			MOVE_CLOSECOMBAT, 
			MOVE_FLIPTURN,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_DIVE_BALL,

	},
	{
		.species = SPECIES_SWAMPERT,
		.nature = NATURE_ADAMANT,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Torrent Swift Swim
		.item = ITEM_SWAMPERTITE,
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_EARTHQUAKE, 
			MOVE_WATERFALL, 
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_WALKINGWAKE,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Protosynthesis
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HURRICANE, 
			MOVE_HYDROPUMP,
			MOVE_PROTECT, 
			MOVE_DRAGONPULSE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	},
	{
		.species = SPECIES_KYOGRE,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure
		.item = ITEM_BLUE_ORB,
		.moves =
		{
			MOVE_WATERSPOUT, 
			MOVE_ORIGINPULSE,
			MOVE_THUNDER, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

	},
	{
		.species = SPECIES_IRONBUNDLE,
		.nature = NATURE_ADAMANT,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //Quark Drive
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_ICEBEAM, 
			MOVE_FREEZEDRY, 
			MOVE_FLIPTURN, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	},

};

static const struct BattleTowerSpread sNormalBossBattle_E4_LoreleiHail[] =
//perma hail 
{
	{
		.species = SPECIES_NINETALES_A,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Snow Warning
		.item = ITEM_LIGHT_CLAY, 
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_AURORAVEIL, 
			MOVE_FREEZEDRY,
			MOVE_HAIL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_GLACEON,
		.nature = NATURE_MODEST,
		.level = 85,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Slush Rush
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BLIZZARD, 
			MOVE_FREEZEDRY,
			MOVE_EARTHPOWER, 
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_ROTOM_WASH,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_THUNDERWAVE,
			MOVE_VOLTSWITCH, 
			MOVE_SCALD,
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_CALYREX_ICE,
		.nature = NATURE_ADAMANT,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY As One (Ice)
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_GLACIALLANCE,
			MOVE_ZENHEADBUTT, 
			MOVE_SEEDBOMB, 
			MOVE_HIGHHORSEPOWER, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

	},
	{
		.species = SPECIES_ABOMASNOW,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Snow Warning Slush Rush Mega
		.item = ITEM_ABOMASITE,
		.moves =
		{
			MOVE_BLIZZARD, 
			MOVE_GIGADRAIN,
			MOVE_FOCUSBLAST, 
			MOVE_HIDDENPOWER, //fire 
		},
		.ball = BALL_TYPE_MASTER_BALL,
	},
	{
		.species = SPECIES_BAXCALIBUR,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Thermal Exchange
		.item = ITEM_DRAGON_FANG,
		.moves =
		{
			MOVE_GLAIVERUSH,
			MOVE_ICESHARD, 
			MOVE_ICICLECRASH, 
			MOVE_PROTECT,  
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	},
};

static const struct BattleTowerSpread sNormalBossBattle_E4_Bruno1[] =
{
	{
		.species = SPECIES_INFERNAPE,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_PYROBALL, 
			MOVE_CLOSECOMBAT,
			MOVE_TAUNT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_URSHIFU_SINGLE,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unseen Fist 
		.item = ITEM_BLACK_GLASSES, 
		.moves =
		{
			MOVE_WICKEDBLOW,
			MOVE_SWORDSDANCE, 
			MOVE_CLOSECOMBAT,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	},
	{
		.species = SPECIES_KOMMO_O,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Overcoat
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_CLANGINGSCALES,
			MOVE_CLANGOROUSSOUL, 
			MOVE_AURASPHERE, 
			MOVE_FLASHCANNON, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_IRONVALIANT,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Quark Drive
		.item = ITEM_BOOSTER_ENERGY,
		.moves =
		{
			MOVE_MOONBLAST, 
			MOVE_THUNDERBOLT,
			MOVE_AURASPHERE, 
			MOVE_SHADOWBALL, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_ZACIAN,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intrepid Sword
		.item = ITEM_RUSTED_SWORD,
		.moves =
		{
			MOVE_SWORDSDANCE, 
			MOVE_BEHEMOTHBLADE,
			MOVE_CLOSECOMBAT, 
			MOVE_WILDCHARGE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

		.shiny = TRUE, 
	},
	{
		.species = SPECIES_LUCARIO,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Inner Focus Adaptability
		.item = ITEM_LUCARIONITE,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_CLOSECOMBAT, 
			MOVE_BULLETPUNCH, 
			MOVE_METEORMASH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_E4_Bruno2[] =
{
	{
		.species = SPECIES_GREATTUSK,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Protosynthesis
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_HEADLONGRUSH,
			MOVE_CLOSECOMBAT, 
			MOVE_STEALTHROCK,
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_URSHIFU_RAPID,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unseen Fist
		.item = ITEM_MYSTIC_WATER, 
		.moves =
		{
			MOVE_SURGINGSTRIKES,
			MOVE_CLOSECOMBAT, 
			MOVE_SWORDSDANCE,
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_IRONVALIANT,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Quark Drive
		.item = ITEM_BOOSTER_ENERGY,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_MOONBLAST, 
			MOVE_SHADOWBALL, 
			MOVE_PSYSHOCK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_IRONHANDS,
		.nature = NATURE_ADAMANT,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Quark Drive
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DRAINPUNCH, 
			MOVE_FAKEOUT,
			MOVE_PLASMAFISTS, 
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_ZACIAN,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intrepid Sword
		.item = ITEM_RUSTED_SWORD,
		.moves =
		{
			MOVE_SWORDSDANCE, 
			MOVE_BEHEMOTHBLADE,
			MOVE_CLOSECOMBAT, 
			MOVE_WILDCHARGE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

		.shiny = TRUE, 
	},
	{
		.species = SPECIES_LUCARIO,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Inner Focus
		.item = ITEM_LUCARIONITE,
		.moves =
		{
			MOVE_NASTYPLOT,
			MOVE_FLASHCANNON, 
			MOVE_AURASPHERE, 
			MOVE_VACUUMWAVE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},

};

static const struct BattleTowerSpread sNormalBossBattle_E4_Agatha1[] =
{
	{
		.species = SPECIES_ZOROARK,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Illusion
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DARKPULSE, 
			MOVE_FLAMETHROWER,
			MOVE_SLUDGEBOMB, 
			MOVE_TAUNT, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_GHOLDENGO,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Good as Gold
		.item = ITEM_AIR_BALLOON, 
		.moves =
		{
			MOVE_NASTYPLOT,
			MOVE_SHADOWBALL, 
			MOVE_MAKEITRAIN,
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_MARSHADOW,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Technician
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SPECTRALTHIEF,
			MOVE_CLOSECOMBAT, 
			MOVE_SHADOWSNEAK,
			MOVE_BULKUP, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
	},
	{
		.species = SPECIES_FLUTTERMANE,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Protosynthesis
		.item = ITEM_BOOSTER_ENERGY,
		.moves =
		{
			MOVE_SHADOWBALL, 
			MOVE_MOONBLAST,
			MOVE_MYSTICALFIRE, 
			MOVE_PSYSHOCK, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
	},
	{
		.species = SPECIES_CHIEN_PAO,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sword of Ruin
		.item = ITEM_BLACK_GLASSES,
		.moves =
		{
			MOVE_CRUNCH, 
			MOVE_ICICLECRASH,
			MOVE_ICESHARD, 
			MOVE_SACREDSWORD, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	},
	{
		.species = SPECIES_GENGAR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate, Shadow Tag Mega
		.item = ITEM_GENGARITE,
		.moves =
		{
			MOVE_SHADOWBALL, 
			MOVE_SLUDGEWAVE, 
			MOVE_FOCUSBLAST, 
			MOVE_NASTYPLOT, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_E4_Agatha2[] =
{
		{
		.species = SPECIES_ZOROARK_H,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Illusion
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SHADOWBALL, 
			MOVE_HYPERVOICE,
			MOVE_FLAMETHROWER, 
			MOVE_TAUNT, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_GHOLDENGO,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Good as Gold
		.item = ITEM_AIR_BALLOON, 
		.moves =
		{
			MOVE_THUNDERWAVE,
			MOVE_SHADOWBALL, 
			MOVE_MAKEITRAIN,
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_MARSHADOW,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Technician
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SPECTRALTHIEF,
			MOVE_DRAINPUNCH, 
			MOVE_SHADOWSNEAK,
			MOVE_BULKUP, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
	},
	{
		.species = SPECIES_ROARINGMOON,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Protosynthesis
		.item = ITEM_BOOSTER_ENERGY,
		.moves =
		{
			MOVE_DRAGONDANCE, 
			MOVE_CRUNCH,
			MOVE_EARTHQUAKE, 
			MOVE_IRONHEAD, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
	},
	{
		.species = SPECIES_CHI_YU,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beads of Ruin
		.item = ITEM_CHARCOAL,
		.moves =
		{
			MOVE_DARKPULSE, 
			MOVE_FLAMETHROWER,
			MOVE_PSYCHIC, 
			MOVE_HIDDENPOWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	},
	{
		.species = SPECIES_GENGAR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate, Shadow Tag Mega
		.item = ITEM_GENGARITE,
		.moves =
		{
			MOVE_SHADOWBALL, 
			MOVE_SLUDGEWAVE, 
			MOVE_FOCUSBLAST, 
			MOVE_NASTYPLOT, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
	},

};

static const struct BattleTowerSpread sNormalBossBattle_E4_Lance1[] =
{
	{
		.species = SPECIES_AERODACTYL,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Rough Skin
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_EARTHQUAKE, 
			MOVE_STONEEDGE,
			MOVE_TAUNT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_MELMETAL,
		.nature = NATURE_ADAMANT,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Iron Fist
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_DOUBLEIRONBASH,
			MOVE_ICEPUNCH, 
			MOVE_EARTHQUAKE,
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_SAFARI_BALL,
	},
	{
		.species = SPECIES_IRONJUGULIS,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Quark Drive
		.item = ITEM_BOOSTER_ENERGY,
		.moves =
		{
			MOVE_AEROBLAST,
			MOVE_DARKHOLE, 
			MOVE_EARTHPOWER, 
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Multiscale
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_DRAGONDANCE, 
			MOVE_DUALWINGBEAT,
			MOVE_EARTHQUAKE, 
			MOVE_EXTREMESPEED, 
		},
		.ball = BALL_TYPE_POKE_BALL,
	},
	{
		.species = SPECIES_DIALGA,
		.nature = NATURE_CALM,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 4,
		.spDefEv =252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure, Primal Armor Primal form 
		.item = ITEM_ADAMANT_ORB,
		.moves =
		{
			MOVE_ROAROFTIME, 
			MOVE_FLASHCANNON,
			MOVE_REST, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SALAMENCITE,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_DOUBLEEDGE, 
			MOVE_EARTHQUAKE, 
			MOVE_FIREFANG, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

		.shiny = TRUE,
	},
};

static const struct BattleTowerSpread sNormalBossBattle_E4_Lance2[] =
{
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rough Skin
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_EARTHQUAKE, 
			MOVE_STONEEDGE,
			MOVE_ROAR, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_MELMETAL,
		.nature = NATURE_ADAMANT,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Iron Fist
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_DOUBLEIRONBASH,
			MOVE_ICEPUNCH, 
			MOVE_EARTHQUAKE,
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_SAFARI_BALL,

	},
	{
		.species = SPECIES_IRONJUGULIS,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Quark Drive
		.item = ITEM_BOOSTER_ENERGY,
		.moves =
		{
			MOVE_AEROBLAST,
			MOVE_DARKHOLE, 
			MOVE_EARTHPOWER, 
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Multiscale
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_DRAGONDANCE, 
			MOVE_DUALWINGBEAT,
			MOVE_EARTHQUAKE, 
			MOVE_EXTREMESPEED, 
		},
		.ball = BALL_TYPE_POKE_BALL,
	},
	{
		.species = SPECIES_DIALGA,
		.nature = NATURE_BOLD,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure, Primal Armor Primal form 
		.item = ITEM_ADAMANT_ORB,
		.moves =
		{
			MOVE_ROAROFTIME, 
			MOVE_FLASHCANNON,
			MOVE_REST, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SALAMENCITE,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_DOUBLEEDGE, 
			MOVE_EARTHQUAKE, 
			MOVE_FIREFANG, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.shiny = TRUE,
	},
};

static const struct BattleTowerSpread sNormalBossBattle_E4_GarySquirtle[] =
{
	{
		.species = SPECIES_PHEROMOSA,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_UTURN, 
			MOVE_TRIPLEAXEL,
			MOVE_POISONJAB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_METAGROSS, 
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tough Claws
		.item = ITEM_METAGROSSITE, 
		.moves =
		{
			MOVE_METEORMASH,
			MOVE_BULLETPUNCH, 
			MOVE_ZENHEADBUTT,
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_KORAIDON,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY broken ass thing
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_SWORDSDANCE, 
			MOVE_COLLISIONCOURSE, 
			MOVE_DRAGONCLAW, 
			MOVE_FLAREBLITZ, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

		.shiny = TRUE,
	},
	{
		.species = SPECIES_YVELTAL,
		.nature = NATURE_MODEST,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dark Aura
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_OBLIVIONWING, 
			MOVE_DARKHOLE,
			MOVE_HEATWAVE, 
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_ETERNATUS,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Multitype
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_METEORBEAM, 
			MOVE_SLUDGEWAVE,
			MOVE_DYNAMAXCANNON, 
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
	},
	{
		.species = SPECIES_DITTO,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Limber
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_TRANSFORM,
			MOVE_NONE, 
			MOVE_NONE, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},

};

static const struct BattleTowerSpread sNormalBossBattle_E4_GaryBulbasaur[] =
{
		{
		.species = SPECIES_PHEROMOSA,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_UTURN, 
			MOVE_TRIPLEAXEL,
			MOVE_POISONJAB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_METAGROSS, 
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tough Claws
		.item = ITEM_METAGROSSITE, 
		.moves =
		{
			MOVE_METEORMASH,
			MOVE_BULLETPUNCH, 
			MOVE_ZENHEADBUTT,
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_MIRAIDON,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Orichalchum Pulse
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CALMMIND, 
			MOVE_ELECTRODRIFT, 
			MOVE_DRAGONPULSE, 
			MOVE_HIDDENPOWER, //fire 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.shiny = TRUE,
	},
	{
		.species = SPECIES_YVELTAL,
		.nature = NATURE_MODEST,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dark Aura
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_OBLIVIONWING, 
			MOVE_DARKHOLE,
			MOVE_HEATWAVE, 
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_ETERNATUS,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Multitype
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_METEORBEAM, 
			MOVE_SLUDGEWAVE,
			MOVE_DYNAMAXCANNON, 
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
	},
	{
		.species = SPECIES_DITTO,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Limber
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_TRANSFORM,
			MOVE_NONE, 
			MOVE_NONE, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},

};

static const struct BattleTowerSpread sNormalBossBattle_E4_GaryCharmander[] =
{
	{
		.species = SPECIES_PHEROMOSA,
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_UTURN, 
			MOVE_TRIPLEAXEL,
			MOVE_POISONJAB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_METAGROSS, 
		.nature = NATURE_JOLLY,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tough Claws
		.item = ITEM_METAGROSSITE, 
		.moves =
		{
			MOVE_METEORMASH,
			MOVE_BULLETPUNCH, 
			MOVE_ZENHEADBUTT,
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_MIRAIDON,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Orichalchum Pulse
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CALMMIND, 
			MOVE_PARABOLICCHARGE, 
			MOVE_DRAGONPULSE, 
			MOVE_HIDDENPOWER, //fire 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.shiny = TRUE,
	},
	{
		.species = SPECIES_YVELTAL,
		.nature = NATURE_MODEST,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dark Aura
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_OBLIVIONWING, 
			MOVE_DARKHOLE,
			MOVE_HEATWAVE, 
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_ETERNATUS,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Multitype
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_METEORBEAM, 
			MOVE_SLUDGEWAVE,
			MOVE_DYNAMAXCANNON, 
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
	},
	{
		.species = SPECIES_DITTO,
		.nature = NATURE_TIMID,
		.level = 85,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Limber
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_TRANSFORM,
			MOVE_NONE, 
			MOVE_NONE, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

//Postgame Battles

static const struct BattleTowerSpread sPostgameBattle_Falkner_Rematch[] =
//Delta Stream
{
	{
		.species = SPECIES_PIDGEOT,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 4,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Tangled Feet
		.item = ITEM_PIDGEOTITE,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_HEATWAVE,
			MOVE_FOCUSBLAST,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_YANMEGA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 4,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tinted Lens
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BUGBUZZ,
			MOVE_AIRSLASH,
			MOVE_GIGADRAIN,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHAYMIN_SKY, 
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Serene Grace
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SEEDFLARE,
			MOVE_AIRSLASH,
			MOVE_EARTHPOWER, 
			MOVE_HIDDENPOWER, //ice
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ENAMORUS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Contrary
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_SUPERPOWER,
			MOVE_ACROBATICS,
			MOVE_PLAYROUGH,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HO_OH,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Regenerator
		.item = ITEM_CHARTI_BERRY,
		.moves =
		{
			MOVE_BRAVEBIRD,
			MOVE_SACREDFIRE,
			MOVE_EARTHQUAKE,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GYARADOS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Moxie
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_WATERFALL,
			MOVE_EARTHQUAKE,
			MOVE_BOUNCE,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sPostgameBattle_Pryce_Rematch[] =
//0x4F
//Doubles
{
	{
		.species = SPECIES_ABOMASNOW,
		.nature = NATURE_QUIET,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 248,
		.atkEv = 8,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Snow Warning//Snow Warning
		.item = ITEM_ABOMASITE,
		.moves =
		{
			MOVE_EARTHPOWER,
			MOVE_BLIZZARD,
			MOVE_WOODHAMMER,
			MOVE_HIDDENPOWER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CALYREX_ICE,
		.nature = NATURE_BRAVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 248,
		.atkEv = 252,
		.defEv = 8,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY As One Calyrex Ice
		.item = ITEM_MENTAL_HERB,
		.moves =
		{
			MOVE_TRICKROOM,
			MOVE_GLACIALLANCE,
			MOVE_ZENHEADBUTT,
			MOVE_HIGHHORSEPOWER,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KYUREM, //transforms to Kyurem White upon death
		.nature = NATURE_QUIET,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 248,
		.atkEv = 0,
		.defEv = 8,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure//Turboblaze
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_DRACOBARRAGE,
			MOVE_EARTHPOWER,
			MOVE_FREEZEDRY,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WISHIWASHI_SEVI,
		.nature = NATURE_QUIET,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Schooling
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_DRACOBARRAGE,
			MOVE_THUNDERBOLT,
			MOVE_TRICKROOM,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DONPHAN,
		.nature = NATURE_BRAVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_ICESHARD,
			MOVE_ROCKTOMB,
			MOVE_BONEMERANG,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HERACROSS,
		.nature = NATURE_BRAVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Moxie//Skill Link
		.item = ITEM_HERACRONITE,
		.moves =
		{
			MOVE_ARMTHRUST,
			MOVE_BULLETSEED,
			MOVE_PINMISSILE,
			MOVE_ROCKBLAST,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};



static const struct BattleTowerSpread sNormalBossBattle_TwoIsland_Whitney[] =
{
	{
		.species = SPECIES_ZANGOOSE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Toxic Boost
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_FACADE,
			MOVE_CLOSECOMBAT, 
			MOVE_QUICKATTACK, 
			MOVE_FAKEOUT, 
		},
		.ball = BALL_TYPE_POKE_BALL,
	},
	{
		.species = SPECIES_MILTANK,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Thick Fat
		.item = ITEM_KASIB_BERRY, 
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_THUNDERWAVE, 
			MOVE_STEALTHROCK,
			MOVE_MILKDRINK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_EXPLOUD,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Punk Rock
		.item = ITEM_CHOICE_SCARF, 
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_NONE, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_ZOROARK_H,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Serene Grace
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_HYPERVOICE, 
			MOVE_FLAMETHROWER,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_URSALUNA, 
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Guts
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_FACADE,
			MOVE_EARTHQUAKE, 
			MOVE_SUCKERPUNCH,
			MOVE_SHADOWCLAW,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_IMPISH,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Thick Fat
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_CURSE,
			MOVE_REST, 
			MOVE_SLEEPTALK,
			MOVE_BODYSLAM, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_PkmnTower_Morty[] =
{
	{
		.species = SPECIES_MIMIKYU,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Disguise
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_SHADOWCLAW,
			MOVE_PLAYROUGH, 
			MOVE_SHADOWSNEAK, 
			MOVE_SWORDSDANCE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_MARSHADOW,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Technician
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_BULKUP,
			MOVE_DRAINPUNCH, 
			MOVE_SPECTRALTHIEF,
			MOVE_SHADOWSNEAK, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

	},
	{
		.species = SPECIES_SILVALLY_FAIRY,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_THUNDERWAVE,
			MOVE_MULTIATTACK, 
			MOVE_FLAMETHROWER,
			MOVE_PARTINGSHOT, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_URSHIFU_SINGLE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY urshifu thingy 
		.item = ITEM_BLACK_GLASSES, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_CLOSECOMBAT, 
			MOVE_WICKEDBLOW,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_GENGAR, //pre status burn
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate Shadow Tag
		.item = ITEM_GENGARITE,
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_SLUDGEWAVE, 
			MOVE_FOCUSBLAST,
			MOVE_THUNDERBOLT,
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_ZARUDE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defiant
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_POWERWHIP, 
			MOVE_KNOCKOFF,
			MOVE_CLOSECOMBAT, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_TwoIsland_AceT[] =
{
	{
		.species = SPECIES_INFERNAPE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_PYROBALL,
			MOVE_CLOSECOMBAT, 
			MOVE_THUNDERPUNCH, 
			MOVE_STEALTHROCK, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_SCEPTILE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow/Technician
		.item = ITEM_SCEPTILITE, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_BULLETSEED, 
			MOVE_SCALESHOT,
			MOVE_ROCKTOMB, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_TORTERRA,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_YACHE_BERRY, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_WOODHAMMER, 
			MOVE_HEADLONGRUSH,
			MOVE_HEADSMASH, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_BLAZIKEN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Striker/Speed Boost
		.item = ITEM_BLAZIKENITE, 
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_FLAREBLITZ, 
			MOVE_KNOCKOFF,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_GRENINJA, 
		.nature = NATURE_CAREFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Ash Gren
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HYDROCANNON,
			MOVE_DARKHOLE, 
			MOVE_ICEBEAM,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_INTELEON,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sniper
		.item = ITEM_SCOPE_LENS, 
		.moves =
		{
			MOVE_SNIPESHOT,
			MOVE_ICEBEAM, 
			MOVE_HIDDENPOWER,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_PkmnTower_AceT1[] =
{
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_HIGHHORSEPOWER,
			MOVE_STONEEDGE, 
			MOVE_CLOSECOMBAT, 
			MOVE_WICKEDBLOW, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_ENAMORUS,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 4,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Contrary
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_FLEURCANNON,
			MOVE_PSYCHIC, 
			MOVE_SUPERPOWER,
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SALAMENCITE, 
		.moves =
		{
			MOVE_DOUBLEEDGE,
			MOVE_DRAGONRUSH, 
			MOVE_HYPERVOICE,
			MOVE_FIREBLAST, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_AEGISLASH,
		.nature = NATURE_QUIET,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Striker/Speed Boost
		.item = ITEM_GHOSTIUM_Z, 
		.moves =
		{
			MOVE_KINGSSHIELD,
			MOVE_SHADOWBALL, 
			MOVE_FLASHCANNON,
			MOVE_SACREDSWORD, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_VICTINI, 
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Victory Star
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_VCREATE,
			MOVE_BOLTSTRIKE, 
			MOVE_GLACIATE,
			MOVE_ZENHEADBUTT,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_KELDEO, 
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Blademaster
		.item = ITEM_WATER_GEM,
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_SACREDSWORD, 
			MOVE_ICYWIND,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_PkmnTower_AceT2[] =
{
	{
		.species = SPECIES_TORKOAL,
		.nature = NATURE_RELAXED,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Drought
		.item = ITEM_HEAT_ROCK, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_LAVAPLUME, 
			MOVE_BODYPRESS, 
			MOVE_EARTHPOWER, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Solar Power
		.item = ITEM_CHOICE_SPECS, 
		.moves =
		{
			MOVE_SOLARBEAM,
			MOVE_WEATHERBALL, 
			MOVE_AIRSLASH,
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_MILOTIC,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Competitive
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_WEATHERBALL,
			MOVE_ICEBEAM, 
			MOVE_BOUNCYBUBBLE,
			MOVE_FLIPTURN, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_DODRIO_S,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Rock Head
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_HEADLONGRUSH,
			MOVE_FLAREBLITZ, 
			MOVE_HEADSMASH,
			MOVE_DOUBLEEDGE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_TYRANITAR, 
		.nature = NATURE_BRAVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Unnerve
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_SOLARBEAM, 
			MOVE_STONEEDGE,
			MOVE_EARTHQUAKE,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rough Skin
		.item = ITEM_GARCHOMPITE, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_SCALESHOT, 
			MOVE_EARTHQUAKE,
			MOVE_FIREFANG, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_PkmnTower_AceT3[] =
{
	{
		.species = SPECIES_RILLABOOM,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Grassy Surge
		.item = ITEM_TERRAIN_EXTENDER, 
		.moves =
		{
			MOVE_GRASSYGLIDE,
			MOVE_UTURN, 
			MOVE_KNOCKOFF, 
			MOVE_WOODHAMMER, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Solar Power
		.item = ITEM_LUM_BERRY, 
		.moves =
		{
			MOVE_DUALWINGBEAT,
			MOVE_DRAGONDANCE, 
			MOVE_FIREPUNCH,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_ZEBSTRIKA_S,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Illuminate
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_THUNDER, 
			MOVE_FREEZEDRY,
			MOVE_VOLTSWITCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_ALCREMIE_STRAWBERRY,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Self Sufficient
		.item = ITEM_ALCREMITE, 
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_MOONBLAST, 
			MOVE_MYSTICALFIRE,
			MOVE_ACIDARMOR, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_SAMUROTT_H, 
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Blademaster
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_CEASELESSEDGE, 
			MOVE_RAZORSHELL,
			MOVE_MEGAHORN,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_DECIDUEYE_H, 
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Striker
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_HIGHJUMPKICK,
			MOVE_GRASSYGLIDE, 
			MOVE_SWORDSDANCE,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	}
};

static const struct BattleTowerSpread sNormalBossBattle_OneIsl_Bugsy[] =
{
	{
		.species = SPECIES_PHEROMOSA,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_ICEBEAM,
			MOVE_UTURN,
			MOVE_DRILLRUN,
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLAWITZER_S,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Mega Launcher
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_WATERPULSE,
			MOVE_DARKPULSE,
			MOVE_AURASPHERE,
			MOVE_BUGBUZZ,
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GENESECT, 
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Download
		.item = ITEM_DOUSE_DRIVE,
		.moves =
		{
			MOVE_UTURN,
			MOVE_TECHNOBLAST,
			MOVE_THUNDERBOLT, 
			MOVE_ICEBEAM,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Magnet Pull
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FLASHCANNON,
			MOVE_VOLTSWITCH,
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCEUS_BUG,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Multitype
		.item = ITEM_BUGINIUM_Z,
		.moves =
		{
			MOVE_XSCISSOR,
			MOVE_EARTHQUAKE,
			MOVE_IRONHEAD,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PINSIR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Hyper Cutter
		.item = ITEM_PINSIRITE,
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_EXTREMESPEED,
			MOVE_CLOSECOMBAT,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sNormalBossBattle_CapeBrink_DHBattle[] =
{
	{
		.species = SPECIES_GRIMMSNARL,
		.nature = NATURE_RELAXED,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prankster
		.item = ITEM_LIGHT_CLAY, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_REFLECT, 
			MOVE_LIGHTSCREEN,
			MOVE_TOXIC,
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_MOLTRES_G,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Berserk
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_DARKHOLE,
			MOVE_AGILITY, 
			MOVE_HURRICANE, 
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_ZOROARK,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Illusion
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_UTURN,
			MOVE_FOCUSBLAST, 
			MOVE_DARKHOLE, 
			MOVE_FLAMETHROWER,
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_SNEASLER,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Poison Touch
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_POISONJAB,
			MOVE_CLOSECOMBAT, 
			MOVE_ICEPUNCH,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_ABSOL,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Super Luck, Blademaster Mega
		.item = ITEM_ABSOLITE, 
		.moves =
		{
			MOVE_NIGHTSLASH,
			MOVE_SWORDSDANCE, 
			MOVE_PSYCHOCUT,
			MOVE_PLAYROUGH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_BISHARP,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defiant
		.item = ITEM_EVIOLITE, 
		.moves =
		{
			MOVE_KNOCKOFF,
			MOVE_IRONHEAD, 
			MOVE_SUCKERPUNCH,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_ThreeIsland_Biker1[] =
{
	{
		.species = SPECIES_OVERQWIL,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Intimidate
		.item = ITEM_DARK_GEM,
		.moves =
		{
			MOVE_KNOCKOFF,
			MOVE_GUNKSHOT, 
			MOVE_WATERFALL, 
			MOVE_THUNDERWAVE, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_DUSKNOIR,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_REAPER_CLOTH, 
		.moves =
		{
			MOVE_SHADOWPUNCH,
			MOVE_DYNAMICPUNCH, 
			MOVE_SHADOWSNEAK,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	}
};

static const struct BattleTowerSpread sNormalBossBattle_ThreeIsland_Biker2[] =
//Doubles
{
	{
		.species = SPECIES_GRIMMSNARL,
		.nature = NATURE_IMPISH,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 0,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prankster
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_REFLECT,
			MOVE_LIGHTSCREEN, 
			MOVE_THUNDERWAVE, 
			MOVE_SPIRITBREAK, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_FLYGON,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tinted Lens
		.item = ITEM_GROUNDIUM_Z, 
		.moves =
		{
			MOVE_HEADLONGRUSH,
			MOVE_DRAGONCLAW, 
			MOVE_UTURN,
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_KLEAVOR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician 
		.item = ITEM_ROCK_GEM, 
		.moves =
		{
			MOVE_ACCELEROCK,
			MOVE_UTURN, 
			MOVE_CLOSECOMBAT,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	}
};

static const struct BattleTowerSpread sNormalBossBattle_ThreeIsland_Biker3[] =
{
	{
		.species = SPECIES_AVALUGG_H,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ROCKBLAST,
			MOVE_ICICLESPEAR, 
			MOVE_HEADLONGRUSH, 
			MOVE_ICESHARD, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_BRAVIARY_H,
		.nature = NATURE_MODEST,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_PSYCHIC, 
			MOVE_HEATWAVE,
			MOVE_ESPERWING, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_SHARPEDO,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Speed Boost
		.item = ITEM_SHARPEDONITE, 
		.moves =
		{
			MOVE_PROTECT,
			MOVE_AQUAFANG, 
			MOVE_CRUNCH,
			MOVE_CLOSECOMBAT, 
		},
		.ball = BALL_TYPE_DIVE_BALL,

	}
};

static const struct BattleTowerSpread sNormalBossBattle_ThreeIsland_Biker4[] =
{
	{
		.species = SPECIES_EMBOAR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Bull Rush
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_FLAREBLITZ, 
			MOVE_HEADSMASH, 
			MOVE_WILDCHARGE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_CENTISKORCH_S,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Clear Body/Arena Trap
		.item = ITEM_CENTISKITE, 
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_LEECHLIFE, 
			MOVE_COIL,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,

	},
	{
		.species = SPECIES_GOODRA_H,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sap Sipper
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_DRAGONPULSE,
			MOVE_FLASHCANNON, 
			MOVE_FLAMETHROWER,
			MOVE_SLUDGEBOMB, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_HAWLUCHA,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY unburden
		.item = ITEM_FLYING_GEM, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_ACROBATICS, 
			MOVE_BRAVEBIRD,
			MOVE_THROATCHOP, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_TreasureBeach_Red[] =
{
	{
		.species = SPECIES_PIKACHU_LIBRE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 252,
		.spAtkEv = 252,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Lightningrod
		.item = ITEM_LIGHT_BALL, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_AURAWHEEL, 
			MOVE_CLOSECOMBAT,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_CHERISH_BALL,

	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow
		.item = ITEM_VENUSAURITE,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_SLUDGEBOMB, 
			MOVE_EARTHPOWER, 
			MOVE_SLEEPPOWDER, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Torrent/Mega Launcher
		.item = ITEM_BLASTOISINITE,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_ICEBEAM, 
			MOVE_DARKPULSE, 
			MOVE_AURASPHERE,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze
		.item = ITEM_CHARIZARDITE_X, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_FLAREBLITZ, 
			MOVE_EARTHQUAKE,
			MOVE_DRAGONCLAW, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Thick Fat
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_EARTHQUAKE, 
			MOVE_DARKESTLARIAT,
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure/Steadfast
		.item = ITEM_MEWTWONITE_X, 
		.moves =
		{
			MOVE_BULKUP,
			MOVE_ZENHEADBUTT, 
			MOVE_CLOSECOMBAT,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_NuggetBridge_Trainer1[] =
//bug Catcher Doubles
{
	{
		.species = SPECIES_VIVILLON,
		.nature = NATURE_BASHFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Friend Guard
		.item = ITEM_CHARTI_BERRY,
		.moves =
		{
			MOVE_STRUGGLEBUG,
			MOVE_ELECTROWEB, 
			MOVE_AIRCUTTER,
			MOVE_DRAININGKISS,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_BUTTERFREE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //CompoundEyes
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SLEEPPOWDER,
			MOVE_OMINOUSWIND,
			MOVE_AIRCUTTER, 
			MOVE_MEGADRAIN, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_WORMADAM_SANDY,
		.nature = NATURE_CAREFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Overcoat
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_BULLDOZE,
			MOVE_BUGBITE, 
			MOVE_ROCKTOMB, 
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_NuggetBridge_Trainer2[] =
//Lass Trainer Doubles
{
	{
		.species = SPECIES_JIGGLYPUFF,
		.nature = NATURE_BOLD,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Friend Guard
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_ROUND,
			MOVE_DRAININGKISS, 
			MOVE_INCINERATE,
			MOVE_ICYWIND,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_AMAURA,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Refrigerate 
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_ROUND,
			MOVE_ANCIENTPOWER,
			MOVE_WATERPULSE, 
			MOVE_MUDSHOT, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_BRIONNE,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Liquid Voice
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_ROUND,
			MOVE_DRAININGKISS, 
			MOVE_ICYWIND, 
			MOVE_AQUAJET, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_NuggetBridge_Trainer3[] =
//Youngster Trainer Doubles
{
	{
		.species = SPECIES_PLUSLE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Plus
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_GRASSKNOT,
			MOVE_ELECTROWEB, 
			MOVE_SIGNALBEAM,
			MOVE_CHARGEBEAM,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_ELECTRIKE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN , //Minus
		.item = ITEM_MAGNET,
		.moves =
		{
			MOVE_SHOCKWAVE,
			MOVE_ROUND,
			MOVE_FLAMEBURST, 
			MOVE_SIGNALBEAM, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_SNOVER,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soundproof
		.item = ITEM_OCCA_BERRY,
		.moves =
		{
			MOVE_ICESHARD,
			MOVE_MEGADRAIN, 
			MOVE_ICYWIND, 
			MOVE_WATERPULSE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_NuggetBridge_Trainer4[] =
//Lass Trainer Singles
{
	{
		.species = SPECIES_GREEDENT,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Cheek Pouch
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_STOMPINGTANTRUM,
			MOVE_FACADE, 
			MOVE_SEEDBOMB,
			MOVE_THUNDERFANG,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_TOGETIC,
		.nature = NATURE_BASHFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2 , //Serene Grace
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_AIRSLASH,
			MOVE_THUNDERWAVE,
			MOVE_DRAININGKISS, 
			MOVE_MAGICALLEAF, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_CLAMPERL,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_DEEP_SEA_TOOTH,
		.moves =
		{
			MOVE_WATERPULSE,
			MOVE_ICYWIND, 
			MOVE_REST, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_NuggetBridge_Trainer5[] =
//Picnicker Trainer Singles
{
	{
		.species = SPECIES_MABOSSTIFF,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_BLACK_GLASSES,
		.moves =
		{
			MOVE_TRAILBLAZE,
			MOVE_BITE, 
			MOVE_FIREFANG,
			MOVE_ICEFANG,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_SALANDIT,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1 , //Corrosion
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_SUBSTITUTE,
			MOVE_PROTECT, 
			MOVE_INCINERATE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_MISDREAVUS,
		.nature = NATURE_BOLD,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_HEX,
			MOVE_WILLOWISP, 
			MOVE_ICYWIND, 
			MOVE_SHOCKWAVE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_NuggetBridge_Rocket[] =
{
	{
		.species = SPECIES_GROWLITHE,
		.nature = NATURE_CAREFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_DRAGONRAGE,
			MOVE_FIREFANG, 
			MOVE_THUNDERFANG,
			MOVE_BULLDOZE,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_GABITE,
		.nature = NATURE_IMPISH,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //Rough Skin
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_ROCKSLIDE,
			MOVE_DUALCHOP, 
			MOVE_BULLDOZE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_TOGEDEMARU,
		.nature = NATURE_CAREFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Iron barbs
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_UTURN,
			MOVE_ZIPPYZAP, 
			MOVE_IRONHEAD, 
			MOVE_NUZZLE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_KOMALA,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Comatose
		.item = ITEM_SILK_SCARF,
		.moves =
		{
			MOVE_PROTECT,
			MOVE_LASTRESORT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Cerulean_Rocket[] =
{
	{
		.species = SPECIES_PERSIAN_A,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Feline Power
		.item = ITEM_BLACK_GLASSES,
		.moves =
		{
			MOVE_SNARL,
			MOVE_WATERPULSE, 
			MOVE_PARTINGSHOT,
			MOVE_SHOCKWAVE,
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_GOLBAT,
		.nature = NATURE_NAIVE,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_2, //Sniper
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_MEGADRAIN,
			MOVE_CROSSPOISON,
			MOVE_AIRCUTTER, 
			MOVE_HIDDENPOWER, //fire
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_OINKOLOGNE_F,
		.nature = NATURE_IMPISH,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Gluttony
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_STOCKPILE,
			MOVE_BODYPRESS, 
			MOVE_BULLETSEED, 
			MOVE_HEADBUTT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_OCTILLERY,
		.nature = NATURE_RASH,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Skill Link
		.item = ITEM_RINDO_BERRY, 
		.moves =
		{
			MOVE_BULLETSEED,
			MOVE_ROCKBLAST, 
			MOVE_WATERPULSE,
			MOVE_ICYWIND, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route11_Whitney[] =
{
	{
		.species = SPECIES_TINKATON,
		.nature = NATURE_JOLLY,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Mold Breaker
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_PLAYROUGH,
			MOVE_IRONHEAD, 
			MOVE_KNOCKOFF,
			MOVE_ENCORE, 
		},
		.ball = BALL_TYPE_LOVE_BALL,

	},
	{
		.species = SPECIES_FARIGIRAF,
		.nature = NATURE_MODEST,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Parental Bond
		.item = ITEM_TWISTED_SPOON,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_HYPERVOICE, 
			MOVE_DAZZLINGGLEAM,
			MOVE_SHADOWBALL,
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_MILTANK,
		.nature = NATURE_ADAMANT,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY Thick Fat
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_SLACKOFF, 
			MOVE_ZENHEADBUTT, 
			MOVE_HIGHHORSEPOWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_DRAMPA,
		.nature = NATURE_MODEST,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sap Sipper
		.item = ITEM_NORMAL_GEM, 
		.moves =
		{
			MOVE_DRAGONBREATH,
			MOVE_ROOST, 
			MOVE_FLAMETHROWER,
			MOVE_HYPERVOICE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_DUDUNSPARCE,
		.nature = NATURE_CAREFUL,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY Serene Grace
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_ROOST, 
			MOVE_BITE,
			MOVE_COIL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Saffron_DumbassKidPostGame[] =
//perma rain
//doubles
{
	{
		.species = SPECIES_MAGEARNA_P,
		.nature = NATURE_CALM,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soul Heart
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_HELPINGHAND,
			MOVE_MOONBLAST, 
			MOVE_FLASHCANNON,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_LOVE_BALL,

	},
	{
		.species = SPECIES_SWAMPERT,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Damp Swift Swim Mega
		.item = ITEM_SWAMPERTITE,
		.moves =
		{
			MOVE_HIGHHORSEPOWER,
			MOVE_ICEPUNCH, 
			MOVE_WATERFALL,
			MOVE_FLIPTURN, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,

	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prism Armor
		.item = ITEM_SOLGANIUM_Z,
		.moves =
		{
			MOVE_SUNSTEELSTRIKE,
			MOVE_DRAGONDANCE, 
			MOVE_STONEEDGE,
			MOVE_PSYCHICFANGS,
		},
		.ball = BALL_TYPE_MASTER_BALL,

	},
	{
		.species = SPECIES_ASHGRENINJA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Bond
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_WATERSHURIKEN,
			MOVE_DARKPULSE, 
			MOVE_ICEBEAM,
			MOVE_HYDROPUMP, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_PALKIA_O,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure
		.item = ITEM_LUSTROUS_ORB, 
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_SPACIALREND, 
			MOVE_THUNDER,
			MOVE_AURASPHERE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

	},
	{
		.species = SPECIES_SHAYMIN_SKY,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Serene Grace
		.item = ITEM_CHOICE_SPECS, 
		.moves =
		{
			MOVE_SEEDFLARE,
			MOVE_HURRICANE, 
			MOVE_EARTHPOWER,
			MOVE_HIDDENPOWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Route9_Cooltrainer2[] =
{
	{
		.species = SPECIES_SMEARGLE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Own Tempo
		.item = ITEM_CHOICE_SCARF, 
		.moves =
		{
			MOVE_VCREATE,
			MOVE_DRAGONASCENT, 
			MOVE_TRICK,
			MOVE_CLOSECOMBAT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SPINDA,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_NONE, 
		.moves =
		{
			MOVE_ASSIST,
			MOVE_NONE, 
			MOVE_NONE, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SNEASEL_H,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Inner Focus
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_ASSIST,
			MOVE_NONE, 
			MOVE_NONE,
			MOVE_NONE,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_LIEPARD,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Prankster
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ASSIST,
			MOVE_NONE, 
			MOVE_NONE, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Lavender_Morty[] =
{
	{
		.species = SPECIES_MIMIKYU,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Disguise
		.item = ITEM_LUM_BERRY, 
		.moves =
		{
			MOVE_PLAYROUGH,
			MOVE_SHADOWCLAW, 
			MOVE_SHADOWSNEAK,
			MOVE_SWORDSDANCE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_DUSKNOIR,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY HUstle
		.item = ITEM_REAPER_CLOTH,
		.moves =
		{
			MOVE_SHADOWPUNCH,
			MOVE_SHADOWSNEAK, 
			MOVE_DYNAMICPUNCH,
			MOVE_WILLOWISP,
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_ZOROARK_H,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Illusion
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_HYPERVOICE,
			MOVE_SHADOWBALL, 
			MOVE_FLAMETHROWER,
			MOVE_NASTYPLOT,
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_SKELEDIRGE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 8,
		.spDefEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Unaware
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_TORCHSONG,
			MOVE_WILLOWISP, 
			MOVE_HEX,
			MOVE_SLACKOFF, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_GENGAR,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_GENGARITE, 
		.moves =
		{
			MOVE_SLUDGEWAVE,
			MOVE_SHADOWBALL, 
			MOVE_FOCUSBLAST,
			MOVE_NASTYPLOT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_CERULEDGE, 
		.nature = NATURE_JOLLY,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Weak Armor
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BITTERBLADE,
			MOVE_SHADOWSNEAK, 
			MOVE_CLOSECOMBAT, 
			MOVE_SWORDSDANCE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Brock[] =
{
	{
		.species = SPECIES_GEODUDE_A,
		.nature = NATURE_ADAMANT,
		.level = 13,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY STURDY
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_BULLDOZE,
			MOVE_ROCKTOMB,
			MOVE_SPARK,
			MOVE_SELFDESTRUCT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_VAROOM,
		.nature = NATURE_BRAVE,
		.level = 13,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Filter
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_GYROBALL,
			MOVE_BULLDOZE,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
	},
	{
		.species = SPECIES_ONIX,
		.nature = NATURE_BASHFUL,
		.level = 14,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sturdy
		.item = ITEM_BERRY_JUICE,
		.moves =
		{
			MOVE_ROCKTOMB,
			MOVE_BULLDOZE, 
			MOVE_SLEEPTALK,  
			MOVE_NONE,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	},
	{
		.species = SPECIES_ARCHEN,
		.nature = NATURE_JOLLY,
		.level = 12,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY_doodoo thing
		.item = ITEM_BERRY_JUICE,
		.moves =
		{
			MOVE_PLUCK,
			MOVE_ROCKTOMB,
			MOVE_BULLDOZE,
			MOVE_FACADE,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	}
};


static const struct BattleTowerSpread sNormalBossBattle_CeruleanGary_Squirtle[] =
{
{
		.species = SPECIES_KIRLIA,
		.nature = NATURE_MODEST,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Trace
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_PSYBEAM,
			MOVE_DRAININGKISS,
			MOVE_MAGICALLEAF, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_STARAVIA,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_PLUCK,
			MOVE_QUICKATTACK, 
			MOVE_UTURN, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_PAWNIARD,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defiant
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_KNOCKOFF,
			MOVE_SUCKERPUNCH, 
			MOVE_CUT, 
			MOVE_LOWSWEEP, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_WARTORTLE,
		.nature = NATURE_MODEST,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Torrent
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_WATERPULSE, 
			MOVE_ICYWIND, 
			MOVE_SEISMICTOSS,
			MOVE_COUNTER, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_CeruleanGary_Bulbasaur[] =
{
{
		.species = SPECIES_KIRLIA,
		.nature = NATURE_MODEST,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Trace
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_PSYBEAM,
			MOVE_DRAININGKISS,
			MOVE_MAGICALLEAF, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_STARAVIA,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_PLUCK,
			MOVE_QUICKATTACK, 
			MOVE_UTURN, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_PAWNIARD,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defiant
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_KNOCKOFF,
			MOVE_SUCKERPUNCH, 
			MOVE_CUT, 
			MOVE_LOWSWEEP, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_IVYSAUR,
		.nature = NATURE_MODEST,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_LEECHSEED, 
			MOVE_SLUDGE, 
			MOVE_MEGADRAIN,
			MOVE_PROTECT, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_CeruleanGary_Charmander[] =
{
	{
		.species = SPECIES_KIRLIA,
		.nature = NATURE_MODEST,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Trace
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_PSYBEAM,
			MOVE_DRAININGKISS,
			MOVE_MAGICALLEAF, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_STARAVIA,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_PLUCK,
			MOVE_QUICKATTACK, 
			MOVE_UTURN, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_PAWNIARD,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defiant
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_KNOCKOFF,
			MOVE_SUCKERPUNCH, 
			MOVE_CUT, 
			MOVE_LOWSWEEP, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_CHARMELEON,
		.nature = NATURE_RASH,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_FLAMEBURST, 
			MOVE_THUNDERPUNCH, 
			MOVE_ANCIENTPOWER,
			MOVE_BITE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
	},
};

static const struct BattleTowerSpread sNormalBossBattle_Misty[] =
{
	{
		.species = SPECIES_FROGADIER,
		.nature = NATURE_LONELY,
		.level = 25,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 100,
		.atkEv = 40,
		.spAtkEv = 40, 
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Protean
		.item = ITEM_EVIOLITE, 
		.moves =
		{
			MOVE_ICEPUNCH,
			MOVE_ROCKTOMB, 
			MOVE_FLIPTURN,
			MOVE_GRASSKNOT, 
		},
		.ball = BALL_TYPE_DIVE_BALL,

	},
	{
		.species = SPECIES_FLOATZEL,
		.nature = NATURE_TIMID,
		.level = 25,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_MYSTIC_WATER,
		.moves =
		{
			MOVE_WATERPULSE,
			MOVE_FLIPTURN, 
			MOVE_ICYWIND, 
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_DIVE_BALL,

	},
	{
		.species = SPECIES_STARMIE,
		.nature = NATURE_TIMID,
		.level = 27,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Analytic
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_WATERPULSE, 
			MOVE_RECOVER, 
			MOVE_AURORABEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	},
	{
		.species = SPECIES_CLODSIRE,
		.nature = NATURE_BOLD,
		.level = 26,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Water Absorb
		.item = ITEM_IAPAPA_BERRY, 
		.moves =
		{
			MOVE_POISONJAB,
			MOVE_BULLDOZE, 
			MOVE_ROCKTOMB, 
			MOVE_RECOVER,  
		},
		.ball = BALL_TYPE_GREAT_BALL,

	}
};


static const struct BattleTowerSpread sNormalBossBattle_Vermilion_LtSurge[] =
{ 
	{
		.species = SPECIES_PINCURCHIN,
		.nature = NATURE_BOLD,
		.level = 32,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Electric Surge
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_SCALD, 
			MOVE_DISCHARGE, 
			MOVE_HIDDENPOWER, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_RAICHU_A,
		.nature = NATURE_TIMID,
		.level = 33,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Surge Surfer
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_NASTYPLOT,
			MOVE_DISCHARGE, 
			MOVE_PSYSHOCK,  
			MOVE_GRASSKNOT, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	},
	{
		.species = SPECIES_BELLIBOLT,
		.nature = NATURE_BOLD,
		.level = 33,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 100,
		.ability = FRONTIER_ABILITY_1, //ABILITY Electromorphosis
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_PARABOLICCHARGE,
			MOVE_MUDDYWATER, 
			MOVE_THUNDERWAVE,
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_PAWMOT,
		.nature = NATURE_JOLLY,
		.level = 33,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY iron fist
		.item = ITEM_PUNCHING_GLOVE, 
		.moves =
		{
			MOVE_DRAINPUNCH,
			MOVE_THUNDERPUNCH, 
			MOVE_ICEPUNCH,
			MOVE_MACHPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_MANECTRIC,
		.nature = NATURE_TIMID,
		.level = 34,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Intimidate/Intimidate
		.item = ITEM_MANECTITE, 
		.moves =
		{
			MOVE_CHARGEBEAM,
			MOVE_VOLTSWITCH, 
			MOVE_FLAMEBURST,
			MOVE_HIDDENPOWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	}
};


static const struct BattleTowerSpread sNormalBossBattle_Celadon_Erika1[] =
{
	{
		.species = SPECIES_RILLABOOM,
		.nature = NATURE_JOLLY,
		.level = 43,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Grassy Surge
		.item = ITEM_TERRAIN_EXTENDER, 
		.moves =
		{
			MOVE_GRASSYGLIDE,
			MOVE_UTURN, 
			MOVE_HIGHHORSEPOWER,
			MOVE_DRAINPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_MEOWSCARADA,
		.nature = NATURE_JOLLY,
		.level = 43,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Protean
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_FLOWERTRICK,
			MOVE_KNOCKOFF, 
			MOVE_UTURN, 
			MOVE_TRIPLEAXEL,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_MODEST,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY thick Fat Mega
		.item = ITEM_VENUSAURITE,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_SLUDGEBOMB, 
			MOVE_SLEEPPOWDER, 
			MOVE_EARTHPOWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_MEGANIUM,
		.nature = NATURE_MODEST,
		.level = 44,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Triage
		.item = ITEM_GRASSY_SEED, 
		.moves =
		{
			MOVE_ANCIENTPOWER,
			MOVE_GIGADRAIN, 
			MOVE_DAZZLINGGLEAM, 
			MOVE_HIDDENPOWER, //fire  
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_ELECTRODE_H,
		.nature = NATURE_NAIVE,
		.level = 44,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Reckless
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_CHLOROBLAST, 
			MOVE_HIDDENPOWER, //ice 
			MOVE_EXPLOSION, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	}
};

static const struct BattleTowerSpread sNormalBossBattle_Celadon_Giovanni1[] =
{
	{
		.species = SPECIES_NIDOKING,
		.nature = NATURE_TIMID,
		.level = 45,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_EARTHPOWER,
			MOVE_ICEBEAM, 
			MOVE_SLUDGEBOMB,
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_HONCHKROW,
		.nature = NATURE_JOLLY,
		.level = 45,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Super Luck
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_NIGHTSLASH,
			MOVE_SUCKERPUNCH, 
			MOVE_DRILLPECK, 
			MOVE_HEATWAVE,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_TAUROS_P_FIRE,
		.nature = NATURE_JOLLY,
		.level = 46,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_BULKUP,
			MOVE_RAGINGBULL, 
			MOVE_CLOSECOMBAT, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_KANGASKHAN,
		.nature = NATURE_JOLLY,
		.level = 46,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Inner Focus
		.item = ITEM_KANGASKHANITE, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_BODYSLAM, 
			MOVE_CRUNCH, 
			MOVE_POWERUPPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_ORTHWORM,
		.nature = NATURE_IMPISH,
		.level = 45,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Shed Tail
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SHEDTAIL,
			MOVE_IRONHEAD, 
			MOVE_EARTHQUAKE, 
			MOVE_BODYPRESS, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_SilphCo_GarySquirtle[] =
{
	{
		.species = SPECIES_STARAPTOR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SHARP_BEAK, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_BRAVEBIRD, 
			MOVE_QUICKATTACK,
			MOVE_CLOSECOMBAT,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_KINGAMBIT,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 4, 
		.ability = FRONTIER_ABILITY_2, //ABILITY Supreme Overlord
		.item = ITEM_CHOPLE_BERRY, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_IRONHEAD, 
			MOVE_KNOCKOFF,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_JUMPLUFF,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
				.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Aerilate
		.item = ITEM_SHARP_BEAK,
		.moves =
		{
			MOVE_SLEEPPOWDER,
			MOVE_DOUBLEEDGE, 
			MOVE_LEAFBLADE,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_DARMANITAN,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_1, //ABILITY sheer force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_ROCKSLIDE, 
			MOVE_UTURN,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 0,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Torrent
		.item = ITEM_BLASTOISINITE, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_WATERPULSE, 
			MOVE_DARKPULSE,
			MOVE_AURASPHERE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};
static const struct BattleTowerSpread sNormalBossBattle_SilphCo_GaryBulba[] =
{
	{
		.species = SPECIES_STARAPTOR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SHARP_BEAK, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_BRAVEBIRD, 
			MOVE_QUICKATTACK,
			MOVE_CLOSECOMBAT,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_KINGAMBIT,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 4, 
		.ability = FRONTIER_ABILITY_2, //ABILITY Supreme Overlord
		.item = ITEM_CHOPLE_BERRY, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_IRONHEAD, 
			MOVE_KNOCKOFF,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_AZUMARILL,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 0, 
		.ability = FRONTIER_ABILITY_2, //ABILITY Huge Power
		.item = ITEM_MYSTIC_WATER, 
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_PLAYROUGH, 
			MOVE_AQUAJET,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_DARMANITAN,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_1, //ABILITY sheer force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_ROCKSLIDE, 
			MOVE_UTURN,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 0, 
		.ability = FRONTIER_ABILITY_1, //ABILITY Thick Fat
		.item = ITEM_VENUSAURITE, 
		.moves =
		{
			MOVE_SLEEPPOWDER,
			MOVE_GIGADRAIN, 
			MOVE_SLUDGEBOMB,
			MOVE_EARTHPOWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_SilphCo_GaryChar[] =
{
		{
		.species = SPECIES_STARAPTOR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SHARP_BEAK, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_BRAVEBIRD, 
			MOVE_QUICKATTACK,
			MOVE_CLOSECOMBAT,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_KINGAMBIT,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 4, 
		.ability = FRONTIER_ABILITY_2, //ABILITY Supreme Overlord
		.item = ITEM_CHOPLE_BERRY, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_IRONHEAD, 
			MOVE_KNOCKOFF,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_JUMPLUFF,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
				.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Aerilate
		.item = ITEM_SHARP_BEAK,
		.moves =
		{
			MOVE_SLEEPPOWDER,
			MOVE_DOUBLEEDGE, 
			MOVE_LEAFBLADE,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_AZUMARILL,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 0, 
		.ability = FRONTIER_ABILITY_2, //ABILITY Huge Power
		.item = ITEM_MYSTIC_WATER, 
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_PLAYROUGH, 
			MOVE_AQUAJET,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 0,
		.spdEv = 252, 
		.ability = FRONTIER_ABILITY_1, //ABILITY Thick Fat
		.item = ITEM_CHARIZARDITE_Y, 
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_GIGADRAIN, 
			MOVE_SLUDGEBOMB,
			MOVE_EARTHPOWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_SilphCo_Giovanni[] =
{
	{
		.species = SPECIES_HIPPOWDON,
		.nature = NATURE_ADAMANT,
		.level = 56,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Stream
		.item = ITEM_SMOOTH_ROCK, 
		.moves =
		{
			MOVE_STONEEDGE,
			MOVE_EARTHQUAKE, 
			MOVE_ROAR,
			MOVE_STEALTHROCK,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_EXCADRILL,
		.nature = NATURE_ADAMANT,
		.level = 57,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Rush
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_IRONHEAD, 
			MOVE_ROCKSLIDE,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_KANGASKHAN,
		.nature = NATURE_JOLLY,
		.level = 57,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Scrappy, Parental Bond
		.item = ITEM_KANGASKHANITE,
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_FAKEOUT, 
			MOVE_BODYSLAM, 
			MOVE_CRUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_GARGANACL,
		.nature = NATURE_IMPISH,
		.level = 57,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Purifying Salt
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_PROTECT,
			MOVE_BODYPRESS, 
			MOVE_SALTCURE,
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_JOLLY,
		.level = 57,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spDefEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Veil
		.item = ITEM_YACHE_BERRY, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_EARTHQUAKE, 
			MOVE_ROCKSLIDE,
			MOVE_SCALESHOT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_TORTERRA,
		.nature = NATURE_JOLLY,
		.level = 56,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_WOODHAMMER, 
			MOVE_EARTHQUAKE, 
			MOVE_HEADSMASH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
	}
};

static const struct BattleTowerSpread sNormalBossBattle_Ssanne_Trainer1[] =
//DOUBLE BATTLE WITH SSANNE_TRAINER2
{
	{
		.species = SPECIES_DEWOTT,
		.nature = NATURE_BASHFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Battle Armor
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_WATERPLEDGE,
			MOVE_FLASHCANNON, 
			MOVE_ICEBEAM, 
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SIMISEAR,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow
		.item = ITEM_CHARCOAL,
		.moves =
		{
			MOVE_FIREPLEDGE,
			MOVE_LOWKICK, 
			MOVE_GRASSKNOT, 
			MOVE_HIDDENPOWER, //ice
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Ssanne_Trainer2[] =
//DOUBLE BATTLE WITH SSANNE_TRAINER1 
{
	{
		.species = SPECIES_DARTRIX,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tinted Lens
		.item = ITEM_MIRACLE_SEED,
		.moves =
		{
			MOVE_SHADOWSNEAK,
			MOVE_GRASSPLEDGE, 
			MOVE_AIRSLASH, 
			MOVE_HIDDENPOWER, //fire
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SIMISAGE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow
		.item = ITEM_MIRACLE_SEED,
		.moves =
		{
			MOVE_GRASSPLEDGE,
			MOVE_FOCUSBLAST, 
			MOVE_HIDDENPOWER, //fire
			MOVE_POWERGEM,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_WIGGLYTUFF,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, // Sheer Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DRAININGKISS,
			MOVE_SHOCKWAVE,
			MOVE_ROUND, 
			MOVE_INCINERATE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Ssanne_Sailor1[] = 
//DOUBLE BATTLE WITH BELOW  
{
	{
		.species = SPECIES_LILEEP,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Storm Drain
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_ANCIENTPOWER,
			MOVE_GIGADRAIN, 
			MOVE_EARTHPOWER, 
			MOVE_HIDDENPOWER, //fire
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_LUMINEON,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Storm Drain
		.item = ITEM_NONE,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICEBEAM, 
			MOVE_HIDDENPOWER, //grass
			MOVE_FLIPTURN,
		},
		.ball = BALL_TYPE_DIVE_BALL,

	},
	{
		.species = SPECIES_TATSUGIRI,
		.nature = NATURE_MODEST,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, // Storm Drain
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_DRAGONPULSE,
			MOVE_RAPIDSPIN, 
			MOVE_ICYWIND, 
		},
		.ball = BALL_TYPE_DIVE_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Ssanne_Sailor2[] = 
//DOUBLE BATTLE WITH ABOVE
{
	{
		.species = SPECIES_CRAMORANT,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //Gulp Missile
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SURF,
			MOVE_UTURN,
			MOVE_AIRSLASH, 
			MOVE_SAFEGUARD, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_NIDOQUEEN,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_NONE,
		.moves =
		{
			MOVE_SURF,
			MOVE_SCORCHINGSANDS, 
			MOVE_SLUDGE,
			MOVE_REFLECT,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	}
};


static const struct BattleTowerSpread sNormalBossBattle_Route24_Bugsy[] =
//RAIN IN OVERWORLD
{
	{
		.species = SPECIES_LOKIX,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Tinted Lens
		.item = ITEM_SILVER_POWDER,
		.moves =
		{
			MOVE_FIRSTIMPRESSION,
			MOVE_KNOCKOFF, 
			MOVE_UTURN,
			MOVE_LEECHLIFE,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_LEDIAN,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Iron Fist
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DRAINPUNCH,
			MOVE_MACHPUNCH, 
			MOVE_ICEPUNCH, 
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SCYTHER,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician
		.item = ITEM_CHARTI_BERRY, 
		.moves =
		{
			MOVE_BUGBITE,
			MOVE_SWORDSDANCE, 
			MOVE_ROCKSMASH,
			MOVE_AERIALACE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_SCIZOR,
		.nature = NATURE_CAREFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_BULLETPUNCH,
			MOVE_UTURN, 
			MOVE_ROCKSMASH,
			MOVE_AERIALACE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	
};


static const struct BattleTowerSpread sNormalBossBattle_Route24_BugsyPostSurge[] =
//RAIN IN OVERWORLD
{
	{
		.species = SPECIES_KLEAVOR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN , //ABILITY Sharpness
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_STONEAXE,
			MOVE_NIGHTSLASH, 
			MOVE_UTURN,
			MOVE_XSCISSOR,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SCIZOR,
		.nature = NATURE_CAREFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //Technician
		.item = ITEM_SCIZORITE,
		.moves =
		{
			MOVE_BULLETPUNCH,
			MOVE_DUALWINGBEAT,
			MOVE_UTURN, 
			MOVE_ROCKSMASH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
	{
		.species = SPECIES_SCYTHER,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_DUALWINGBEAT, 
			MOVE_BUGBITE, 
			MOVE_ROCKSMASH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_LOKIX,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Tinted Lens
		.item = ITEM_SILVER_POWDER, 
		.moves =
		{
			MOVE_SUCKERPUNCH,
			MOVE_FIRSTIMPRESSION, 
			MOVE_KNOCKOFF,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_ARAQUANID,
		.nature = NATURE_IMPISH,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Water Bubble
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_XSCISSOR,
			MOVE_LIQUIDATION, 
			MOVE_PROTECT,
			MOVE_TOXIC, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_VIKAVOLT,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_MAGNET, 
		.moves =
		{
			MOVE_THUNDER,
			MOVE_BUGBUZZ, 
			MOVE_VOLTSWITCH,
			MOVE_ENERGYBALL,  
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_Saffron_Chuck[] =
{
	{
		.species = SPECIES_HITMONTOP,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_TRIPLEKICK,
			MOVE_TRIPLEAXEL, 
			MOVE_FAKEOUT,
			MOVE_BRUTALSWING,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_SNEASLER,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Poison Touch
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_POISONJAB, 
			MOVE_KNOCKOFF,
			MOVE_STONEEDGE,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_BRELOOM,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Poison Heal
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_SPORE,
			MOVE_SUBSTITUTE, 
			MOVE_FOCUSPUNCH, 
			MOVE_ROCKSLIDE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_QUAQUAVAL,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Moxie
		.item = ITEM_MYSTIC_WATER, 
		.moves =
		{
			MOVE_AQUASTEP,
			MOVE_CLOSECOMBAT, 
			MOVE_BULKUP,
			MOVE_ICESPINNER, 
		},
		.ball = BALL_TYPE_DIVE_BALL,

	},
	{
		.species = SPECIES_LUCARIO,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Inner Focus
		.item = ITEM_SHUCA_BERRY, 
		.moves =
		{
			MOVE_BULKUP,
			MOVE_CLOSECOMBAT, 
			MOVE_EXTREMESPEED,
			MOVE_METEORMASH, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,

	},
	{
		.species = SPECIES_GALLADE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Justified, Blade Master Mega
		.item = ITEM_GALLADITE, 
		.moves =
		{
			MOVE_BULKUP,
			MOVE_DRAINPUNCH, 
			MOVE_PSYCHOCUT,
			MOVE_NIGHTSLASH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	},
};


static const struct BattleTowerSpread sNormalBossBattle_SilphCo_Archer[] =
{
	{
		.species = SPECIES_GOTHITELLE,
		.nature = NATURE_MODEST,
		.level = 54,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Competitive
		.item = ITEM_COLBUR_BERRY, 
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_SHADOWBALL, 
			MOVE_HIDDENPOWER,
			MOVE_THUNDERWAVE,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_GHOLDENGO,
		.nature = NATURE_TIMID,
		.level = 55,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Good As Gold
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_MAKEITRAIN, 
			MOVE_FOCUSBLAST,
			MOVE_RECOVER,
		},
		.ball = BALL_TYPE_GREAT_BALL,

	},
	{
		.species = SPECIES_HOUNDOOM,
		.nature = NATURE_NAIVE,
		.level = 55,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Early Bird, Dark Aura Mega
		.item = ITEM_HOUNDOOMINITE,
		.moves =
		{
			MOVE_HEATWAVE,
			MOVE_DARKPULSE, 
			MOVE_SUCKERPUNCH, 
			MOVE_SCORCHINGSANDS, 
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
};

static const struct BattleTowerSpread sNormalBossBattle_Saffron_Sabrina[] =
//doubles
{
	{
		.species = SPECIES_HATTERENE,
		.nature = NATURE_QUIET,
		.level = 57,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Bounce
		.item = ITEM_PSYCHIC_SEED, 
		.moves =
		{
			MOVE_TRICKROOM,
			MOVE_EXPANDINGFORCE, 
			MOVE_DRAININGKISS,
			MOVE_MYSTICALFIRE,
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.shiny = TRUE,

	},
	{
		.species = SPECIES_INDEEDEE_FEMALE,
		.nature = NATURE_QUIET,
		.level = 57,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Psychic Surge
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_EXPANDINGFORCE,
			MOVE_HYPERVOICE, 
			MOVE_MYSTICALFIRE, 
			MOVE_SHADOWBALL, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.shiny = TRUE,

	},
	{
		.species = SPECIES_BRUTEBONNET,
		.nature = NATURE_BRAVE,
		.level = 58,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Protosynthesis
		.item = ITEM_BOOSTER_ENERGY,
		.moves =
		{
			MOVE_KNOCKOFF,
			MOVE_LEAFBLADE, 
			MOVE_CLOSECOMBAT,
			MOVE_SPORE,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.shiny = TRUE,

	},
	{
		.species = SPECIES_PORYGON2,
		.nature = NATURE_RELAXED,
		.level = 58,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 252,
		.spAtkEv = 0,
		.spDefEv = 4,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soul Heart
		.item = ITEM_EVIOLITE, 
		.moves =
		{
			MOVE_TRICKROOM, 
			MOVE_TELEPORT, 
			MOVE_ICEBEAM,
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.shiny = TRUE,

	},
	{
		.species = SPECIES_URSALUNA,
		.nature = NATURE_BRAVE,
		.level = 59,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Guts
		.item = ITEM_FLAME_ORB, 
		.moves =
		{
			MOVE_PROTECT,
			MOVE_HIGHHORSEPOWER, 
			MOVE_FACADE,
			MOVE_CRUNCH, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.shiny = TRUE,

	},
	{
		.species = SPECIES_GARDEVOIR,
		.nature = NATURE_QUIET,
		.level = 59,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Trace Pixilate
		.item = ITEM_GARDEVOIRITE, 
		.moves =
		{
			MOVE_HYPERVOICE,
			MOVE_EXPANDINGFORCE, 
			MOVE_SHADOWBALL,
			MOVE_TRICKROOM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.shiny = TRUE,
	},
};

static const struct BattleTowerSpread sBothTrainerBattle_Viridian_Lass1[] =
{
	{
		.species = SPECIES_STUFFUL,
		.nature = NATURE_BASHFUL,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Fluffy
		.item = ITEM_ORAN_BERRY,
		.moves =
		{
			MOVE_LOWSWEEP,
			MOVE_TACKLE, 
			MOVE_AERIALACE,
			MOVE_NONE,
		},
		.ball = BALL_TYPE_LOVE_BALL,

	},
	{
		.species = SPECIES_CLEFAIRY,
		.nature = NATURE_BASHFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //Magic Guard
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_METRONOME,
			MOVE_NONE,
			MOVE_NONE, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_LOVE_BALL,

	},
	{
		.species = SPECIES_AUDINO,
		.nature = NATURE_BASHFUL,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 0,
		.atkIv = 31,
		.defIv = 0,
		.spAtkIv = 31,
		.spDefIv = 0,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Klutz
		.item = ITEM_NONE,
		.moves =
		{
			MOVE_SWAGGER,
			MOVE_PROTECT, 
			MOVE_WISH, 
			MOVE_YAWN, 
		},
		.ball = BALL_TYPE_LOVE_BALL,

	},
};


static const struct BattleTowerSpread sRegularTrainer_PewterGym_Camper[] =
{
	{
		.species = SPECIES_GROWLITHE_H,
		.nature = NATURE_BASHFUL,
		.level = 11,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Trace in Mega
		.item = ITEM_ORAN_BERRY,
		.moves =
		{
			MOVE_ROCKTHROW,
			MOVE_BITE, 
			MOVE_EMBER,
			MOVE_NONE,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,

	},
	{
		.species = SPECIES_NACLI,
		.nature = NATURE_BASHFUL,
		.level = 11,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //Purifying Salt
		.item = ITEM_HARD_STONE,
		.moves =
		{
			MOVE_ROCKTOMB,
			MOVE_BULLDOZE,
			MOVE_RECOVER, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_POKE_BALL,

	}
};

static const struct BattleTowerSpread sRegularPartner_CeruleanCave_Lance[] =
{
	{
		.species = SPECIES_DRAGAPULT,
		.nature = NATURE_NAIVE,
		.level = 82,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Clear Body
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_DRACOMETEOR, 
			MOVE_FLAMETHROWER,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_DUSK_BALL,

	},
	{
		.species = SPECIES_DIALGA,
		.nature = NATURE_MODEST,
		.level = 83,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 0,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //Telepathy
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODYPRESS,
			MOVE_DRAGONPULSE,
			MOVE_FLASHCANNON, 
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_MASTER_BALL,

	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_NAIVE,
		.level = 82,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 0,
		.atkEv = 252,
		.defEv = 0,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //Intimidate Aerilate Mega
		.item = ITEM_SALAMENCITE,
		.moves =
		{
			MOVE_DOUBLEEDGE,
			MOVE_AQUATAIL,
			MOVE_FLAMETHROWER, 
			MOVE_HYPERVOICE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,

	}
};
