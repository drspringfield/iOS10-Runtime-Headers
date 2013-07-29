/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDictionary, UIImageView, PLVideoOverlayButton, PLMoviePlayerController, PLPhotoBakedThumbnails, PLVideoEditingOverlayView, NSMutableArray, NSString, PLVideoPosterFrameView, NSTimer, PLManagedAsset, PLPhotoTileViewController, UIMovieScrubber, NSLock, NSMutableDictionary, UIActivityIndicatorView, AVAssetExportSession, <PLVideoViewDelegate>, NSObject<OS_dispatch_queue>, PLProgressStack, NSArray, UIImage, UIView, NSURL;

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate> {
    PLManagedAsset *_videoCameraImage;
    NSString *_pathToOriginalVideo;
    NSURL *_videoURL;
    PLPhotoTileViewController *_imageTile;
    PLVideoPosterFrameView *_posterFrameView;
    PLVideoOverlayButton *_videoOverlayPlayButton;
    UIView *_videoOverlayBackgroundView;
    PLVideoEditingOverlayView *_trimMessageView;
    UIImage *_posterFrameImage;
    UIImage *_snapshotImage;
    float _scrubberWidth;
    unsigned int _scaleMode;
    UIView *_scrubberBackgroundView;
    UIView *_scrubberTitleView;
    NSTimer *_scrubberUpdateTimer;
    NSDictionary *_thumbnailOptionsDict;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
    PLPhotoBakedThumbnails *_bakedLandscapeThumbnails;
    PLPhotoBakedThumbnails *_bakedPortraitThumbnails;
    AVAssetExportSession *_exportSession;
    double _remakerStartTime;
    double _remakerEndTime;
    NSString *_trimmedPath;
    NSString *_videoPathAfterTrim;
    NSTimer *_trimProgressTimer;
    PLManagedAsset *_trimmedVideoClip;
    PLProgressStack *_trimProgressStack;
    float _progress;
    int _interfaceOrientation;
    PLMoviePlayerController *_moviePlayer;
    int _orientationWhenLastDisplayed;
    <PLVideoViewDelegate> *_delegate;
    double _maximumTrimLength;
    double _lastScrubbedValue;
    double _lastActualValue;
    double _duration;
    double _cachedCurrentPlaybackTime;
    NSArray *_imageGenerators;
    NSLock *_thumbnailReqlock;
    NSObject<OS_dispatch_queue> *_thumbnailReqQueue;
    unsigned int _showsPlayButton : 1;
    unsigned int _showsScrubber : 1;
    unsigned int _canEdit : 1;
    unsigned int _loadMediaImmediately : 1;
    unsigned int _scrubberIsSubview : 1;
    unsigned int _viewWillAppear : 1;
    unsigned int _didLayout : 1;
    unsigned int _wasPlayingBeforeScrub : 1;
    unsigned int _playFromBeginning : 1;
    unsigned int _needsReloadScrubberThumbnails : 1;
    unsigned int _playing : 1;
    unsigned int _editing : 1;
    unsigned int _disableEditAfterTrim : 1;
    unsigned int _scrubbing : 1;
    unsigned int _scrubbingToRight : 1;
    unsigned int _deleteOriginalFile : 1;
    unsigned int _passthroughTrimming : 1;
    unsigned int _preparingMoviePlayer : 1;
    unsigned int _preparedMoviePlayer : 1;
    unsigned int _isMoviePlayerActive : 1;
    unsigned int _moviePlayerIsReady : 1;
    unsigned int _moviePlayerDidBuffer : 1;
    unsigned int _showingOverlay : 1;
    unsigned int _showingScrubber : 1;
    unsigned int _showScrubberWhenMovieIsReady : 1;
    unsigned int _playbackDidBegin : 1;
    unsigned int _loadScrubberThumbnails : 1;
    unsigned int _videoIsLandscape : 1;
    unsigned int _canCreateMetadata : 1;
    unsigned int _createPreviewPosterFrame : 1;
    unsigned int _startedDeliveringNotificationsToMainThread : 1;
    unsigned int _isTrimming : 1;
    unsigned int _wasTrimmedInPlace : 1;
    unsigned int _remakingFailed : 1;
    NSMutableArray *_summaryThumbnailRequestTimestamps;
    NSMutableArray *_detailThumbnailRequestTimestamps;
    UIMovieScrubber *_scrubber;
    NSMutableDictionary *_cachedThumbnails;
    NSArray *_landscapeSummaryThumbnailTimestamps;
    NSArray *_portraitSummaryThumbnailTimestamps;
    UIActivityIndicatorView *_spinner;
    UIActivityIndicatorView *_shadowSpinner;
    BOOL _shouldPlayVideoWhenViewAppears;
}

