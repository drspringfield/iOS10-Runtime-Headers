/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SUPreviewOverlayStorePageViewController, NSString;

@interface SUPreviewOverlayViewController : SUViewController  {
    BOOL _animating;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadBlock;

    BOOL _loaded;
    float _paddingRight;
    float _paddingTop;
    SUPreviewOverlayStorePageViewController *_storePageViewController;
    NSString *_userInfoString;
    BOOL _visible;
    BOOL _contentLoaded;
}

@property(getter=isContentLoaded) BOOL contentLoaded;
@property struct CGSize { float x1; float x2; } contentSize;
@property float paddingRight;
@property float paddingTop;
@property(copy) NSString * userInfoString;

+ (id)defaultRequestProperties;
+ (void)_setContentInsetsForScrollView:(id)arg1 viewController:(id)arg2;
+ (void)offsetScrollView:(id)arg1 forViewController:(id)arg2;
+ (double)defaultAnimationDuration;

- (void)setContentLoaded:(BOOL)arg1;
- (id)userInfoString;
- (id)_scrollViewForViewController:(id)arg1;
- (id)_previewOverlayContainerForViewController:(id)arg1;
- (void)setUserInfoString:(id)arg1;
- (void)loadWithRequestProperties:(id)arg1 completionBlock:(id)arg2;
- (BOOL)isContentLoaded;
- (id)_storePageViewController;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (void)invalidateForMemoryPurge;
- (void)showInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)hideInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)loadWithCompletionBlock:(id)arg1;
- (void)dealloc;
- (void)setPaddingRight:(float)arg1;
- (float)paddingRight;
- (void)setPaddingTop:(float)arg1;
- (float)paddingTop;
- (void)loadView;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })contentSize;

@end
