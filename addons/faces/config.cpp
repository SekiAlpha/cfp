class CfgPatches
{
    class CFP_Faces
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Data_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
    };
};
class CfgFaces
{
    class Default
    {
        class Custom;
    };
    class Man_A3: Default
    {
        class Default
        {
            displayname = "$STR_CFG_FACES_Default";
            texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
            head = "DefaultHead_A3";
            identityTypes[] = {};
            material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
            materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
            materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            disabled = 0;
        };
        class SP_WoodlandFace: Default
        {
            displayname = "SP Woodland Face 1";
            texture = "\x\cfp\addons\faces\data\Woodland1.paa";
            head = "DefaultHead_A3";
            identityTypes[] = {};
            material = "\x\cfp\addons\faces\data\custom.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
            materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
            materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            disabled = 0;
        };
        class SP_WoodlandFace1: SP_WoodlandFace
        {
            displayname = "SP Woodland Face 1";
            texture = "\x\cfp\addons\faces\data\Woodland1.paa";
        };
        class SP_WoodlandFace2: SP_WoodlandFace
        {
            displayname = "SP Woodland Face 2";
            texture = "\x\cfp\addons\faces\data\Woodland2.paa";
        };
        class SP_WoodlandFace3: SP_WoodlandFace
        {
            displayname = "SP Woodland Face 3";
            texture = "\x\cfp\addons\faces\data\Woodland3.paa";
        };
    };
};
//};
