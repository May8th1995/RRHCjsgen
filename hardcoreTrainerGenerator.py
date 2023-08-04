import dicts.abilitiesDict as abilityDict
import dicts.itemDict as itemDict
import dicts.levelDict as levelDict
import dicts.movesDict as moveDict
import dicts.speciesDict as speciesDict
import dicts.nameDict as nameDict
import math

mode = "normal"

def gethpmove(mon):
    hptype = ((int(mon.hpiv)%2 + (2*(int(mon.atkiv)%2))+(4*(int(mon.defiv)%2))+(8*(int(mon.speiv)%2))+(16*(int(mon.spaiv)%2))+(32*(int(mon.spdiv)%2)))*5)/21
    hptype = math.floor(hptype)
    match hptype:
        case 0:
            return "Hidden Power Fighting"
        case 1:
            return "Hidden Power Flying"
        case 2:
            return "Hidden Power Poison"
        case 3:
            return "Hidden Power Ground"
        case 4:
            return "Hidden Power Rock"
        case 5:
            return "Hidden Power Bug"
        case 6:
            return "Hidden Power Ghost"
        case 7:
            return "Hidden Power Steel"
        case 8:
            return "Hidden Power Fire"
        case 9:
            return "Hidden Power Water"
        case 10:
            return "Hidden Power Grass"
        case 11:
            return "Hidden Power Electric"
        case 12:
            return "Hidden Power Psychic"
        case 13:
            return "Hidden Power Ice"
        case 14:
            return "Hidden Power Dragon"
        case 15:
            return "Hidden Power Dark"

#set up species->ability dictionary

base_stats = open('data/Base_Stats.c', 'r')
stats = base_stats.readlines()
base_stats.close

ability_dict = dict()

for lines in stats:
    if '[' in lines:
        name = lines.replace('[','').replace(']','').replace('=','').replace(' ','').replace('\n','').replace('\t','')
    elif '.ability1' in lines:
        ability1 = lines.replace('.ability1','').replace('=','').split(',')[0].replace('\t','').replace(" ","")
    elif '.ability2' in lines:
        ability2 = lines.replace('.ability2','').replace('=','').split(',')[0].replace('\t','').replace(" ","")
    elif '.hiddenAbility' in lines:
        hidden_ability = lines.replace('.hiddenAbility','').replace('=','').split(',')[0].replace('\t','').replace(" ","")
    elif '}' in lines:
        ability_dict[name] = (ability1,ability2,hidden_ability)


class Mon:
  def __init__(self, name, species, nature, level, hpiv, atkiv, defiv, spaiv, spdiv, speiv, ability, item, move1, move2, move3, move4):
    self.name = name
    self.species = species
    self.nature = nature
    self.level = level
    self.hpiv = hpiv
    self.atkiv = atkiv
    self.defiv = defiv
    self.spaiv = spaiv
    self.spdiv = spdiv
    self.speiv = speiv
    self.ability = ability
    self.item = item
    self.move1 = move1
    self.move2 = move2
    self.move3 = move3
    self.move4 = move4

if mode == "normal":
    trainers_file = open('data/normal_trainers.h')
else:
    trainers_file = open('data/hardcore_trainers.h')
trainers = trainers_file.readlines()
trainers_file.close
ivs = [1,2,3,4,5,6]
moves = ["a","b","c","d"]
mons = list()
move = 0
for lines in trainers:
    if 'BattleTowerSpread' in lines:
        name = lines.split(" ")[4].split("_",1)[1].replace("_"," ")[:-2]
    if '.species' in lines:
        species = lines.split(" ")[2].split(",")[0]
    if '.nature' in lines:
        nature = lines.split(" ")[2].split(",")[0].replace("NATURE_", "").capitalize()
    if '.level' in lines:
        level = lines.split(" ")[2].split(",")[0]
    if '.hpIv' in lines:
        hpiv = lines.split(" ")[2].split(",")[0]
    if '.atkIv' in lines:
        atkiv= lines.split(" ")[2].split(",")[0]
    if '.defIv' in lines:
        defiv = lines.split(" ")[2].split(",")[0]
    if '.spAtkIv' in lines:
        spaiv = lines.split(" ")[2].split(",")[0]
    if '.spDefIv' in lines:
        spdiv = lines.split(" ")[2].split(",")[0]
    if '.spdIv' in lines:
        speiv = lines.split(" ")[2].split(",")[0]
    if '.ability' in lines:
        ability = lines.split(" ")[2].split(",")[0]
    if '.item' in lines:
        item = lines.split(" ")[2].split(",")[0]
    if 'MOVE_' in lines:
        if move == 0:
            move1 = lines.replace("\t","").split(",")[0]
        if move == 1:
            move2 = lines.replace("\t","").split(",")[0]
        if move == 2:
            move3 = lines.replace("\t","").split(",")[0]
        if move == 3:
            move4 = lines.replace("\t","").split(",")[0]
        if (move == 3):
            move = 0
        else:
            move = move + 1
    if '.ball =' in lines  and  nameDict.namedict[name] != "???":
        mons.append(Mon(name, species, nature, level, hpiv, atkiv, defiv, spaiv, spdiv, speiv, ability, item, move1, move2, move3, move4))

