//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated model file for the UE4 PlayFab plugin.
// This model file contains the request and response USTRUCTS
//
// API: Events
//////////////////////////////////////////////////////////////////////////////////////////////

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabEnums.h"
#include "PlayFabEventsModels.generated.h"

class UPlayFabJsonObject;

//////////////////////////////////////////////////////////////////////////
// Generated PlayFab Events API Functions
//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////
// PlayStream Events
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FEventsWriteEventsRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /** Collection of events to write to PlayStream. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Events | PlayStream Events Models")
        TArray<UPlayFabJsonObject*> Events;
};

USTRUCT(BlueprintType)
struct FEventsWriteEventsResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /**
     * The unique identifiers assigned by the server to the events, in the same order as the events in the request. Only
     * returned if FlushToPlayStream option is true.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Events | PlayStream Events Models")
        FString AssignedEventIds;
};

