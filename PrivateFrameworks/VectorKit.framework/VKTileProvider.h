/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKTileKeyList, <VKMapLayer>, VKTileSelection, <VKTileProviderClient>, VKTileSource, VKStylesheet, VKTileCache, NSMutableSet, VKTimer, NSArray, NSSet, _VKTileProviderTimerTarget, GEOTileKeyList, VKMapRasterizer;

@interface VKTileProvider : NSObject <VKLRUCacheDelegate, VKTileSourceClient> {
    <VKTileProviderClient> *_client;
    int _mode;
    VKTileSelection *_tileSelection;
    VKTileKeyList *_keysInView;
    VKTileKeyList *_neighborKeys;
    VKTileKeyList *_prefetchKeys;
    VKTimer *_evaluationTimer;
    VKTimer *_prefetchTimer;
    NSMutableSet *_tilesToRender;
    NSArray *_holes;
    NSMutableSet *_lostTiles;
    NSMutableSet *_neighborTiles;
    unsigned int _neighborMode;
    BOOL _fallbackEnabled;
    BOOL _prefetchEnabled;
    VKTileCache *_tilePool;
    VKTileSource *_tilesSources[29];
    VKTileSource *_optionalTileSources[29];
    VKStylesheet *_stylesheet;
    float _loadingProgress;
    BOOL _hasFailedTile;
    BOOL _finishedLoading;
    struct VKCameraState { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        struct { 
            double v[4][4]; 
        } orientation; 
        float aspectRatio; 
        float verticalFieldOfView; 
    } _lastCameraState;
    struct CGSize { 
        float width; 
        float height; 
    } _lastCanvasSize;
    BOOL _tilesChanged;
    VKMapRasterizer *_rasterizer;
    <VKMapLayer> *_debugLayer;
    GEOTileKeyList *_debugLayerKeys;
    int _tileReserveLimit;
    int _tileMaximumLimit;
    BOOL _useSmallTileCache;
    float _lastMidDisplayZoomLevel;
    struct { 
        double x; 
        double y; 
    } _sortPoint;
    float _contentScale;
    struct vector<vk::TileExclusionArea, std::__1::allocator<vk::TileExclusionArea> > { 
        struct TileExclusionArea {} *__begin_; 
        struct TileExclusionArea {} *__end_; 
        struct __compressed_pair<vk::TileExclusionArea *, std::__1::allocator<vk::TileExclusionArea> > { 
            struct TileExclusionArea {} *__first_; 
        } __end_cap_; 
    } _exclusionAreas;
    BOOL _exclusionAreaVisible;
    _VKTileProviderTimerTarget *_evaluationTarget;
    _VKTileProviderTimerTarget *_prefetchTarget;
}

@property int mode;
@property(getter=isFallbackEnabled) BOOL fallbackEnabled;
@property unsigned int neighborMode;
@property(getter=isPrefetchEnabled) BOOL prefetchEnabled;
@property BOOL useSmallTileCache;
@property <VKTileProviderClient> * client;
@property(retain) VKStylesheet * stylesheet;
@property float contentScale;
@property(readonly) VKTileKeyList * keysInView;
@property(readonly) VKTileKeyList * neighborKeys;
@property(readonly) NSSet * tilesToRender;
@property(readonly) NSSet * neighborTiles;
@property(readonly) float loadingProgress;
@property(getter=isFinishedLoading,readonly) BOOL finishedLoading;
@property(readonly) BOOL hasFailedTile;
@property(readonly) NSArray * visibleTileSets;
@property(retain) <VKMapLayer> * debugLayer;
@property(readonly) GEOTileKeyList * debugLayerKeys;
@property double lodBias;
@property double lodControl;