#check formes

for mon in mons:
    if mon.item == 'ITEM_VENUSAURITE':
        mon.species = 'SPECIES_VENUSAUR_MEGA'
    elif mon.item == 'ITEM_CHARIZARDITE_X':
        mon.species = 'SPECIES_CHARIZARD_MEGA_X'
    elif mon.item == 'ITEM_CHARIZARDITE_Y':
        mon.species = 'SPECIES_CHARIZARD_MEGA_Y'
    elif mon.item == 'ITEM_BLASTOISINITE':
        mon.species = 'SPECIES_BLASTOISE_MEGA'
    elif mon.item == 'ITEM_BEEDRILLITE':
        mon.species = 'SPECIES_BEEDRILL_MEGA'
    elif mon.item == 'ITEM_PIDGEOTITE':
        mon.species = 'SPECIES_PIDGEOT_MEGA'
    elif mon.item == 'ITEM_ALAKAZITE':
        mon.species = 'SPECIES_ALAKAZAM_MEGA'
    elif mon.item == 'ITEM_SLOWBRONITE':
        mon.species = 'SPECIES_SLOWBRO_MEGA'
    elif mon.item == 'ITEM_GENGARITE':
        mon.species = 'SPECIES_GENGAR_MEGA'
    elif mon.item == 'ITEM_KANGASKHANITE':
        mon.species = 'SPECIES_KANGASKHAN_MEGA'
    elif mon.item == 'ITEM_PINSIRITE':
        mon.species = 'SPECIES_PINSIR_MEGA'
    elif mon.item == 'ITEM_GYARADOSITE':
        mon.species = 'SPECIES_GYARADOS_MEGA'
    elif mon.item == 'ITEM_AERODACTYLITE':
        mon.species = 'SPECIES_AERODACTYL_MEGA'
    elif mon.item == 'ITEM_MEWTWONITE_X':
        mon.species = 'SPECIES_MEWTWO_MEGA_X'
    elif mon.item == 'ITEM_MEWTWONITE_Y':
        mon.species = 'SPECIES_MEWTWO_MEGA_Y'
    elif mon.item == 'ITEM_AMPHAROSITE':
        mon.species = 'SPECIES_AMPHAROS_MEGA'
    elif mon.item == 'ITEM_STEELIXITE':
        mon.species = 'SPECIES_STEELIX_MEGA'
    elif mon.item == 'ITEM_SCIZORITE':
        mon.species = 'SPECIES_SCIZOR_MEGA'
    elif mon.item == 'ITEM_HERACRONITE':
        mon.species = 'SPECIES_HERACROSS_MEGA'
    elif mon.item == 'ITEM_HOUNDOOMINITE':
        mon.species = 'SPECIES_HOUNDOOM_MEGA'
    elif mon.item == 'ITEM_TYRANITARITE':
        mon.species = 'SPECIES_TYRANITAR_MEGA'
    elif mon.item == 'ITEM_SCEPTILITE':
        mon.species = 'SPECIES_SCEPTILE_MEGA'
    elif mon.item == 'ITEM_BLAZIKENITE':
        mon.species = 'SPECIES_BLAZIKEN_MEGA'
    elif mon.item == 'ITEM_SWAMPERTITE':
        mon.species = 'SPECIES_SWAMPERT_MEGA'
    elif mon.item == 'ITEM_GARDEVOIRITE':
        mon.species = 'SPECIES_GARDEVOIR_MEGA'
    elif mon.item == 'ITEM_SABLENITE':
        mon.species = 'SPECIES_SABLEYE_MEGA'
    elif mon.item == 'ITEM_MAWILITE':
        mon.species = 'SPECIES_MAWILE_MEGA'
    elif mon.item == 'ITEM_AGGRONITE':
        mon.species = 'SPECIES_AGGRON_MEGA'
    elif mon.item == 'ITEM_MEDICHAMITE':
        mon.species = 'SPECIES_MEDICHAM_MEGA'
    elif mon.item == 'ITEM_MANECTITE':
        mon.species = 'SPECIES_MANECTRIC_MEGA'
    elif mon.item == 'ITEM_SHARPEDONITE':
        mon.species = 'SPECIES_SHARPEDO_MEGA'
    elif mon.item == 'ITEM_CAMERUPTITE':
        mon.species = 'SPECIES_CAMERUPT_MEGA'
    elif mon.item == 'ITEM_ALTARIANITE':
        mon.species = 'SPECIES_ALTARIA_MEGA'
    elif mon.item == 'ITEM_BANETTITE':
        mon.species = 'SPECIES_BANETTE_MEGA'
    elif mon.item == 'ITEM_ABSOLITE':
        mon.species = 'SPECIES_ABSOL_MEGA'
    elif mon.item == 'ITEM_GLALITITE':
        mon.species = 'SPECIES_GLALIE_MEGA'
    elif mon.item == 'ITEM_SALAMENCITE':
        mon.species = 'SPECIES_SALAMENCE_MEGA'
    elif mon.item == 'ITEM_METAGROSSITE':
        mon.species = 'SPECIES_METAGROSS_MEGA'
    elif mon.item == 'ITEM_LATIASITE':
        mon.species = 'SPECIES_LATIAS_MEGA'
    elif mon.item == 'ITEM_LATIOSITE':
        mon.species = 'SPECIES_LATIOS_MEGA'
    elif mon.item == 'ITEM_LOPUNNITE':
        mon.species = 'SPECIES_LOPUNNY_MEGA'
    elif mon.item == 'ITEM_GARCHOMPITE':
        mon.species = 'SPECIES_GARCHOMP_MEGA'
    elif mon.item == 'ITEM_LUCARIONITE':
        mon.species = 'SPECIES_LUCARIO_MEGA'
    elif mon.item == 'ITEM_ABOMASITE':
        mon.species = 'SPECIES_ABOMASNOW_MEGA'
    elif mon.item == 'ITEM_GALLADITE':
        mon.species = 'SPECIES_GALLADE_MEGA'
    elif mon.item == 'ITEM_AUDINITE':
        mon.species = 'SPECIES_AUDINO_MEGA'
    elif mon.item == 'ITEM_DIANCITE':
        mon.species = 'SPECIES_DIANCIE_MEGA'
    elif mon.item == 'ITEM_MACHAMPITE':
        mon.species = 'SPECIES_MACHAMP_GIGA'
    elif mon.item == 'ITEM_LAPRASITE':
        mon.species = 'SPECIES_LAPRAS_GIGA'
    elif mon.item == 'ITEM_BUTTERFRITE':
        mon.species = 'SPECIES_BUTTERFREE_GIGA'
    elif mon.item == 'ITEM_GARBODORITE':
        mon.species = 'SPECIES_GARBODOR_GIGA'
    elif mon.item == 'ITEM_SNORLAXITE':
        mon.species = 'SPECIES_SNORLAX_GIGA'
    elif mon.item == 'ITEM_KINGLERITE':
        mon.species = 'SPECIES_KINGLER_GIGA'
    elif mon.item == 'ITEM_TOXTRICITITE':
        mon.species = 'SPECIES_TOXTRICITY_GIGA'
    elif mon.item == 'ITEM_COALOSSITE':
        mon.species = 'SPECIES_COALOSSAL_GIGA'
    elif mon.item == 'ITEM_DURALUDONITE':
        mon.species = 'SPECIES_DURALUDON_GIGA'
    elif mon.item == 'ITEM_DREDNAWITE':
        mon.species = 'SPECIES_DREDNAW_GIGA'
    elif mon.item == 'ITEM_COPPERAJITE':
        mon.species = 'SPECIES_COPPERAJAH_GIGA'
    elif mon.item == 'ITEM_ORBEETLITE':
        mon.species = 'SPECIES_ORBEETLE_GIGA'
    elif mon.item == 'ITEM_GRIMMSNITE':
        mon.species = 'SPECIES_GRIMMSNARL_GIGA'
    elif mon.item == 'ITEM_SANDACONDITE':
        mon.species = 'SPECIES_SANDACONDA_GIGA'
    elif mon.item == 'ITEM_ALCREMITE':
        mon.species = 'SPECIES_ALCREMIE_GIGA'
    elif mon.item == 'ITEM_BLUE_ORB':
        mon.species = 'SPECIES_KYOGRE_PRIMAL'
    elif mon.item == 'ITEM_GRISEOUS_ORB':
        mon.species = 'SPECIES_GIRATINA_ORIGIN'
    elif mon.item == 'ITEM_RED_ORB':
        mon.species = 'SPECIES_GROUDON_PRIMAL'
    elif mon.item == 'ITEM_RUSTED_SWORD':
        mon.species = 'SPECIES_ZACIAN_CROWNED'
    elif mon.item == 'ITEM_RUSTED_SHIELD':
        mon.species = 'SPECIES_ZAMAZENTA_CROWNED'
    elif mon.item == 'ITEM_ADAMANT_ORB':
        mon.species = 'SPECIES_DIALGA_PRIMAL'
    elif mon.item == 'ITEM_ULTRANECROZIUM_Z':
        mon.species == 'SPECIES_NECROZMA_ULTRA'
    
    elif mon.item == 'ITEM_APPLITE':
        if mon.species == 'SPECIES_FLAPPLE':
            mon.species = 'SPECIES_FLAPPLE_GIGA'
        elif mon.species == 'SPECIES_APPLETUN':
            mon.species = 'SPECIES_APPLETUN_GIGA'

    elif mon.item == 'ITEM_CENTISKITE':
        if mon.species == 'SPECIES_CENTISKORCH':
            mon.species = 'SPECIES_CENTISKORCH_GIGA'
        elif mon.species == 'SPECIES_CENTISKORCH_S':
            mon.species = 'SPECIES_CENTISKORCH_S_MEGA'


    elif mon.species == 'SPECIES_ARCEUS':
        if mon.item =='ITEM_FIST_PLATE':
            mon.species = 'SPECIES_ARCEUS_FIGHT'
        elif mon.item =='ITEM_SKY_PLATE':
            mon.species = 'SPECIES_ARCEUS_FLYING'
        elif mon.item =='ITEM_TOXIC_PLATE':
            mon.species = 'SPECIES_ARCEUS_POISON'
        elif mon.item =='ITEM_EARTH_PLATE':
            mon.species = 'SPECIES_ARCEUS_GROUND'
        elif mon.item =='ITEM_STONE_PLATE':
            mon.species = 'SPECIES_ARCEUS_ROCK'
        elif mon.item =='ITEM_INSECT_PLATE':
            mon.species = 'SPECIES_ARCEUS_BUG'
        elif mon.item =='ITEM_SPOOKY_PLATE':
            mon.species = 'SPECIES_ARCEUS_GHOST'
        elif mon.item =='ITEM_IRON_PLATE':
            mon.species = 'SPECIES_ARCEUS_STEEL'
        elif mon.item =='ITEM_FLAME_PLATE':
            mon.species = 'SPECIES_ARCEUS_FIRE'
        elif mon.item =='ITEM_SPLASH_PLATE':
            mon.species = 'SPECIES_ARCEUS_WATER'
        elif mon.item =='ITEM_MEADOW_PLATE':
            mon.species = 'SPECIES_ARCEUS_GRASS'
        elif mon.item =='ITEM_ZAP_PLATE':
            mon.species = 'SPECIES_ARCEUS_ELECTRIC'
        elif mon.item =='ITEM_MIND_PLATE':
            mon.species = 'SPECIES_ARCEUS_PSYCHIC'
        elif mon.item =='ITEM_ICICLE_PLATE':
            mon.species = 'SPECIES_ARCEUS_ICE'
        elif mon.item =='ITEM_DRACO_PLATE':
            mon.species = 'SPECIES_ARCEUS_DRAGON'
        elif mon.item =='ITEM_DREAD_PLATE':
            mon.species = 'SPECIES_ARCEUS_DARK'
        elif mon.item =='ITEM_PIXIE_PLATE':
            mon.species = 'SPECIES_ARCEUS_FAIRY'

    elif mon.species == 'SPECIES_SILVALLY':
        if mon.item =='ITEM_FIGHTING_MEMORY':
            mon.species = 'SPECIES_SILVALLY_FIGHT'
        elif mon.item =='ITEM_FLYING_MEMORY':
            mon.species = 'SPECIES_SILVALLY_FLYING'
        elif mon.item =='ITEM_POISON_MEMORY':
            mon.species = 'SPECIES_SILVALLY_POISON'
        elif mon.item =='ITEM_GROUND_MEMORY':
            mon.species = 'SPECIES_SILVALLY_GROUND'
        elif mon.item =='ITEM_ROCK_MEMORY':
            mon.species = 'SPECIES_SILVALLY_ROCK'
        elif mon.item =='ITEM_BUG_MEMORY':
            mon.species = 'SPECIES_SILVALLY_BUG'
        elif mon.item =='ITEM_GHOST_MEMORY':
            mon.species = 'SPECIES_SILVALLY_GHOST'
        elif mon.item =='ITEM_STEEL_MEMORY':
            mon.species = 'SPECIES_SILVALLY_GHOST'
        elif mon.item =='ITEM_FIRE_MEMORY':
            mon.species = 'SPECIES_SILVALLY_FIRE'
        elif mon.item =='ITEM_WATER_MEMORY':
            mon.species = 'SPECIES_SILVALLY_WATER'
        elif mon.item =='ITEM_GRASS_MEMORY':
            mon.species = 'SPECIES_SILVALLY_GRASS'
        elif mon.item =='ITEM_ELECTRIC_MEMORY':
            mon.species = 'SPECIES_SILVALLY_ELECTRIC'
        elif mon.item =='ITEM_PSYCHIC_MEMORY':
            mon.species = 'SPECIES_SILVALLY_PSYCHIC'
        elif mon.item =='ITEM_ICE_MEMORY':
            mon.species = 'SPECIES_SILVALLY_ICE'
        elif mon.item =='ITEM_DRAGON_MEMORY':
            mon.species = 'SPECIES_SILVALLY_DRAGON'
        elif mon.item =='ITEM_DARK_MEMORY':
            mon.species = 'SPECIES_SILVALLY_DARK'
        elif mon.item =='ITEM_FAIRY_MEMORY':
            mon.species = 'SPECIES_SILVALLY_FAIRY'

    elif mon.species == 'SPECIES_RAYQUAZA':
        if mon.move1 == 'MOVE_DRAGONASCENT' or mon.move2 == 'MOVE_DRAGONASCENT' or mon.move3 == 'MOVE_DRAGONASCENT' or mon.move4 == 'MOVE_DRAGONASCENT':
            mon.species = 'SPECIES_RAYQUAZA_MEGA'

    if mon.move1 == 'MOVE_HIDDENPOWER':
        mon.move1 = gethpmove(mon)
    if mon.move2 == 'MOVE_HIDDENPOWER':
        mon.move2 = gethpmove(mon)
    if mon.move3 == 'MOVE_HIDDENPOWER':
        mon.move3 = gethpmove(mon)
    if mon.move4 == 'MOVE_HIDDENPOWER':
        mon.move4 = gethpmove(mon)

