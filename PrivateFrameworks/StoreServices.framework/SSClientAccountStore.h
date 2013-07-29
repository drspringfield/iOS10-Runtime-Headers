/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray;

@interface SSClientAccountStore : SSAccountStore  {
    NSArray *_accounts;
    BOOL _accountsValid;
}

@property(copy) NSArray * accounts;


- (void)signOutAllAccounts;
- (void)signOutAccount:(id)arg1;
- (id)activeLockerAccount;
- (id)setActiveAccount:(id)arg1;
- (void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2;
- (id)_copyReloadedAccounts;
- (void)_signOutWithAccountIDs:(id)arg1;
- (void)updateAccountsWithMessage:(id)arg1 completionBlock:(id)arg2;
- (void)_invalidateAccounts;
- (id)_accountWithUniqueIdentifier:(id)arg1;
- (id)_addAccount:(id)arg1 asActiveAccount:(BOOL)arg2 activeLockerAccount:(BOOL)arg3;
- (void)_reloadAccountsIfNeeded;
- (void)setAccounts:(id)arg1;
- (id)addAccount:(id)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (id)setActiveLockerAccount:(id)arg1;
- (id)activeAccount;
- (id)accounts;
- (void)reloadAccounts;
- (id)init;
- (void)dealloc;

@end
