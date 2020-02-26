class ACE_Medical_Treatment_Actions {
    class Pulseoximeter {
        displayName = CSTRING(Pulseoximeter_Display);
        displayNameProgress = CSTRING(placing);
        category = "examine";
        treatmentLocations = TREATMENT_LOCATIONS_ALL;
        allowedSelections[] = {"LeftArm", "RightArm"};
        allowSelfTreatment = 0;
        requiredMedic = 1;
        treatmentTime = 2;
        items[] = {"kat_Pulseoximeter"};
        condition = QGVAR(enable);
        patientStateCondition = 0;
        callbackSuccess = QUOTE([ARR_2(_player, _patient)] call FUNC(treatmentAdvanced_pulseoximeter));
        callbackFailure = "";
        callbackProgress = "";
        itemConsumed = 1;
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        animationCaller = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationCallerProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationCallerSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationCallerSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        litter[] = {};
    };
    class RemovePulseoximeter {
        displayName = CSTRING(Pulseoximeter_Display_Remove);
        displayNameProgress = CSTRING(remove);
        category = "examine";
        treatmentLocations = TREATMENT_LOCATIONS_ALL;
        allowedSelections[] = {"LeftArm", "RightArm"};
        allowSelfTreatment = 0;
        requiredMedic = 1;
        treatmentTime = 2;
        items[] = {};
        condition = QUOTE(_patient getVariable [ARR_2(QQGVAR(pulseoximeter), false)]);
        patientStateCondition = 0;
        callbackSuccess = QUOTE([ARR_2(_player, _patient)] call FUNC(treatmentAdvanced_removePulseoximeter));
        callbackFailure = "";
        callbackProgress = "";
        itemConsumed = 0;
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        animationCaller = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationCallerProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationCallerSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationCallerSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        litter[] = {};
    };
    class ChestSeal {
        displayName = CSTRING(pneumothorax_display);
        displayNameProgress = CSTRING(treating);
        category = "advanced";
        treatmentLocations = TREATMENT_LOCATIONS_ALL;
        allowedSelections[] = {"Body"};
        allowSelfTreatment = 0;
        requiredMedic = 2;
        treatmentTime = 7;
        items[] = {"kat_chestSeal"};
        condition = "_patient getVariable ['KAT_medical_airwayCollapsed', false]";
        patientStateCondition = 0;
        callbackSuccess = QUOTE([ARR_2(_player, _patient)] call FUNC(treatmentAdvanced_chestSeal));
        callbackFailure = "";
        callbackProgress = "";
        itemConsumed = 1;
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        animationCaller = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationCallerProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationCallerSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationCallerSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        litter[] = {};
    };
};