if mode == "normal":
    for mon in mons:
        if mon.level == 'PLAYER_MAX_LEVEL':
            mon.level = str(levelDict.leveldictNormal[mon.name])
        elif mon.level == 'ONE_BELOW_PLAYER_MAX_LEVEL':
            mon.level = str(levelDict.leveldictNormal[mon.name]-1)
        elif mon.level == 'TWO_BELOW_PLAYER_MAX_LEVEL':
            mon.level = str(levelDict.leveldictNormal[mon.name]-2)
        elif mon.level == 'THREE_BELOW_PLAYER_MAX_LEVEL':
            mon.level = str(levelDict.leveldictNormal[mon.name]-3)
else:
    for mon in mons:
        if mon.level == 'PLAYER_MAX_LEVEL':
            mon.level = str(levelDict.leveldict[mon.name])
        elif mon.level == 'ONE_BELOW_PLAYER_MAX_LEVEL':
            mon.level = str(levelDict.leveldict[mon.name]-1)
        elif mon.level == 'TWO_BELOW_PLAYER_MAX_LEVEL':
            mon.level = str(levelDict.leveldict[mon.name]-2)
        elif mon.level == 'THREE_BELOW_PLAYER_MAX_LEVEL':
            mon.level = str(levelDict.leveldict[mon.name]-3)

