/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMapTable, <PLManagedObjectContextPTPNotificationDelegate>, PLDelayedFiledSystemDeletions, NSMutableArray, NSObject<OS_xpc_object>, NSMutableSet, PLPhotoLibrary, PLMergePolicy;

@interface PLManagedObjectContext : NSManagedObjectContext  {
    BOOL _hasMetadataChanges;
    BOOL _isConnectedToChangeHub;
    BOOL _mergingChanges;
    BOOL _savingDuringMerge;
    BOOL _isInitializingSingletons;
    BOOL _isBackingALAssetsLibrary;
    BOOL _suspendClientServerTransactions;
    PLMergePolicy *_mergePolicy;
    PLDelayedFiledSystemDeletions *_delayedDeletions;
    NSMutableArray *_delayedMomentAssetUpdates;
    NSMapTable *_delayedMomentAssetDeletions;
    NSMutableSet *_delayedCloudFeedDeletionEntries;
    NSMutableArray *_delayedCloudFeedAlbumUpdates;
    NSMutableArray *_delayedCloudFeedAssetInserts;
    NSMutableArray *_delayedCloudFeedAssetUpdates;
    NSMutableArray *_delayedCloudFeedCommentInserts;
    NSMutableArray *_delayedCloudFeedInvitationRecordUpdates;
    NSMutableArray *_delayedDupeAnalysisNormalInserts;
    NSMutableArray *_delayedDupeAnalysisCloudInserts;
    NSMutableSet *_delayedAssetsForFileSystemPersistency;
    PLPhotoLibrary *_photoLibrary;
    <PLManagedObjectContextPTPNotificationDelegate> *_ptpNotificationDelegate;
    BOOL _regenerateVideoThumbnails;
    NSObject<OS_xpc_object> *changeHubConnection;
}

@property PLPhotoLibrary * photoLibrary;
@property(readonly) BOOL isUserInterfaceContext;
@property BOOL regenerateVideoThumbnails;
@property BOOL hasMetadataChanges;
@property BOOL suspendClientServerTransactions;
@property(readonly) BOOL mergingChanges;
@property(readonly) BOOL savingDuringMerge;
@property BOOL isInitializingSingletons;
@property NSObject<OS_xpc_object> * changeHubConnection;
@property(retain) PLDelayedFiledSystemDeletions * delayedDeletions;
@property <PLManagedObjectContextPTPNotificationDelegate> * ptpNotificationDelegate;
@property BOOL isBackingALAssetsLibrary;