- (id)debugLayer;
- (BOOL)useSmallTileCache;
- (BOOL)isFallbackEnabled;
- (void)rasterizer:(id)arg1 didMakeRasterTile:(id)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (void)dirtyTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 dirtyTilesWithinRect:(const struct { double x1; double x2; double x3; double x4; }*)arg2 level:(int)arg3;
- (BOOL)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 invalidateKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (BOOL)tileSourceMayUseNetwork:(id)arg1;
- (void)_dirtyTile:(id)arg1 source:(id)arg2 layer:(unsigned int)arg3;
- (void)changeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 toState:(unsigned int)arg2 withMetadata:(id)arg3 withTile:(id)arg4 forLayer:(unsigned int)arg5;
- (unsigned int)layerForSource:(id)arg1;
- (void)_pushTimers;
- (id)selectTiles:(int*)arg1 needRasterization:(BOOL*)arg2;
- (void)retireNeighborTiles:(id)arg1;
- (void)_fillHoles:(id)arg1 context:(id)arg2;
- (void)retireRenderTiles:(id)arg1;
- (void)_ensureTimers;
- (BOOL)evaluateNeighborTileForRendering:(id)arg1;
- (BOOL)evaluateSelectedTileForRendering:(id)arg1;
- (void)releaseChildrenFallbackTilesForTile:(id)arg1 context:(id)arg2;
- (BOOL)releaseParentFallbackTileForTile:(id)arg1;
- (void)releaseFallbackTileForRendering:(id)arg1;
- (void)_prefetchTiles;
- (void)_fetchAvailableTiles:(BOOL)arg1;
- (void)_resizeCache;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (void)tileSourcesDidChange;
- (void)releaseNeighborTileForRendering:(id)arg1;
- (BOOL)inFailedState:(id)arg1;
- (BOOL)tileMatters:(id)arg1;
- (void)releaseTileForRendering:(id)arg1;
- (BOOL)hasRequiredTileData:(id)arg1;
- (void)prepareTileForRendering:(id)arg1;
- (void)foreachOptionalLayer:(id)arg1;
- (void)describeTilesFromList:(id)arg1 output:(id)arg2;
- (BOOL)canRenderTile:(id)arg1;
- (void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned int)arg2;
- (double)lodControl;
- (double)lodBias;
- (void)configureTileSelection;
- (BOOL)cache:(id)arg1 willEvictObject:(id)arg2 forKey:(const struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg3;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (void)setDebugLayer:(id)arg1;
- (id)sourceForLayer:(id)arg1;
- (void)setTileExclusionAreas:(const struct vector<vk::TileExclusionArea, std::__1::allocator<vk::TileExclusionArea> > { struct TileExclusionArea {} *x1; struct TileExclusionArea {} *x2; struct __compressed_pair<vk::TileExclusionArea *, std::__1::allocator<vk::TileExclusionArea> > { struct TileExclusionArea {} *x_3_1_1; } x3; }*)arg1;
- (void)setLodBias:(double)arg1;
- (id)debugLayerKeys;
- (id)neighborKeys;
- (id)keysInView;
- (BOOL)tileExclusionAreaVisible;
- (void)quiesce;
- (float)loadingProgress;
- (BOOL)hasFailedTile;
- (BOOL)isFinishedLoading;
- (id)neighborTiles;
- (void)foreachActiveLayer:(id)arg1;
- (id)tilesToRender;
- (void)requireRasterization:(id)arg1;
- (void)setUseSmallTileCache:(BOOL)arg1;
- (void)setFallbackEnabled:(BOOL)arg1;
- (void)setLodControl:(double)arg1;
- (void)updateWithContext:(id)arg1;
- (void)removeTileSourceForMapLayer:(unsigned int)arg1;
- (void)setTileSource:(id)arg1 forMapLayer:(unsigned int)arg2 optional:(BOOL)arg3;
- (void)setPrefetchEnabled:(BOOL)arg1;
- (BOOL)isPrefetchEnabled;
- (void)flushCaches;
- (void)setNeighborMode:(unsigned int)arg1;
- (unsigned int)neighborMode;
- (id)detailedDescription;
- (void)clearScene;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (id)visibleTileSets;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)initWithClient:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setMode:(int)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)contentScale;
- (void)setContentScale:(float)arg1;
- (void)timerFired:(id)arg1;
- (int)mode;
- (id)client;

@end
