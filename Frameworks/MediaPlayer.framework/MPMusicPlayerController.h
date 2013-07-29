/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMusicPlayerControllerInternal;

@interface MPMusicPlayerController : NSObject <MPMediaPlayback> {
    MPMusicPlayerControllerInternal *_internal;
}

@property(readonly) BOOL isPreparedToPlay;
@property double currentPlaybackTime;
@property float currentPlaybackRate;

+ (id)applicationMusicPlayer;
+ (id)iPodMusicPlayer;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)runLoopForNotifications;
+ (void)initialize;

- (void)setVolumePrivate:(float)arg1;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)_musicPlayerDidLaunch;
- (BOOL)skipInDirection:(int)arg1 error:(id*)arg2;
- (void)setUseCachedPlaybackState:(BOOL)arg1;
- (void)setQueueWithQuery:(id)arg1;
- (void)_itemPlaybackDidEnd:(unsigned long long)arg1;
- (void)_isQueuePreparedDidChange:(BOOL)arg1;
- (void)_repeatModeDidChange:(int)arg1;
- (void)_shuffleModeDidChange:(int)arg1;
- (void)_runMigServerOnPort:(unsigned int)arg1;
- (void)_nowPlayingItemDidChange:(unsigned long long)arg1;
- (void)_playbackStateDidChange:(int)arg1;
- (BOOL)serverIsAlive;
- (void)setQueueWithRadioStation:(id)arg1;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setCurrentChapterIndex:(unsigned int)arg1;
- (unsigned int)currentChapterIndex;
- (BOOL)isNowPlayingItemFromGeniusMix;
- (unsigned int)unshuffledIndexOfNowPlayingItem;
- (unsigned int)indexOfNowPlayingItem;
- (void)setPlaybackSpeed:(int)arg1;
- (int)playbackSpeed;
- (void)setAllowsBackgroundVideo:(BOOL)arg1;
- (BOOL)allowsBackgroundVideo;
- (void)pauseWithFadeoutDuration:(double)arg1;
- (long long)nowPlayingRadioTrackID;
- (id)nowPlayingItemAtIndex:(unsigned int)arg1;
- (BOOL)setQueueWithSeedItems:(id)arg1;
- (BOOL)isGeniusAvailableForSeedItems:(id)arg1;
- (BOOL)isGeniusAvailable;
- (void)setShuffleMode:(int)arg1;
- (int)shuffleMode;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (id)nowPlayingItem;
- (void)_unregisterForLaunchNotifications;
- (void)_stopMigServer;
- (BOOL)_musicPlayerExistencePortIsValid;
- (void)_clientCheckInUsingExistencePort:(BOOL)arg1;
- (void)_registerForLaunchNotifications;
- (void)_serverDied:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_setUseApplicationSpecificQueue:(BOOL)arg1;
- (void)setCurrentPlaybackRate:(float)arg1;
- (float)currentPlaybackRate;
- (void)setCurrentPlaybackTime:(double)arg1;
- (double)currentPlaybackTime;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)play;
- (BOOL)isPreparedToPlay;
- (void)prepareToPlay;
- (int)playbackState;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)numberOfItems;
- (void)pause;
- (void)stop;

@end
