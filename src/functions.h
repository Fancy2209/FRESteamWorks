/* automatically generated by generateAPI.rb */
/* START GENERATED CODE */
/********************************/
/* General Steamworks functions */
/********************************/
X(AIRSteam_Init) /* = 0 */
X(AIRSteam_RunCallbacks) /* = 1 */
X(AIRSteam_GetUserID) /* = 2 */
X(AIRSteam_GetAppID) /* = 3 */
X(AIRSteam_GetAvailableGameLanguages) /* = 4 */
X(AIRSteam_GetCurrentGameLanguage) /* = 5 */
X(AIRSteam_GetPersonaName) /* = 6 */
X(AIRSteam_RestartAppIfNecessary) /* = 7 */
/************************/
/* Stats / Achievements */
/************************/
X(AIRSteam_RequestStats) /* = 8 */
X(AIRSteam_SetAchievement) /* = 9 */
X(AIRSteam_ClearAchievement) /* = 10 */
X(AIRSteam_IsAchievement) /* = 11 */
X(AIRSteam_IndicateAchievementProgress) /* = 12 */
X(AIRSteam_GetStatInt) /* = 13 */
X(AIRSteam_GetStatFloat) /* = 14 */
X(AIRSteam_SetStatInt) /* = 15 */
X(AIRSteam_SetStatFloat) /* = 16 */
X(AIRSteam_StoreStats) /* = 17 */
X(AIRSteam_ResetAllStats) /* = 18 */
X(AIRSteam_RequestGlobalStats) /* = 19 */
X(AIRSteam_GetGlobalStatInt) /* = 20 */
X(AIRSteam_GetGlobalStatFloat) /* = 21 */
X(AIRSteam_GetGlobalStatHistoryInt) /* = 22 */
X(AIRSteam_GetGlobalStatHistoryFloat) /* = 23 */
/****************/
/* Leaderboards */
/****************/
X(AIRSteam_FindLeaderboard) /* = 24 */
X(AIRSteam_FindOrCreateLeaderboard) /* = 25 */
X(AIRSteam_FindLeaderboardResult) /* = 26 */
X(AIRSteam_GetLeaderboardName) /* = 27 */
X(AIRSteam_GetLeaderboardEntryCount) /* = 28 */
X(AIRSteam_GetLeaderboardSortMethod) /* = 29 */
X(AIRSteam_GetLeaderboardDisplayType) /* = 30 */
X(AIRSteam_UploadLeaderboardScore) /* = 31 */
X(AIRSteam_UploadLeaderboardScoreResult) /* = 32 */
X(AIRSteam_DownloadLeaderboardEntries) /* = 33 */
X(AIRSteam_DownloadLeaderboardEntriesResult) /* = 34 */
/**************************/
/* Cloud / Remote Storage */
/**************************/
X(AIRSteam_GetFileCount) /* = 35 */
X(AIRSteam_GetFileSize) /* = 36 */
X(AIRSteam_FileExists) /* = 37 */
X(AIRSteam_FileWrite) /* = 38 */
X(AIRSteam_FileRead) /* = 39 */
X(AIRSteam_FileDelete) /* = 40 */
X(AIRSteam_FileShare) /* = 41 */
X(AIRSteam_FileShareResult) /* = 42 */
X(AIRSteam_IsCloudEnabledForApp) /* = 43 */
X(AIRSteam_SetCloudEnabledForApp) /* = 44 */
X(AIRSteam_GetQuota) /* = 45 */
/******************/
/* UGC / Workshop */
/******************/
X(AIRSteam_UGCDownload) /* = 46 */
X(AIRSteam_UGCRead) /* = 47 */
X(AIRSteam_GetUGCDownloadProgress) /* = 48 */
X(AIRSteam_GetUGCDownloadResult) /* = 49 */
X(AIRSteam_PublishWorkshopFile) /* = 50 */
X(AIRSteam_PublishWorkshopFileResult) /* = 51 */
X(AIRSteam_DeletePublishedFile) /* = 52 */
X(AIRSteam_GetPublishedFileDetails) /* = 53 */
X(AIRSteam_GetPublishedFileDetailsResult) /* = 54 */
X(AIRSteam_EnumerateUserPublishedFiles) /* = 55 */
X(AIRSteam_EnumerateUserPublishedFilesResult) /* = 56 */
X(AIRSteam_EnumeratePublishedWorkshopFiles) /* = 57 */
X(AIRSteam_EnumeratePublishedWorkshopFilesResult) /* = 58 */
X(AIRSteam_EnumerateUserSubscribedFiles) /* = 59 */
X(AIRSteam_EnumerateUserSubscribedFilesResult) /* = 60 */
X(AIRSteam_EnumerateUserSharedWorkshopFiles) /* = 61 */
X(AIRSteam_EnumerateUserSharedWorkshopFilesResult) /* = 62 */
X(AIRSteam_EnumeratePublishedFilesByUserAction) /* = 63 */
X(AIRSteam_EnumeratePublishedFilesByUserActionResult) /* = 64 */
X(AIRSteam_SubscribePublishedFile) /* = 65 */
X(AIRSteam_UnsubscribePublishedFile) /* = 66 */
X(AIRSteam_CreatePublishedFileUpdateRequest) /* = 67 */
X(AIRSteam_UpdatePublishedFileFile) /* = 68 */
X(AIRSteam_UpdatePublishedFilePreviewFile) /* = 69 */
X(AIRSteam_UpdatePublishedFileTitle) /* = 70 */
X(AIRSteam_UpdatePublishedFileDescription) /* = 71 */
X(AIRSteam_UpdatePublishedFileSetChangeDescription) /* = 72 */
X(AIRSteam_UpdatePublishedFileVisibility) /* = 73 */
X(AIRSteam_UpdatePublishedFileTags) /* = 74 */
X(AIRSteam_CommitPublishedFileUpdate) /* = 75 */
X(AIRSteam_GetPublishedItemVoteDetails) /* = 76 */
X(AIRSteam_GetPublishedItemVoteDetailsResult) /* = 77 */
X(AIRSteam_GetUserPublishedItemVoteDetails) /* = 78 */
X(AIRSteam_GetUserPublishedItemVoteDetailsResult) /* = 79 */
X(AIRSteam_UpdateUserPublishedItemVote) /* = 80 */
X(AIRSteam_SetUserPublishedFileAction) /* = 81 */
/***********/
/* Friends */
/***********/
X(AIRSteam_GetFriendCount) /* = 82 */
X(AIRSteam_GetFriendByIndex) /* = 83 */
X(AIRSteam_GetFriendPersonaName) /* = 84 */
X(AIRSteam_GetSmallFriendAvatar) /* = 85 */
X(AIRSteam_GetMediumFriendAvatar) /* = 86 */
/******************************/
/* Authentication & Ownership */
/******************************/
X(AIRSteam_GetAuthSessionTicket) /* = 87 */
X(AIRSteam_GetAuthSessionTicketResult) /* = 88 */
X(AIRSteam_BeginAuthSession) /* = 89 */
X(AIRSteam_EndAuthSession) /* = 90 */
X(AIRSteam_CancelAuthTicket) /* = 91 */
X(AIRSteam_UserHasLicenseForApp) /* = 92 */
X(AIRSteam_RequestEncryptedAppTicket) /* = 93 */
X(AIRSteam_GetEncryptedAppTicket) /* = 94 */
/***********/
/* Overlay */
/***********/
X(AIRSteam_ActivateGameOverlay) /* = 95 */
X(AIRSteam_ActivateGameOverlayToUser) /* = 96 */
X(AIRSteam_ActivateGameOverlayToWebPage) /* = 97 */
X(AIRSteam_ActivateGameOverlayToStore) /* = 98 */
X(AIRSteam_ActivateGameOverlayInviteDialog) /* = 99 */
X(AIRSteam_IsOverlayEnabled) /* = 100 */
X(AIRSteam_SetOverlayNotificationPosition) /* = 101 */
/***********************/
/* DLC / subscriptions */
/***********************/
X(AIRSteam_IsSubscribedApp) /* = 102 */
X(AIRSteam_IsDLCInstalled) /* = 103 */
X(AIRSteam_GetDLCCount) /* = 104 */
X(AIRSteam_InstallDLC) /* = 105 */
X(AIRSteam_UninstallDLC) /* = 106 */
X(AIRSteam_DLCInstalledResult) /* = 107 */
/********************/
/* Microtransaction */
/********************/
X(AIRSteam_MicroTxnResult) /* = 108 */
/**********************************/
/* Other non-Steamworks functions */
/**********************************/
X(AIRSteam_GetEnv) /* = 109 */
X(AIRSteam_SetEnv) /* = 110 */
/* END GENERATED CODE */