@property(readonly) NSString * pathForVideoFile;
@property <PLVideoViewDelegate> * delegate;
@property PLPhotoTileViewController * imageTile;
@property(readonly) PLManagedAsset * videoCameraImage;
@property(readonly) int interfaceOrientation;
@property(retain) PLManagedAsset * trimmedVideoClip;
@property(readonly) UIView * scrubberBackgroundView;
@property(readonly) UIImage * posterFrameImage;
@property(readonly) PLVideoPosterFrameView * posterFrameView;
@property(readonly) double duration;
@property(getter=isEditing) BOOL editing;
@property(readonly) double startTime;
@property(readonly) double endTime;
@property(readonly) NSString * videoPathAfterTrim;
@property(readonly) UIImageView * previewImageView;
@property BOOL showsPlayOverlay;
@property BOOL showsScrubber;
@property BOOL loadMediaImmediately;
@property BOOL shouldPlayVideoWhenViewAppears;
@property BOOL canEdit;
@property BOOL scrubberIsSubview;
@property float scrubberWidth;
@property double currentTime;
@property(retain) PLProgressStack * trimProgressStack;
@property(readonly) NSString * _pathForOriginalFile;
@property(readonly) NSString * _pathForVideoPreviewFile;
@property(readonly) NSString * _pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly) NSString * _pathForPrebakedPortraitScrubberThumbnails;
@property(readonly) BOOL _mediaIsPlayable;
@property(readonly) BOOL _didSetPhotoData;

+ (id)videoViewForVideoFileAtURL:(id)arg1;

