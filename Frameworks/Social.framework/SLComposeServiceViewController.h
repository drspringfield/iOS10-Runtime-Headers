/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class UIImage, NSObject<SLSheetViewHostProtocol>, SLSheetRootViewController, SLSheetNavigationController, UIAlertView, SLSheetContentView, SLSheetMasklayer, SLSheetPreviewImageSource, UIView, UIViewController, NSString, NSMutableDictionary, NSMutableArray, NSURL;

@interface SLComposeServiceViewController : UIViewController <SLComposeViewControllerServiceProtocol, UITextViewDelegate, UINavigationControllerDelegate> {
    SLSheetContentView *_contentView;
    NSMutableDictionary *_previewOffsets;
    SLSheetMasklayer *_vignetteLayer;
    UIAlertView *_alertView;
    NSURL *_alertViewTargetURL;
    NSObject<SLSheetViewHostProtocol> *_hostProxy;
    BOOL _reassembleSheet;
    BOOL _isShowingLocationDeniedAlert;
    BOOL _isPresentingActionViewController;
    SLSheetPreviewImageSource *_previewImageSource;
    int _currentBarMetrics;
    UIView *_maskView;
    BOOL _triggerPresentationAnimationOnKeyboard;
    BOOL _hasPresentedSheet;
    BOOL _isPerformationRotation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _sheetFrameStartingRotation;
    UIViewController *_viewControllerForTrackingSheetSize;
    UIViewController *_autoCompletionViewControllerForTrackingSheetSize;
    BOOL _wasPresented;
    BOOL _preventSheetPositionChanges;
    BOOL _suppressKeyboard;
    UIImage *_serviceIconImage;
    int *_keyboardType;
    NSMutableArray *_attachments;
    int _previewDisplayFormat;
    unsigned long _maxImageAttachmentSize;
    NSString *_placeholderText;
    SLSheetRootViewController *_sheetRootViewController;
    SLSheetNavigationController *_navigationController;
    NSMutableArray *_constraints;
}

@property(copy) NSString * title;
@property(retain) UIImage * serviceIconImage;
@property int* keyboardType;
@property(retain) SLSheetContentView * contentView;
@property(retain) NSMutableArray * attachments;
@property int previewDisplayFormat;
@property(retain) NSObject<SLSheetViewHostProtocol> * hostProxy;
@property unsigned long maxImageAttachmentSize;
@property(retain) NSString * text;
@property(retain) NSString * placeholderText;
@property(readonly) BOOL wasPresented;
@property(retain) SLSheetRootViewController * sheetRootViewController;
@property(retain) SLSheetNavigationController * navigationController;
@property BOOL preventSheetPositionChanges;
@property BOOL suppressKeyboard;
@property(readonly) UIView * sheetView;
@property(retain) NSMutableArray * constraints;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)setConstraints:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)userTappedSheetAction:(id)arg1;
- (void)didSendWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)setPreviewOffset:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)hideKeyboardWithAnimationTime:(double)arg1;
- (void)showKeyboardWithAnimationTime:(double)arg1;
- (int)barMetricsForSheetSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_adjustIntrinsicSheetSizeForDisplayFormatIfNeeded;
- (void)setPreviewDisplayFormat:(int)arg1;
- (int)previewDisplayFormatForAttachments:(id)arg1;
- (void)setSuppressKeyboard:(BOOL)arg1;
- (void)setSheetRootViewController:(id)arg1;
- (void)_updateBarMetricsIfNeeded;
- (void)updateSheetForBarMetrics:(int)arg1;
- (int)barMetricsForInterfaceOrientation:(int)arg1;
- (void)setHostProxy:(id)arg1;
- (float)_sheetMinBottomMarginForInterfaceOrientation:(int)arg1;
- (struct CGSize { float x1; float x2; })intrinsicSheetSizeForOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sheetFrameForViewController:(id)arg1 orientation:(int)arg2 topSpaceProportion:(float)arg3 topSpaceOffset:(float)arg4;
- (void)_presentedViewControllerContentSizeDidChange;
- (void)updateKeyboardSize;
- (void)_animateSheetCancelFinished;
- (void)_animateSheetPresentationFinished;
- (void)animateSheetPresentationWithDuration:(double)arg1;
- (void)_animateCardSendFinished;
- (void)_animateVignetteMaskFromSheetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toSheetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (void)showKeyboardAnimated:(BOOL)arg1;
- (void)_setViewControllerForTrackingSheetSize:(id)arg1;
- (void)setPreventSheetPositionChanges:(BOOL)arg1;
- (void)_positionSheetViewAnimatedForViewController:(id)arg1;
- (void)positionSheetView;
- (id)hostProxy;
- (void)animateSheetCancelWithDuration:(double)arg1;
- (void)hideKeyboardAnimated:(BOOL)arg1;
- (void)animateCardSendOrientation:(int)arg1;
- (id)previewImageSource;
- (id)previewViewForDisplayFormat:(int)arg1 attachments:(id)arg2;
- (unsigned long)maxImageAttachmentSize;
- (void)removeAttachmentsOfType:(int)arg1;
- (void)downsampleImageAttachment:(id)arg1;
- (BOOL)validateAttachments;
- (BOOL)suppressKeyboard;
- (void)_presentSheet;
- (id)sheetRootViewController;
- (void)_positionSheetViewForViewController:(id)arg1;
- (void)_positionVignetteForSheetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSheetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sheetFrameForViewController:(id)arg1 orientation:(int)arg2;
- (BOOL)preventSheetPositionChanges;
- (void)networkActivityIndicatorNotification:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidChange:(id)arg1;
- (void)setPostButtonEnabled:(BOOL)arg1;
- (id)serviceIconImage;
- (void)postButtonTapped:(id)arg1;
- (void)setServiceIconImage:(id)arg1;
- (void)dismissAutoCompletionViewController;
- (void)presentAutoCompletionViewController:(id)arg1;
- (void)setMaxImageAttachmentSize:(unsigned long)arg1;
- (BOOL)wasPresented;
- (void)registerHostProxy;
- (void)sheetPresentationAnimationDidFinish;
- (id)sheetActions;
- (id)URLAttachments;
- (BOOL)validateSheetContent;
- (void)showLocationDeniedAlertWithTitle:(id)arg1 settingsURL:(id)arg2;
- (void)popActionViewController;
- (void)pushActionViewController:(id)arg1;
- (void)reloadSheetActions;
- (int)previewDisplayFormat;
- (void)createPreviewIfNeeded;
- (void)cancelButtonTapped:(id)arg1;
- (void)updateAttachment:(id)arg1;
- (void)removeAllURLs;
- (BOOL)canAddContent;
- (void)previewImageForAttachment:(id)arg1 resultBlock:(id)arg2;
- (BOOL)validateText:(id)arg1;
- (void)presentSettingsAlertWithTitle:(id)arg1 message:(id)arg2 targetURL:(id)arg3;
- (void)setPlaceholderText:(id)arg1;
- (id)placeholderText;
- (void)keyboardWillShow:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)attachments;
- (id)contentView;
- (id)text;
- (int*)keyboardType;
- (void)setContentView:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)addAttachment:(id)arg1;
- (void)setInitialText:(id)arg1;
- (void)_hostApplicationWillEnterForeground;
- (void)_willAppearInRemoteViewController;
- (void)send;
- (id)sheetView;
- (void)removeAllImages;
- (void)textViewDidChange:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)updateViewConstraints;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setKeyboardType:(int*)arg1;
- (id)navigationController;
- (void)setText:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (id)constraints;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
