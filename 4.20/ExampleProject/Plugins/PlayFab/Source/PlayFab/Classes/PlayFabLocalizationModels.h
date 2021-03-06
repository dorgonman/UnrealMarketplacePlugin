//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated model file for the UE4 PlayFab plugin.
// This model file contains the request and response USTRUCTS
//
// API: Localization
//////////////////////////////////////////////////////////////////////////////////////////////

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabEnums.h"
#include "PlayFabLocalizationModels.generated.h"

class UPlayFabJsonObject;

//////////////////////////////////////////////////////////////////////////
// Generated PlayFab Localization API Functions
//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////
// Localization
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct PLAYFAB_API FLocalizationGetLanguageListRequest
{
    GENERATED_USTRUCT_BODY()
public:
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FLocalizationGetLanguageListResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /** The list of allowed languages, in BCP47 two-letter format */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Localization | Localization Models")
        FString LanguageList;
};

