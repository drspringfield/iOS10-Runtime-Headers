/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPVideoOverlayDelegate>, MPCenteringNavigationBar, <MPVideoControllerProtocol>, MPAVItem, UINavigationButton, UILabel, MPAVController, MPTransportControls, UIView, MPNowPlayingItemQueueInfoButton, UINavigationBar, MPDetailSlider, UIImageView, UINavigationItem;

@interface MPFullScreenVideoOverlay : MPSwipableView <MPDetailSliderDelegate, MPNowPlayingItemQueueInfoButtonDelegate, MPVideoOverlay> {
    <MPVideoControllerProtocol> *_videoViewController;
    <MPVideoOverlayDelegate> *_delegate;
    MPAVController *_player;
    MPAVItem *_item;
    int _interfaceOrientation;
    MPTransportControls *_transportControls;
    MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;
    MPCenteringNavigationBar *_navigationBar;
    BOOL _navigationBarHidden;
    UIImageView *_navigationBarBackground;
    UIImageView *_navigationBarShadow;
    UINavigationItem *_navigationItem;
    UINavigationButton *_scaleModeButton;
    UIView *_titleViewContainer;
    UIView *_streamingLoadingTitleView;
    MPDetailSlider *_scrubControl;
    UILabel *_scrubSpeedLabel;
    UILabel *_scrubInstructionsLabel;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    unsigned long long _visibleParts;
    unsigned int _tvOutEnabled : 1;
    unsigned int _wantsTick : 1;
    unsigned int _allowsDetailScrubbing : 1;
    unsigned int _detailScrubbing : 1;
}

@property(readonly) UINavigationBar * navigationBar;
@property(readonly) MPTransportControls * transportControls;
@property BOOL TVOutEnabled;
@property BOOL allowsDetailScrubbing;
@property <MPVideoControllerProtocol> * videoViewController;
@property BOOL allowsWirelessPlayback;
@property BOOL navigationBarHidden;
@property(retain) MPAVController * player;
@property <MPVideoOverlayDelegate> * delegate;
@property(retain) MPAVItem * item;
@property unsigned long long desiredParts;
@property unsigned long long visibleParts;
@property unsigned long long disabledParts;


- (id)_newStreamingTitleViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)videoViewController;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (int)nowPlayingItemQueueInfoButton:(id)arg1 willDisplayInfoType:(int)arg2;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (id)_newLoadingMovieTitleViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_shouldShowLoadingTitleView;
- (id)_scrubControlWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateTitleViewItemVisibilityWithAnimation:(BOOL)arg1;
- (void)_scaleButtonAction:(id)arg1;
- (void)_backButtonAction:(id)arg1;
- (id)_newTitleViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 text:(id)arg2 showSpinner:(BOOL)arg3;
- (void)_hideScrubInstructions;
- (void)_showScrubInstructions;
- (void)_itemTypeAvailable:(id)arg1;
- (BOOL)_updateTitleViewItemVisibility;
- (void)_initNavigationBarBackground;
- (void)_reloadNavigationBarWithAnimation:(BOOL)arg1;
- (void)_initNavigationBar;
- (BOOL)updateTimeBasedValues;
- (void)_bufferingStateDidChange:(id)arg1;
- (void)_statusBarHeightChanged:(id)arg1;
- (void)_didChangeStatusBarOrientation:(id)arg1;
- (unsigned long long)_visiblePartsForTransportControlsWithParts:(unsigned long long)arg1;
- (void)_configureLinkButtonForCurrentItemTime;
- (void)_reloadTransportControls:(BOOL)arg1;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)restoreSanity;
- (id)transportControls;
- (unsigned long long)disabledParts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 interfaceOrientation:(int)arg2;
- (BOOL)allowsDetailScrubbing;
- (id)viewsToFadeOutWhenShowingBackside;
- (void)stopTicking;
- (void)startTicking;
- (void)setVideoViewController:(id)arg1;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)_tickNotification:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (unsigned long long)desiredParts;
- (unsigned long long)visibleParts;
- (BOOL)navigationBarHidden;
- (void)setItem:(id)arg1;
- (BOOL)TVOutEnabled;
- (BOOL)allowsWirelessPlayback;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)setHidden:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (id)item;
- (void)didMoveToSuperview;
- (id)navigationBar;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setAlpha:(float)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
