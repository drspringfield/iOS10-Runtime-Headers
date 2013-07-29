/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSThread, NSString, NSData, <GEOTileRequesterDelegate>, GEOTileKeyList;

@interface GEOTileRequester : NSObject  {
    GEOTileKeyList *_keyList;
    <GEOTileRequesterDelegate> *_delegate;
    id _context;
    NSThread *_thread;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSData *_auditToken;
    BOOL _requireWiFi;
}

@property(readonly) GEOTileKeyList * keyList;
@property(retain) <GEOTileRequesterDelegate> * delegate;
@property(retain) id context;
@property(retain) NSThread * thread;
@property(retain) NSString * bundleIdentifier;
@property(retain) NSString * bundleVersion;
@property(retain) NSData * auditToken;
@property BOOL requireWiFi;

+ (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (struct { unsigned int x1; double x2; }*)newExpiringTilesets;
+ (unsigned int)expiringTilesetsCount;
+ (unsigned char)tileProviderIdentifier;

- (void)setBundleVersion:(id)arg1;
- (void)setThread:(id)arg1;
- (id)thread;
- (BOOL)requireWiFi;
- (void)setAuditToken:(id)arg1;
- (void)setRequireWiFi:(BOOL)arg1;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)bundleVersion;
- (id)initWithKeyList:(id)arg1;
- (id)keyList;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)bundleIdentifier;
- (void)cancel;
- (id)auditToken;
- (void)start;

@end
