//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated cpp file for the play fab models
//
// API: Multiplayer
//////////////////////////////////////////////////////////////////////////////////////////////

#include "PlayFabMultiplayerModelDecoder.h"
#include "PlayFabPrivate.h"

//////////////////////////////////////////////////////////////////////////
// Generated PlayFab Multiplayer API Functions
//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////
// Matchmaking
//////////////////////////////////////////////////////



///////////////////////////////////////////////////////
// Matchmaking Admin
//////////////////////////////////////////////////////



///////////////////////////////////////////////////////
// MultiplayerServer
//////////////////////////////////////////////////////

FMultiplayerCreateBuildWithCustomContainerResponse UPlayFabMultiplayerModelDecoder::decodeCreateBuildWithCustomContainerResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerCreateBuildWithCustomContainerResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.BuildId = !(dataObj->HasField("BuildId")) ? TEXT("") : dataObj->GetStringField("BuildId");
    tempStruct.BuildName = !(dataObj->HasField("BuildName")) ? TEXT("") : dataObj->GetStringField("BuildName");
    GetEnumValueFromString<EContainerFlavor>(TEXT("EContainerFlavor"), dataObj->GetStringField("ContainerFlavor"), tempStruct.ContainerFlavor);
    tempStruct.ContainerRunCommand = !(dataObj->HasField("ContainerRunCommand")) ? TEXT("") : dataObj->GetStringField("ContainerRunCommand");
    tempStruct.CreationTime = !(dataObj->HasField("CreationTime")) ? TEXT("") : dataObj->GetStringField("CreationTime");
    tempStruct.CustomGameContainerImage = !(dataObj->HasField("CustomGameContainerImage")) ? nullptr : dataObj->GetObjectField("CustomGameContainerImage");
    tempStruct.GameAssetReferences = !(dataObj->HasField("GameAssetReferences")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("GameAssetReferences");
    tempStruct.GameCertificateReferences = !(dataObj->HasField("GameCertificateReferences")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("GameCertificateReferences");
    tempStruct.Metadata = !(dataObj->HasField("Metadata")) ? nullptr : dataObj->GetObjectField("Metadata");
    tempStruct.MultiplayerServerCountPerVm = !(dataObj->HasField("MultiplayerServerCountPerVm")) ? 0 : int(dataObj->GetNumberField("MultiplayerServerCountPerVm"));
    tempStruct.Ports = !(dataObj->HasField("Ports")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("Ports");
    tempStruct.RegionConfigurations = !(dataObj->HasField("RegionConfigurations")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("RegionConfigurations");
    GetEnumValueFromString<EAzureVmSize>(TEXT("EAzureVmSize"), dataObj->GetStringField("VmSize"), tempStruct.VmSize);

    return tempStruct;
}

FMultiplayerCreateBuildWithManagedContainerResponse UPlayFabMultiplayerModelDecoder::decodeCreateBuildWithManagedContainerResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerCreateBuildWithManagedContainerResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.BuildId = !(dataObj->HasField("BuildId")) ? TEXT("") : dataObj->GetStringField("BuildId");
    tempStruct.BuildName = !(dataObj->HasField("BuildName")) ? TEXT("") : dataObj->GetStringField("BuildName");
    GetEnumValueFromString<EContainerFlavor>(TEXT("EContainerFlavor"), dataObj->GetStringField("ContainerFlavor"), tempStruct.ContainerFlavor);
    tempStruct.CreationTime = !(dataObj->HasField("CreationTime")) ? TEXT("") : dataObj->GetStringField("CreationTime");
    tempStruct.GameAssetReferences = !(dataObj->HasField("GameAssetReferences")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("GameAssetReferences");
    tempStruct.GameCertificateReferences = !(dataObj->HasField("GameCertificateReferences")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("GameCertificateReferences");
    tempStruct.Metadata = !(dataObj->HasField("Metadata")) ? nullptr : dataObj->GetObjectField("Metadata");
    tempStruct.MultiplayerServerCountPerVm = !(dataObj->HasField("MultiplayerServerCountPerVm")) ? 0 : int(dataObj->GetNumberField("MultiplayerServerCountPerVm"));
    tempStruct.Ports = !(dataObj->HasField("Ports")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("Ports");
    tempStruct.RegionConfigurations = !(dataObj->HasField("RegionConfigurations")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("RegionConfigurations");
    tempStruct.StartMultiplayerServerCommand = !(dataObj->HasField("StartMultiplayerServerCommand")) ? TEXT("") : dataObj->GetStringField("StartMultiplayerServerCommand");
    GetEnumValueFromString<EAzureVmSize>(TEXT("EAzureVmSize"), dataObj->GetStringField("VmSize"), tempStruct.VmSize);

    return tempStruct;
}

FMultiplayerCreateRemoteUserResponse UPlayFabMultiplayerModelDecoder::decodeCreateRemoteUserResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerCreateRemoteUserResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.ExpirationTime = !(dataObj->HasField("ExpirationTime")) ? TEXT("") : dataObj->GetStringField("ExpirationTime");
    tempStruct.Password = !(dataObj->HasField("Password")) ? TEXT("") : dataObj->GetStringField("Password");
    tempStruct.Username = !(dataObj->HasField("Username")) ? TEXT("") : dataObj->GetStringField("Username");

    return tempStruct;
}

FMultiplayerEmptyResponse UPlayFabMultiplayerModelDecoder::decodeEmptyResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerEmptyResponse tempStruct;


    return tempStruct;
}

FMultiplayerEnableMultiplayerServersForTitleResponse UPlayFabMultiplayerModelDecoder::decodeEnableMultiplayerServersForTitleResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerEnableMultiplayerServersForTitleResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    GetEnumValueFromString<ETitleMultiplayerServerEnabledStatus>(TEXT("ETitleMultiplayerServerEnabledStatus"), dataObj->GetStringField("Status"), tempStruct.Status);

    return tempStruct;
}

FMultiplayerGetAssetUploadUrlResponse UPlayFabMultiplayerModelDecoder::decodeGetAssetUploadUrlResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerGetAssetUploadUrlResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.AssetUploadUrl = !(dataObj->HasField("AssetUploadUrl")) ? TEXT("") : dataObj->GetStringField("AssetUploadUrl");
    tempStruct.FileName = !(dataObj->HasField("FileName")) ? TEXT("") : dataObj->GetStringField("FileName");

    return tempStruct;
}

FMultiplayerGetBuildResponse UPlayFabMultiplayerModelDecoder::decodeGetBuildResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerGetBuildResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.BuildId = !(dataObj->HasField("BuildId")) ? TEXT("") : dataObj->GetStringField("BuildId");
    tempStruct.BuildName = !(dataObj->HasField("BuildName")) ? TEXT("") : dataObj->GetStringField("BuildName");
    GetEnumValueFromString<EContainerFlavor>(TEXT("EContainerFlavor"), dataObj->GetStringField("ContainerFlavor"), tempStruct.ContainerFlavor);
    tempStruct.ContainerRunCommand = !(dataObj->HasField("ContainerRunCommand")) ? TEXT("") : dataObj->GetStringField("ContainerRunCommand");
    tempStruct.CreationTime = !(dataObj->HasField("CreationTime")) ? TEXT("") : dataObj->GetStringField("CreationTime");
    tempStruct.CustomGameContainerImage = !(dataObj->HasField("CustomGameContainerImage")) ? nullptr : dataObj->GetObjectField("CustomGameContainerImage");
    tempStruct.GameAssetReferences = !(dataObj->HasField("GameAssetReferences")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("GameAssetReferences");
    tempStruct.GameCertificateReferences = !(dataObj->HasField("GameCertificateReferences")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("GameCertificateReferences");
    tempStruct.Metadata = !(dataObj->HasField("Metadata")) ? nullptr : dataObj->GetObjectField("Metadata");
    tempStruct.MultiplayerServerCountPerVm = !(dataObj->HasField("MultiplayerServerCountPerVm")) ? 0 : int(dataObj->GetNumberField("MultiplayerServerCountPerVm"));
    tempStruct.Ports = !(dataObj->HasField("Ports")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("Ports");
    tempStruct.RegionConfigurations = !(dataObj->HasField("RegionConfigurations")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("RegionConfigurations");
    tempStruct.StartMultiplayerServerCommand = !(dataObj->HasField("StartMultiplayerServerCommand")) ? TEXT("") : dataObj->GetStringField("StartMultiplayerServerCommand");
    GetEnumValueFromString<EAzureVmSize>(TEXT("EAzureVmSize"), dataObj->GetStringField("VmSize"), tempStruct.VmSize);

    return tempStruct;
}

FMultiplayerGetContainerRegistryCredentialsResponse UPlayFabMultiplayerModelDecoder::decodeGetContainerRegistryCredentialsResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerGetContainerRegistryCredentialsResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.DnsName = !(dataObj->HasField("DnsName")) ? TEXT("") : dataObj->GetStringField("DnsName");
    tempStruct.Password = !(dataObj->HasField("Password")) ? TEXT("") : dataObj->GetStringField("Password");
    tempStruct.Username = !(dataObj->HasField("Username")) ? TEXT("") : dataObj->GetStringField("Username");

    return tempStruct;
}

FMultiplayerGetMultiplayerServerDetailsResponse UPlayFabMultiplayerModelDecoder::decodeGetMultiplayerServerDetailsResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerGetMultiplayerServerDetailsResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.ConnectedPlayers = !(dataObj->HasField("ConnectedPlayers")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("ConnectedPlayers");
    tempStruct.IPV4Address = !(dataObj->HasField("IPV4Address")) ? TEXT("") : dataObj->GetStringField("IPV4Address");
    tempStruct.LastStateTransitionTime = !(dataObj->HasField("LastStateTransitionTime")) ? TEXT("") : dataObj->GetStringField("LastStateTransitionTime");
    tempStruct.Ports = !(dataObj->HasField("Ports")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("Ports");
    GetEnumValueFromString<EAzureRegion>(TEXT("EAzureRegion"), dataObj->GetStringField("Region"), tempStruct.Region);
    tempStruct.ServerId = !(dataObj->HasField("ServerId")) ? TEXT("") : dataObj->GetStringField("ServerId");
    tempStruct.SessionId = !(dataObj->HasField("SessionId")) ? TEXT("") : dataObj->GetStringField("SessionId");
    tempStruct.State = !(dataObj->HasField("State")) ? TEXT("") : dataObj->GetStringField("State");
    tempStruct.VmId = !(dataObj->HasField("VmId")) ? TEXT("") : dataObj->GetStringField("VmId");

    return tempStruct;
}

FMultiplayerGetRemoteLoginEndpointResponse UPlayFabMultiplayerModelDecoder::decodeGetRemoteLoginEndpointResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerGetRemoteLoginEndpointResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.IPV4Address = !(dataObj->HasField("IPV4Address")) ? TEXT("") : dataObj->GetStringField("IPV4Address");
    tempStruct.Port = !(dataObj->HasField("Port")) ? 0 : int(dataObj->GetNumberField("Port"));

    return tempStruct;
}

FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse UPlayFabMultiplayerModelDecoder::decodeGetTitleEnabledForMultiplayerServersStatusResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    GetEnumValueFromString<ETitleMultiplayerServerEnabledStatus>(TEXT("ETitleMultiplayerServerEnabledStatus"), dataObj->GetStringField("Status"), tempStruct.Status);

    return tempStruct;
}

FMultiplayerListMultiplayerServersResponse UPlayFabMultiplayerModelDecoder::decodeListMultiplayerServersResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerListMultiplayerServersResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.MultiplayerServerSummaries = !(dataObj->HasField("MultiplayerServerSummaries")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("MultiplayerServerSummaries");
    tempStruct.PageSize = !(dataObj->HasField("PageSize")) ? 0 : int(dataObj->GetNumberField("PageSize"));
    tempStruct.SkipToken = !(dataObj->HasField("SkipToken")) ? TEXT("") : dataObj->GetStringField("SkipToken");

    return tempStruct;
}

FMultiplayerListAssetSummariesResponse UPlayFabMultiplayerModelDecoder::decodeListAssetSummariesResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerListAssetSummariesResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.AssetSummaries = !(dataObj->HasField("AssetSummaries")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("AssetSummaries");
    tempStruct.PageSize = !(dataObj->HasField("PageSize")) ? 0 : int(dataObj->GetNumberField("PageSize"));
    tempStruct.SkipToken = !(dataObj->HasField("SkipToken")) ? TEXT("") : dataObj->GetStringField("SkipToken");

    return tempStruct;
}

FMultiplayerListBuildSummariesResponse UPlayFabMultiplayerModelDecoder::decodeListBuildSummariesResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerListBuildSummariesResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.BuildSummaries = !(dataObj->HasField("BuildSummaries")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("BuildSummaries");
    tempStruct.PageSize = !(dataObj->HasField("PageSize")) ? 0 : int(dataObj->GetNumberField("PageSize"));
    tempStruct.SkipToken = !(dataObj->HasField("SkipToken")) ? TEXT("") : dataObj->GetStringField("SkipToken");

    return tempStruct;
}

FMultiplayerListCertificateSummariesResponse UPlayFabMultiplayerModelDecoder::decodeListCertificateSummariesResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerListCertificateSummariesResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.CertificateSummaries = !(dataObj->HasField("CertificateSummaries")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("CertificateSummaries");
    tempStruct.PageSize = !(dataObj->HasField("PageSize")) ? 0 : int(dataObj->GetNumberField("PageSize"));
    tempStruct.SkipToken = !(dataObj->HasField("SkipToken")) ? TEXT("") : dataObj->GetStringField("SkipToken");

    return tempStruct;
}

FMultiplayerListContainerImagesResponse UPlayFabMultiplayerModelDecoder::decodeListContainerImagesResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerListContainerImagesResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.Images = !(dataObj->HasField("Images")) ? TEXT("") : FString::Join(dataObj->GetStringArrayField("Images"), TEXT(","));
    tempStruct.PageSize = !(dataObj->HasField("PageSize")) ? 0 : int(dataObj->GetNumberField("PageSize"));
    tempStruct.SkipToken = !(dataObj->HasField("SkipToken")) ? TEXT("") : dataObj->GetStringField("SkipToken");

    return tempStruct;
}

FMultiplayerListContainerImageTagsResponse UPlayFabMultiplayerModelDecoder::decodeListContainerImageTagsResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerListContainerImageTagsResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.Tags = !(dataObj->HasField("Tags")) ? TEXT("") : FString::Join(dataObj->GetStringArrayField("Tags"), TEXT(","));

    return tempStruct;
}

FMultiplayerListQosServersResponse UPlayFabMultiplayerModelDecoder::decodeListQosServersResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerListQosServersResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.PageSize = !(dataObj->HasField("PageSize")) ? 0 : int(dataObj->GetNumberField("PageSize"));
    tempStruct.QosServers = !(dataObj->HasField("QosServers")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("QosServers");
    tempStruct.SkipToken = !(dataObj->HasField("SkipToken")) ? TEXT("") : dataObj->GetStringField("SkipToken");

    return tempStruct;
}

FMultiplayerListVirtualMachineSummariesResponse UPlayFabMultiplayerModelDecoder::decodeListVirtualMachineSummariesResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerListVirtualMachineSummariesResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.PageSize = !(dataObj->HasField("PageSize")) ? 0 : int(dataObj->GetNumberField("PageSize"));
    tempStruct.SkipToken = !(dataObj->HasField("SkipToken")) ? TEXT("") : dataObj->GetStringField("SkipToken");
    tempStruct.VirtualMachines = !(dataObj->HasField("VirtualMachines")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("VirtualMachines");

    return tempStruct;
}

FMultiplayerRequestMultiplayerServerResponse UPlayFabMultiplayerModelDecoder::decodeRequestMultiplayerServerResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerRequestMultiplayerServerResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.ConnectedPlayers = !(dataObj->HasField("ConnectedPlayers")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("ConnectedPlayers");
    tempStruct.IPV4Address = !(dataObj->HasField("IPV4Address")) ? TEXT("") : dataObj->GetStringField("IPV4Address");
    tempStruct.LastStateTransitionTime = !(dataObj->HasField("LastStateTransitionTime")) ? TEXT("") : dataObj->GetStringField("LastStateTransitionTime");
    tempStruct.Ports = !(dataObj->HasField("Ports")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("Ports");
    GetEnumValueFromString<EAzureRegion>(TEXT("EAzureRegion"), dataObj->GetStringField("Region"), tempStruct.Region);
    tempStruct.ServerId = !(dataObj->HasField("ServerId")) ? TEXT("") : dataObj->GetStringField("ServerId");
    tempStruct.SessionId = !(dataObj->HasField("SessionId")) ? TEXT("") : dataObj->GetStringField("SessionId");
    tempStruct.State = !(dataObj->HasField("State")) ? TEXT("") : dataObj->GetStringField("State");
    tempStruct.VmId = !(dataObj->HasField("VmId")) ? TEXT("") : dataObj->GetStringField("VmId");

    return tempStruct;
}

FMultiplayerRolloverContainerRegistryCredentialsResponse UPlayFabMultiplayerModelDecoder::decodeRolloverContainerRegistryCredentialsResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FMultiplayerRolloverContainerRegistryCredentialsResponse tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.DnsName = !(dataObj->HasField("DnsName")) ? TEXT("") : dataObj->GetStringField("DnsName");
    tempStruct.Password = !(dataObj->HasField("Password")) ? TEXT("") : dataObj->GetStringField("Password");
    tempStruct.Username = !(dataObj->HasField("Username")) ? TEXT("") : dataObj->GetStringField("Username");

    return tempStruct;
}


