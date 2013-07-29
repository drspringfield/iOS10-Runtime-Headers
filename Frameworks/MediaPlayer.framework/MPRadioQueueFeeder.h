/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableDictionary, NSArray, NSObject<OS_dispatch_queue>, NSMutableArray, RadioStation, ADBannerView, NSData, MPRadioAdObserver;

@interface MPRadioQueueFeeder : MPQueueFeeder  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPRadioAdObserver *_adObserver;
    BOOL _didFailToFetchTracks;
    NSMutableDictionary *_fetchingTracksCompletionHandlersByStation;
    ADBannerView *_skipAdView;
    NSData *_skipAdTrackData;
    RadioStation *_station;
    NSObject<OS_dispatch_queue> *_trackHistoryQueue;
    NSObject<OS_dispatch_queue> *_trackRemovalQueue;
    NSMutableArray *_tracks;
    BOOL _wasUsingBackgroundNetwork;
    unsigned int _initialTrackIndex;
}

@property(retain) RadioStation * station;
@property(copy) NSArray * tracks;
@property unsigned int initialTrackIndex;

+ (BOOL)shouldRestorePlaybackQueue;
+ (void)setUserDefaultExplicitTracksEnabled:(BOOL)arg1;
+ (void)setMinimumDurationToPlayToCountForHistory:(double)arg1;
+ (id)_profileConnectionObserver;
+ (void)_isProfileExplicitContentRestrictedDidChangeNotification:(id)arg1;
+ (BOOL)isUserDefaultExplicitTracksEnabled;
+ (void)_updateIsExplicitContentRestrictedAndPostNotification:(BOOL)arg1 removeTracks:(BOOL)arg2;
+ (BOOL)isExplicitTracksEnabled;
+ (id)imageCache;

- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)setInitialTrackIndex:(unsigned int)arg1;
- (unsigned int)initialTrackIndex;
- (void)setStation:(id)arg1;
- (void)reloadTracksForPlayingStation;
- (void)setTracks:(id)arg1;
- (id)_tracksWithPromotionalContentFromTracks:(id)arg1;
- (void)_insertAdTrack:(id)arg1 afterCurrentItemIndex:(unsigned int)arg2;
- (void)_cancelScheduledAds;
- (void)_prefetchArtworkForNextTrack;
- (BOOL)_endPlaybackIfNecessaryForNetworkType;
- (void)loadArtworkImageForItem:(id)arg1 completionHandler:(id)arg2;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_itemDidFinishLoadingNotification:(id)arg1;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 initialTrackIndex:(unsigned int)arg3 startPlayback:(BOOL)arg4;
- (id)_trackAtIndex:(unsigned int)arg1;
- (unsigned int)_indexOfCurrentItem;
- (void)_updateTracksKeepingExistingTracks:(BOOL)arg1 keepingCurrentTrack:(BOOL)arg2 invalidatingContent:(BOOL)arg3;
- (void)_fetchAdditionalTracksWithCompletionHandler:(id)arg1;
- (void)_cellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_itemIsBannedDidChangedNotification:(id)arg1;
- (void)_songBeganResponseNotification:(id)arg1;
- (void)_didFailToLoadAdNotification:(id)arg1;
- (void)reloadTracksForPlayingStationAndKeepExistingTracks:(BOOL)arg1;
- (void)setAVController:(id)arg1;
- (void)controller:(id)arg1 willChangePlaybackIndexBy:(int)arg2 deltaType:(int)arg3 ignoreElapsedTime:(BOOL)arg4 allowSkippingAds:(BOOL)arg5;
- (unsigned int)realRepeatType;
- (BOOL)playerPreparesItemsForPlaybackAsynchronously;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (BOOL)canSkipToPreviousItem;
- (BOOL)canSeek;
- (BOOL)shouldBeginPlaybackOfItem:(id)arg1 error:(id*)arg2;
- (unsigned int)initialPlaybackQueueDepth;
- (BOOL)hasValidItemAtIndex:(unsigned int)arg1;
- (Class)itemClass;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (int)playbackMode;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (BOOL)canSkipItem:(id)arg1;
- (id)station;
- (unsigned int)itemCount;
- (id)tracks;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
