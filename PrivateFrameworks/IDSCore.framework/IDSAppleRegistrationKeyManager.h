/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class IMTimer, NSString, NSRecursiveLock;

@interface IDSAppleRegistrationKeyManager : NSObject  {
    struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } *_privateKey;
    struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } *_publicKey;
    NSString *_signature;
    BOOL _isMigratedSignature;
    BOOL _loaded;
    BOOL _identityLoaded;
    BOOL _detectedMigrationNeeded;
    NSRecursiveLock *_lock;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _purgeCancelBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _purgeEnqueueBlock;

    IMTimer *_purgeTimer;
}

+ (BOOL)setupKeys;
+ (id)sharedInstance;

- (BOOL)requiresKeychainMigration;
- (BOOL)isMigratedKeyPairSignature;
- (void)purgeMessageProtectionIdentity;
- (BOOL)_isUnderFirstDataProtectionLock;
- (void)_purgeMap;
- (void)_loadIfNeeded:(BOOL)arg1;
- (id)generateCSRForUserID:(id)arg1;
- (id)keyPairSignature;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)_save;
- (void)_setPurgeTimer;
- (struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)identityPrivateKey;
- (struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)identityPublicKey;
- (id)init;
- (void)dealloc;

@end
