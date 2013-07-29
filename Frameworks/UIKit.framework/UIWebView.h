/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebViewInternal, NSURLRequest, UIScrollView, <UIWebViewDelegate>;

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate> {
    UIWebViewInternal *_internal;
}

@property <UIWebViewDelegate> * delegate;
@property(readonly) UIScrollView * scrollView;
@property(readonly) NSURLRequest * request;
@property(getter=canGoBack,readonly) BOOL canGoBack;
@property(getter=canGoForward,readonly) BOOL canGoForward;
@property(getter=isLoading,readonly) BOOL loading;
@property BOOL scalesPageToFit;
@property BOOL detectsPhoneNumbers;
@property unsigned int dataDetectorTypes;
@property BOOL allowsInlineMediaPlayback;
@property BOOL mediaPlaybackRequiresUserAction;
@property BOOL mediaPlaybackAllowsAirPlay;
@property BOOL suppressesIncrementalRendering;
@property BOOL keyboardDisplayRequiresUserAction;
@property int paginationMode;
@property int paginationBreakingMode;
@property float pageLength;
@property float gapBetweenPages;
@property(readonly) unsigned int pageCount;

+ (void)initialize;
+ (void)_fixPathsForSandboxDirectoryChange;
+ (void)_updatePersistentStoragePaths;
+ (id)_relativePathFromAbsolutePath:(id)arg1 removingPathComponents:(unsigned int)arg2;

- (void)reload;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOpaque:(BOOL)arg1;
- (BOOL)mediaPlaybackAllowsAirPlay;
- (BOOL)suppressesIncrementalRendering;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)loadRequest:(id)arg1;
- (id)_scrollView;
- (void)webViewClose:(id)arg1;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (BOOL)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (BOOL)isLoading;
- (void)webViewSupportedOrientationsUpdated:(id)arg1;
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned int)arg3;
- (void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;
- (void)webView:(id)arg1 printFrameView:(id)arg2;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)goForward;
- (void)goBack;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)configureWithSettings:(id)arg1;
- (id)_networkInterfaceName;
- (void)_setNetworkInterfaceName:(id)arg1;
- (unsigned int)_audioSessionCategoryOverride;
- (void)_setAudioSessionCategoryOverride:(unsigned int)arg1;
- (BOOL)_alwaysDispatchesScrollEvents;
- (void)_setAlwaysDispatchesScrollEvents:(BOOL)arg1;
- (void)_setWebSelectionEnabled:(BOOL)arg1;
- (void)_setDrawsCheckeredPattern:(BOOL)arg1;
- (void)_setOverridesOrientationChangeEventHandling:(BOOL)arg1;
- (id)_pdfViewHandler;
- (id)_initWithWebView:(id)arg1;
- (void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)arg1;
- (void)_finishRotation;
- (void)_beginRotation;
- (id)scrollView;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 enableReachability:(BOOL)arg2;
- (void)setKeyboardDisplayRequiresUserAction:(BOOL)arg1;
- (BOOL)keyboardDisplayRequiresUserAction;
- (unsigned int)_pageCount;
- (void)_setGapBetweenPages:(float)arg1;
- (void)setGapBetweenPages:(float)arg1;
- (float)_gapBetweenPages;
- (float)gapBetweenPages;
- (void)_setPageLength:(float)arg1;
- (void)setPageLength:(float)arg1;
- (float)_pageLength;
- (float)pageLength;
- (void)_setPaginationBehavesLikeColumns:(BOOL)arg1;
- (void)setPaginationBreakingMode:(int)arg1;
- (BOOL)_paginationBehavesLikeColumns;
- (int)paginationBreakingMode;
- (void)_setPaginationMode:(int)arg1;
- (void)setPaginationMode:(int)arg1;
- (int)_paginationMode;
- (int)paginationMode;
- (id)_makeAlertView;
- (void)_updateRequest;
- (void)_reportError:(id)arg1;
- (void)_didCompleteScrolling;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)_frameOrBoundsChanged;
- (void)_rescaleDocument;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (BOOL)mediaPlaybackRequiresUserAction;
- (void)setMediaPlaybackRequiresUserAction:(BOOL)arg1;
- (BOOL)allowsInlineMediaPlayback;
- (void)setAllowsInlineMediaPlayback:(BOOL)arg1;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)_webViewCommonInitWithWebView:(id)arg1 scalesPageToFit:(BOOL)arg2 shouldEnableReachability:(BOOL)arg3;
- (void)setScalesPageToFit:(BOOL)arg1;
- (void)_didRotate:(id)arg1;
- (void)_updateViewSettings;
- (void)_updateOpaqueAndBackgroundColor;
- (void)_setDrawInWebThread:(BOOL)arg1;
- (void)_updateCheckeredPattern;
- (void)_setRichTextReaderViewportSettings;
- (void)_setScalesPageToFitViewportSettings;
- (id)_browserView;
- (BOOL)scalesPageToFit;
- (void)scrollViewWasRemoved:(id)arg1;
- (id)_documentView;
- (unsigned int)pageCount;
- (void)setSuppressesIncrementalRendering:(BOOL)arg1;
- (BOOL)detectsPhoneNumbers;
- (void)setDetectsPhoneNumbers:(BOOL)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1;
- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)webViewMainFrameDidCommitLoad:(id)arg1;
- (void)webViewMainFrameDidFailLoad:(id)arg1 withError:(id)arg2;
- (void)webViewMainFrameDidFinishLoad:(id)arg1;
- (void)view:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 oldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (Class)_printFormatterClass;
- (void)select:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)copy:(id)arg1;
- (void)selectAll:(id)arg1;
- (unsigned int)dataDetectorTypes;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (BOOL)_appliesExclusiveTouchToSubviewTree;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)stopLoading;
- (id)request;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
