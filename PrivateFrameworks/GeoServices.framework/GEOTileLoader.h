/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoader : NSObject  {
}

@property(readonly) int memoryHits;
@property(readonly) int diskHits;
@property(readonly) int networkHits;

+ (id)sharedLoader;
+ (void)useLocalLoader;
+ (void)setMemoryCacheMinCapacity:(unsigned int)arg1;
+ (void)setMemoryCacheTotalCostLimit:(unsigned int)arg1;
+ (id)modernLoader;
+ (id)singletonConfiguration;
+ (void)setDiskCacheLocation:(id)arg1;
+ (id)diskCacheLocation;
+ (void)setMemoryCacheCountLimit:(unsigned int)arg1;
+ (void)setTrackUsage:(BOOL)arg1;
+ (void)useRemoteLoader;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;

- (void)registerTileLoader:(Class)arg1;
- (BOOL)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)registerTileDecoder:(id)arg1;
- (void)setSortPoint:(const struct { double x1; double x2; }*)arg1;
- (id)cachedTileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 finished:(id)arg2;
- (void)preloadTiles:(id)arg1 requireWiFi:(BOOL)arg2 progress:(id)arg3 finished:(id)arg4 error:(id)arg5;
- (void)loadTilesFromCache:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (void)loadTiles:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (id)renderDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 asyncHandler:(id)arg2;
- (id)renderDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)openDatabase;
- (void)closeDatabase;
- (void)_loadTiles:(id)arg1 options:(unsigned int)arg2 progress:(id)arg3 finished:(id)arg4 error:(id)arg5;
- (void)cancelRequest:(id)arg1;
- (id)expireTilesWithType:(unsigned char)arg1 provider:(unsigned short)arg2 olderThan:(double)arg3;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (id)internalDelegateQ;
- (void)setInternalDelegateQ:(id)arg1;
- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(id)arg3;
- (int)networkHits;
- (int)diskHits;
- (int)memoryHits;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)expireTilesWithPredicate:(id)arg1;
- (void)clearAllCaches;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned int)arg4 callbackQ:(id)arg5 beginNetwork:(id)arg6 callback:(id)arg7;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;

@end
