/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDAuthenticationPluginManager, ACDAccountStoreFilter, ACDDataclassOwnersManager, ACDDatabase, NSMutableArray, ACDClient, <ACDAccountStoreDelegate>, ACDClientAuthorizationManager, ACDAccessPluginManager;

@interface ACDAccountStore : ACAccountStore <ACDAccountStoreProtocol> {
    NSMutableArray *_accountChanges;
    ACDDatabase *_database;
    ACDClientAuthorizationManager *_authorizationManager;
    BOOL _notificationsEnabled;
    BOOL _migrationInProgress;
    <ACDAccountStoreDelegate> *_delegate;
    ACDClient *_client;
    ACDAccountStoreFilter *_filter;
    ACDAuthenticationPluginManager *_authenticationPluginManager;
    ACDAccessPluginManager *_accessPluginManager;
    ACDDataclassOwnersManager *_dataclassOwnersManager;
}

@property <ACDAccountStoreDelegate> * delegate;
@property ACDClient * client;
@property(readonly) ACDClientAuthorizationManager * authorizationManager;
@property ACDAccountStoreFilter * filter;
@property(retain) ACDAuthenticationPluginManager * authenticationPluginManager;
@property(retain) ACDAccessPluginManager * accessPluginManager;
@property(retain) ACDDataclassOwnersManager * dataclassOwnersManager;
@property BOOL notificationsEnabled;
@property(getter=isMigrationInProgress) BOOL migrationInProgress;


- (void)setMigrationInProgress:(BOOL)arg1;
- (void)setDataclassOwnersManager:(id)arg1;
- (void)setAccessPluginManager:(id)arg1;
- (id)accessPluginManager;
- (void)setAuthenticationPluginManager:(id)arg1;
- (id)authenticationPluginManager;
- (void)saveAccount:(id)arg1 pid:(id)arg2 verify:(BOOL)arg3 dataclassActions:(id)arg4 completion:(id)arg5;
- (id)masterCredentialForAccountIdentifier:(id)arg1;
- (void)deleteAccountNoSave:(id)arg1 error:(id*)arg2;
- (void)updateAccountNoSave:(id)arg1 error:(id*)arg2;
- (void)addAccountNoSave:(id)arg1 error:(id*)arg2;
- (BOOL)accountsExistWithAccountTypeIdentifier:(id)arg1;
- (id)accountsWithAccountTypeIdentifier:(id)arg1;
- (void)saveAccount:(id)arg1 withHandler:(id)arg2;
- (id)authorizationManager;
- (void)_requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 allowUserInteraction:(BOOL)arg3 withHandler:(id)arg4;
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)_handleAccountMod:(id)arg1 withDataclassActions:(id)arg2;
- (id)_handleAccountAdd:(id)arg1 withDataclassActions:(id)arg2;
- (void)_completeSave:(id)arg1 dataclassActions:(id)arg2 completion:(id)arg3;
- (BOOL)_canSaveAccount:(id)arg1;
- (id)_removeAccountNoSave:(id)arg1 withDataclassActions:(id)arg2;
- (BOOL)_isManagedAccount:(id)arg1 enabledForManagedDataclass:(id)arg2;
- (BOOL)_canManagedAccountType:(id)arg1 syncManagedDataclass:(id)arg2;
- (id)_legacyCredentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)_save;
- (void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;
- (id)_dataclassWithName:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)_displayAccountForAccount:(id)arg1;
- (void)_deleteAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3;
- (id)_accountWithIdentifier:(id)arg1;
- (void)_updateAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3;
- (void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 isNew:(BOOL)arg3 error:(id*)arg4;
- (id)_addAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3;
- (void)_noteAccountStoreDidSaveAccountsWithAccountTypeIdentifiers:(id)arg1;
- (id)dataclassOwnersManager;
- (id)_childAccountsForAccountWithID:(id)arg1;
- (BOOL)isMigrationInProgress;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (id)_remoteAccountStore;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id)arg3;
- (void)isPushSupportedForAccount:(id)arg1 completion:(id)arg2;
- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(id)arg2;
- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(id)arg3;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)typeIdentifierForDomain:(id)arg1 withHandler:(id)arg2;
- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)permissionForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(id)arg4;
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(id)arg3;
- (void)removeAccountType:(id)arg1 withHandler:(id)arg2;
- (void)insertAccountType:(id)arg1 withHandler:(id)arg2;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(id)arg4;
- (void)canSaveAccount:(id)arg1 completion:(id)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (void)accessKeysForAccountType:(id)arg1 handler:(id)arg2;
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(id)arg2;
- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(id)arg2;
- (void)dataclassActionsForAccountSave:(id)arg1 completion:(id)arg2;
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(id)arg2;
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(id)arg2;
- (void)dataclassesWithHandler:(id)arg1;
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)credentialForAccountWithIdentifier:(id)arg1 bundleID:(id)arg2 handler:(id)arg3;
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountTypeWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(id)arg3;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id)arg2;
- (void)accountExistsWithDescription:(id)arg1 completion:(id)arg2;
- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(id)arg2;
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(id)arg2;
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountsWithAccountType:(id)arg1 handler:(id)arg2;
- (void)accountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountTypesWithHandler:(id)arg1;
- (void)accountsWithHandler:(id)arg1;
- (void)setNotificationsEnabledNum:(BOOL)arg1;
- (void)setClientBundleID:(id)arg1 withHandler:(id)arg2;
- (void)_connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (id)initWithClient:(id)arg1;
- (BOOL)notificationsEnabled;
- (id)filter;
- (void)setClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setFilter:(id)arg1;
- (id)client;

@end