- (void)setScrubberWidth:(float)arg1;
- (id)_moviePlayer;
- (BOOL)_scrubberTimeNeedsMapping;
- (BOOL)scrubberIsSubview;
- (BOOL)showsScrubber;
- (BOOL)showsPlayOverlay;
- (id)posterFrameImage;
- (void)setPosterFrameImage:(id)arg1;
- (void)viewDidDisappear;
- (void)handleDoubleTap;
- (BOOL)wasTrimmedInPlace;
- (void)importerFinishedProcessingTrimmedVideo:(id)arg1;
- (id)movieScrubber:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(int)arg4;
- (id)videoOverlayPlayButton;
- (id)moviePlayerRequestsPickedAirplayRoute:(id)arg1;
- (void)moviePlayerWasSuspendedDuringPlayback:(id)arg1;
- (void)moviePlayer:(id)arg1 didChangeExternalPlayback:(BOOL)arg2;
- (void)moviePlayerControllerWillResignAsActiveController:(id)arg1;
- (void)moviePlayerControllerDidBecomeActiveController:(id)arg1;
- (void)_handleScreenConnectionChange:(BOOL)arg1;
- (double)_scrubberTimeFromMovieTime:(double)arg1;
- (BOOL)_mediaIsVideo;
- (id)_videoSnapshot;
- (BOOL)loadMediaImmediately;
- (void)_updatePosterImageView;
- (void)_setupMoviePlayerIfNecessary;
- (void)_reloadScrubberThumbnailsIfNeeded;
- (void)_createScrubberIfNeeded;
- (void)_resetScrubberUpdateTimer;
- (void)_displayPlaySpinner;
- (void)_resetTrimProgressTimer;
- (void)_exportCompletedWithSuccess:(BOOL)arg1;
- (BOOL)_canEditDuration:(double)arg1;
- (void)_thumbnailsWereRegenerated:(id)arg1 error:(id)arg2 contextInfo:(void*)arg3;
- (void)_startDeliveringNotificationsToMainThread;
- (void)_removeTrimProgressTimer;
- (void)cancelTrim;
- (void)_trimProgressChanged:(id)arg1;
- (id)trimProgressStack;
- (void)_updateTrimProgress;
- (void)_stopDeliveringNotifications;
- (void)_informDelegateAboutProgressChange:(float)arg1;
- (void)setTrimmedVideoClip:(id)arg1;
- (void)_prepareMoviePlayerIfNeeded;
- (void)_scrubberAnimationFinished;
- (void)_setPlaying:(BOOL)arg1;
- (void)_saveCachedThumbnailsIfNecessary;
- (double)_thumbnailTimeFromScrubberTime:(double)arg1;
- (void)_serviceImageGenerationRequests;
- (void)_didScrubToValue:(double)arg1 withHandle:(int)arg2;
- (void)_invalidateSnapshotImage;
- (double)_movieTimeFromScrubberTime:(double)arg1;
- (void)_hideVideoOverlay:(BOOL)arg1;
- (void)_removeScrubberUpdateTimer;
- (void)_updateScrubberValue;
- (id)_loadThumbnailsIntoDictionary:(id)arg1 isLandscape:(BOOL)arg2 aspectRatio:(float)arg3;
- (void)_addThumbnailRequestForTimestamp:(id)arg1 isSummaryThumbnail:(BOOL)arg2;
- (id)_pathForPrebakedPortraitScrubberThumbnails;
- (id)_pathForPrebakedLandscapeScrubberThumbnails;
- (double)_scrubberStartTime;
- (double)_movieScrubberDuration;
- (void)_scrubToMovieTime:(double)arg1;
- (void)_showVideoOverlay;
- (void)setShowsScrubber:(BOOL)arg1 duration:(double)arg2;
- (void)_setPlaybackDidBegin:(BOOL)arg1;
- (void)_setMoviePlayerActive:(BOOL)arg1;
- (BOOL)_canCreateMetadata;
- (id)_pathForOriginalFile;
- (BOOL)_didSetPhotoData;
- (BOOL)_canPlayStreamedVideoWithLocalVideo;
- (BOOL)_mediaIsStreamedVideo;
- (void)_updatePosterFrameVisibility;
- (void)_updateScrubberVisibilityWithDuration:(double)arg1;
- (void)_setNeedsReloadScrubberThumbnails:(BOOL)arg1;
- (void)_requestPreviewPosterFrameForVideoSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_updateScaleModeForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_pathForVideoPreviewFile;
- (void)_savePreviewPosterFrameImage:(struct CGImage { }*)arg1;
- (void)_configureImageGenerator:(id)arg1 thumbnailSize:(struct CGSize { float x1; float x2; })arg2 forSummaryThumbnails:(BOOL)arg3;
- (id)_thumbnailSourceAsset;
- (void)_removePlaySpinner;
- (void)_didBeginPlayback;
- (void)_updateSnapshotImage;
- (void)_verifyOrRestartPlayback;
- (void)_playbackFinished;
- (void)_updateScrubberFrame;
- (void)_videoOverlayFadeOutDidFinish;
- (void)playButtonClicked:(id)arg1;
- (BOOL)_mediaIsPlayable;
- (void)_updateForEditing;
- (float)scrubberWidth;
- (float)_scrubberBackgroundHeight;
- (void)_hideTrimMessageView:(BOOL)arg1;
- (void)_clearImageGenerators;
- (void)setTrimProgressStack:(id)arg1;
- (void)_cancelRemaking:(id)arg1;
- (BOOL)_canAccessVideo;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 videoCameraImage:(id)arg2 orientation:(int)arg3;
- (id)previewImageView;
- (void)showTrimMessage:(id)arg1 withBottomY:(float)arg2;
- (void)hideTrimMessage;
- (id)scrubberBackgroundView;
- (void)setScrubberIsSubview:(BOOL)arg1;
- (void)setImageTile:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 videoCameraImage:(id)arg2 orientation:(int)arg3;
- (BOOL)playingToVideoOut;
- (BOOL)shouldShowCopyCalloutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)playingToAirTunes;
- (id)trimmedVideoClip;
- (id)videoPathAfterTrim;
- (void)trimUsingMode:(int)arg1 saveACopy:(BOOL)arg2;
- (id)newPreviewImageData:(id*)arg1;
- (id)imageTile;
- (id)videoCameraImage;
- (id)videoScrubber;
- (void)setShouldPlayVideoWhenViewAppears:(BOOL)arg1;
- (BOOL)shouldPlayVideoWhenViewAppears;
- (void)setShowsScrubber:(BOOL)arg1;
- (BOOL)deleteOriginalFileAfterTrim;
- (void)removeVideoOverlay;
- (BOOL)isTrimming;
- (void)forceStop;
- (void)setLoadMediaImmediately:(BOOL)arg1;
- (void)setShowsPlayOverlay:(BOOL)arg1;
- (void)setCanEdit:(BOOL)arg1;
- (id)posterFrameView;
- (void)_tearDownMoviePlayer;
- (id)pathForVideoFile;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2;
- (void)moviePlayerPlaybackDidEnd:(id)arg1;
- (void)moviePlayerDurationAvailable:(id)arg1;
- (void)moviePlayerPlaybackRateDidChange:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned int)arg2;
- (void)moviePlayerReadyToPlay:(id)arg1;
- (void)moviePlayerBufferingStateDidChange:(id)arg1;
- (void)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
- (void)moviePlayerHeadsetNextTrackPressed:(id)arg1;
- (void)moviePlayerHeadsetPlayPausePressed:(id)arg1;
- (BOOL)isPlaying;
- (void)toggleScaleMode:(float)arg1;
- (void)play;
- (BOOL)canEdit;
- (void)viewDidAppear;
- (double)endTime;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (BOOL)isEditing;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)interfaceOrientation;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)delegate;
- (double)startTime;
- (void)setMaximumTrimLength:(double)arg1;
- (float)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (double)movieScrubberDuration:(id)arg1;
- (void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)movieScrubberDidEndAnimatingZoom:(id)arg1;
- (void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
- (void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;
- (void)movieScrubberEditingAnimationFinished:(id)arg1;
- (void)movieScrubberDidBeginEditing:(id)arg1;
- (void)movieScrubberDidCancelEditing:(id)arg1;
- (void)movieScrubberWillBeginEditing:(id)arg1;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3;
- (void)_reset;
- (void)_setDuration:(double)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setProgress:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)pause;
- (double)duration;
- (void)stop;

@end
