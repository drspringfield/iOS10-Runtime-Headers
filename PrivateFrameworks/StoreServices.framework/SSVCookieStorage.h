/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase, NSURL, NSObject<OS_dispatch_queue>;

@interface SSVCookieStorage : NSObject  {
    SSSQLiteDatabase *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSURL *_storageLocation;
}

@property(readonly) NSURL * storageLocation;

+ (BOOL)_setupCookieDatabase:(id)arg1;
+ (id)sharedStorage;
+ (id)sharedInstance;

- (void)removeCookiesWithProperties:(id)arg1;
- (void)synchronizeCookies;
- (id)storageLocation;
- (void)removeAllCookies;
- (BOOL)_bindStatement:(struct sqlite3_stmt { }*)arg1 withValues:(id)arg2;
- (id)_columnNameForCookieProperty:(id)arg1;
- (void)setCookies:(id)arg1 forUserIdentifier:(id)arg2;
- (void)_bindInsertStatement:(struct sqlite3_stmt { }*)arg1 forCookie:(id)arg2 userIdentifier:(id)arg3;
- (id)_copyPrivateCookiesForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)initWithStorageLocation:(id)arg1;
- (id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2;
- (void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2;
- (id)init;
- (void)dealloc;

@end