for mon in mons:
    if(mon.ability == "FRONTIER_ABILITY_1"):
        mon.ability = abilityDict.abiltiesdict[ability_dict[mon.species][0]]
    elif(mon.ability == "FRONTIER_ABILITY_2"):
        if(abilityDict.abiltiesdict[ability_dict[mon.species][1]] == ''):
            mon.ability = abilityDict.abiltiesdict[ability_dict[mon.species][0]]
        else:
            mon.ability = abilityDict.abiltiesdict[ability_dict[mon.species][1]]
    elif(mon.ability == "FRONTIER_ABILITY_HIDDEN"):
        if(abilityDict.abiltiesdict[ability_dict[mon.species][2]] == ''):
            mon.ability = abilityDict.abiltiesdict[ability_dict[mon.species][0]]
        else:
            mon.ability = abilityDict.abiltiesdict[ability_dict[mon.species][2]]


for mon in mons:
    print(mon.species)
    mon.species = speciesDict.speciesdict[mon.species]
mons.sort(key=lambda x: x.species)

prevSpecies = ""
if mode == "normal":
    file = 'normal.js'
else:
    file = 'hardcore.js'

with open(file, 'w') as f:
    f.write("var SETDEX_SV = {")
    for mon in mons:
        if mon.species != prevSpecies:
            if prevSpecies != "":
                f.write("},\n")
            prevSpecies = mon.species
            f.write('"' + mon.species + '":{')
        f.write('"' + nameDict.namedict[mon.name] +'":{')
        f.write('"level":' + mon.level)
        f.write(',"ability":"' + mon.ability + '"')
        f.write(',"moves":[')
        if moveDict.movedict[mon.move1] != "":
            f.write('"'+ moveDict.movedict[mon.move1]+'"')
        if moveDict.movedict[mon.move2] != "":
            f.write(',"'+moveDict.movedict[mon.move2]+'"')
        if moveDict.movedict[mon.move3] != "":
            f.write(',"'+moveDict.movedict[mon.move3]+'"')
        if moveDict.movedict[mon.move4] != "":
            f.write(',"'+moveDict.movedict[mon.move4]+'"')
        f.write("]")
        f.write(',"nature":"' + mon.nature + '"')
        f.write(',"item":"' + itemDict.itemdict[mon.item] + '"')
        if (mon.hpiv != "31" or mon.atkiv != "31" or mon.spaiv != "31" or mon.speiv != "31" or mon.defiv != "31" or mon.spdiv != "31"):
            f.write (',"ivs":{')
            if mon.hpiv != "31":
                f.write('"hp:":' + mon.hpiv)
            if mon.atkiv != "31":
                f.write('"at":' + mon.atkiv + ',')
            if mon.spaiv != "31":
                f.write('"sa":' + mon.spaiv + ',')
            if mon.speiv != "31":
                f.write('"sp":' + mon.speiv + ',')
            if mon.defiv != "31":
                f.write('"df":' + mon.defiv + ',')
            if mon.spdiv != "31":
                f.write('"sd":' + mon.spdiv + ',')
            f.write('}')
        f.write('},')

        #f.write(',"ivs":{"hp:":' + mon.hpiv + ',"at":' + mon.atkiv+ ',"sa":' + mon.spaiv + ',"sp":' + mon.speiv + ',"df":' + mon.defiv + ',"sd":' + mon.spdiv + "}")
        #f.write("},")
    f.write("}};")