+ (void)handleUnknownMergeEvent;
+ (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(id)arg2;
+ (void)delayedAssetsForFileSystemPersistencyUpdatesFromChangeHubEvent:(id)arg1 assetUpdates:(id*)arg2;
+ (void)delayedDupeAnalysisDataFromChangeHubEvent:(id)arg1 normalInserts:(id*)arg2 cloudInserts:(id*)arg3;
+ (void)delayedCloudFeedDataFromChangeHubEvent:(id)arg1 albumUpdates:(id*)arg2 assetInserts:(id*)arg3 assetUpdates:(id*)arg4 commentInserts:(id*)arg5 invitationRecordUpdates:(id*)arg6 deletionEntries:(id*)arg7;
+ (void)delayedMomentDataFromChangeHubEvent:(id)arg1 insertsAndUpdates:(id*)arg2 deletes:(id*)arg3;
+ (id)oldAuxDatabasePath;
+ (BOOL)hasAtLeastOneAsset;
+ (void)moveOldStoreAside;
+ (id)readOnlyContext;
+ (id)contextForDatabaseCreation;
+ (BOOL)assetsLibraryLoggingEnabled;
+ (id)allContextsNotIdenticalTo:(void*)arg1;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(id)arg3;
+ (BOOL)canMergeRemoteChanges;
+ (BOOL)useModelMigratorToCreateDatabase;
+ (void)recordVersion:(int)arg1 forStore:(id)arg2 extraMetadata:(id)arg3;
+ (void)getStoreURL:(id*)arg1 options:(id*)arg2;
+ (BOOL)moveStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (id)defaultStoreURL;
+ (void)getStoreURL:(id*)arg1 options:(id*)arg2 forFileURL:(id)arg3;
+ (void)configurePersistentStoreCoordinator:(id)arg1;
+ (id)sharedPersistentStoreCoordinator;
+ (id)contextForPhotoLibrary:(id)arg1;
+ (BOOL)databaseIsMissing;
+ (BOOL)storeIsOldEnough;
+ (id)databasePath;
+ (id)managedObjectModel;

- (void)setIsInitializingSingletons:(BOOL)arg1;
- (BOOL)isInitializingSingletons;
- (void)setRegenerateVideoThumbnails:(BOOL)arg1;
- (BOOL)regenerateVideoThumbnails;
- (void)setSuspendClientServerTransactions:(BOOL)arg1;
- (BOOL)savingDuringMerge;
- (void)setChangeHubConnection:(id)arg1;
- (id)changeHubConnection;
- (void)getDelayedAssetsForFilesystemPersistencyUpdates:(id*)arg1;
- (void)appendDelayedAssetsForFileSystemPersistencyUpdate:(id)arg1;
- (void)appendDelayedDupeAnalysisToXPCMessage:(id)arg1;
- (void)getDelayedDupeAnalysisNormalInserts:(id*)arg1 cloudInserts:(id*)arg2;
- (void)appendDelayedCloudFeedDataToXPCMessage:(id)arg1;
- (void)getDelayedCloudFeedAlbumUpdates:(id*)arg1 assetInserts:(id*)arg2 assetUpdates:(id*)arg3 commentInserts:(id*)arg4 invitationRecordUpdates:(id*)arg5 deletionEntries:(id*)arg6;
- (void)recordInvitationRecordForCloudFeedUpdate:(id)arg1;
- (void)recordCommentForCloudFeedUpdate:(id)arg1;
- (void)recordAlbumForCloudFeedUpdate:(id)arg1;
- (void)appendDelayedMomentDataToXPCMessage:(id)arg1;
- (void)getDelayedMomentInsertsAndUpdates:(id*)arg1 deletes:(id*)arg2;
- (BOOL)globalBoolValueForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (void)_informPTPDelegateAboutChangesFromNotification:(id)arg1;
- (void)_contextObjectsDidChange:(id)arg1;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (id)ptpNotificationDelegate;
- (BOOL)_tooManyAssetChangesToHandle:(unsigned int)arg1;
- (BOOL)isBackingALAssetsLibrary;
- (void)_recordNormalAssetForDupeAnalyzis:(id)arg1;
- (void)_recordStreamAssetForDupeAnalyzis:(id)arg1;
- (BOOL)_isValidDelete:(id)arg1;
- (id)delayedDeletions;
- (BOOL)suspendClientServerTransactions;
- (void)disconnectFromChangeHub;
- (void)setDelayedDeletions:(id)arg1;
- (void)setPtpNotificationDelegate:(id)arg1;
- (void)tearDownLocalChangeNotifications;
- (void)setupLocalChangeNotifications;
- (void)connectToChangeHub;
- (id)initWithConcurrencyType:(unsigned int)arg1 useSharedPersistentStoreCoordinator:(BOOL)arg2;
- (void)recordAssetForFileSystemPersistencyUpdate:(id)arg1;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (void)recordAssetForDupeAnalysis:(id)arg1;
- (void)recordAssetForCloudFeedUpdate:(id)arg1;
- (void)recordAssetForMomentUpdate:(id)arg1;
- (BOOL)mergingChanges;
- (void)setPhotoLibrary:(id)arg1;
- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2;
- (id)photoLibrary;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)globalValueForKey:(id)arg1;
- (BOOL)isUserInterfaceContext;
- (void)setHasMetadataChanges:(BOOL)arg1;
- (BOOL)hasMetadataChanges;
- (void)setIsBackingALAssetsLibrary:(BOOL)arg1;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (unsigned int)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (BOOL)isReadOnly;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (BOOL)save:(id*)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;

@end
