/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUWebViewDelegate>, UIColor, UIView, NSString;

@interface SUWebView : UIWebView  {
    BOOL _isPinned;
    UIColor *_originalBackgroundColor;
    BOOL _originalShowsBackgroundShadow;
    float _pinnedHeaderInsetAdjustment;
    UIView *_pinnedHeaderView;
    unsigned int _scrollingDisabled : 1;
    BOOL _showsTopBackgroundShadow;
    int _synchronousLayoutCount;
    UIColor *_topBackgroundColor;
}

@property <SUWebViewDelegate> * delegate;
@property(getter=isScrollingEnabled) BOOL scrollingEnabled;
@property(readonly) NSString * title;
@property BOOL showsTopBackgroundShadow;
@property(retain) UIColor * topBackgroundColor;
@property(readonly) id windowScriptObject;


- (void)setTopBackgroundColor:(id)arg1;
- (id)topBackgroundColor;
- (void)setShowsTopBackgroundShadow:(BOOL)arg1;
- (BOOL)showsTopBackgroundShadow;
- (void)_setPinnedHeaderView:(id)arg1 withTopInsetAdjustment:(float)arg2;
- (BOOL)isScrollingEnabled;
- (BOOL)getStatusBarStyle:(int*)arg1;
- (void)endSynchronousLayout;
- (void)beginSynchronousLayout;
- (void)_reloadInsets;
- (id)title;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)windowScriptObject;
- (void)loadArchive:(id)arg1;
- (void)dealloc;
- (void)_setRichTextReaderViewportSettings;
- (void)view:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 oldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;

@end
