/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOActiveTileGroup, NSURLConnection, NSMutableData, GEOResourceManifestDownload, NSLock, <GEOResourceManifestServerProxyDelegate>, NSError, GEOResourceLoader, NSString, NSMutableDictionary, NSMutableArray, NSTimer;

@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLConnectionDelegate, GEOResourceManifestServerProxy> {
    <GEOResourceManifestServerProxyDelegate> *_delegate;
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSString *_responseETag;
    BOOL _isObservingManifestReachability;
    NSTimer *_manifestUpdateTimer;
    BOOL _isObservingTileGroupReachability;
    NSTimer *_tileGroupUpdateTimer;
    GEOResourceManifestDownload *_resourceManifest;
    GEOActiveTileGroup *_activeTileGroup;
    GEOResourceLoader *_resourceLoader;
    NSMutableDictionary *_resourceRetainCounts;
    BOOL _started;
    BOOL _hiDPI;
    unsigned int _manifestRetryCount;
    unsigned int _tileGroupRetryCount;
    NSString *_authToken;
    NSLock *_authTokenLock;
    NSError *_lastResourceManifestLoadError;
    NSMutableArray *_manifestUpdateCompletionHandlers;
}

@property <GEOResourceManifestServerProxyDelegate> * delegate;


- (void)_writeManifestToDisk:(id)arg1;
- (void)_updateTimerFired:(id)arg1;
- (void)_updateManifest:(id)arg1;
- (id)_manifestURL;
- (void)_updateManifest;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1;
- (BOOL)_changeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2;
- (void)_retainResource:(id)arg1;
- (id)_resourceInfosForTileGroup:(id)arg1;
- (void)_tileGroupTimerFired:(id)arg1;
- (void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 ignoreIdentifier:(BOOL)arg3;
- (void)_registerReachabilityObserver:(unsigned int)arg1;
- (id)_idealTileGroupToUse;
- (void)_notifyManifestUpdateCompletionHandlers:(id)arg1;
- (void)_writeActiveTileGroupToDisk:(id)arg1;
- (void)_purgeOldRegionalResources;
- (oneway void)releaseResources:(id)arg1;
- (oneway void)retainResources:(id)arg1;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg1;
- (BOOL)_updateManifestIfNecessary;
- (void)_considerChangingActiveTileGroup;
- (void)_loadFromDisk;
- (void)_activeTileGroupOverridesChanged:(id)arg1;
- (void)_cancelConnection;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)getResourceManifestWithHandler:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(id)arg2;
- (id)serverQueue;
- (void)closeConnection;
- (void)openConnection;
- (oneway void)startServer:(id)arg1;
- (id)authToken;
- (void)_cleanupConnection;
- (oneway void)forceUpdate;
- (void)_reachabilityChanged:(id)arg1;
- (void)_countryProvidersDidChange:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;

@end
