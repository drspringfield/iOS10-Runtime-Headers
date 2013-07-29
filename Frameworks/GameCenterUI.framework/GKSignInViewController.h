/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKTextField, GKGame, GKLabel, UIAlertView, UIActivityIndicatorView, UIScrollView, GKFakeTableGroupView, GKButton, UIView, GKAccountRemoteUIController, AAUICredentialRecoveryController, GKSignInInputView, NSString;

@interface GKSignInViewController : GKViewController <AAUICredentialRecoveryPresentationDelegate, GKAuthenticateViewController, UITextFieldDelegate, UIScrollViewDelegate> {
    BOOL _disablesSignIn;
    BOOL _constraintsCreated;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    UIScrollView *_scrollView;
    GKGame *_game;
    GKAccountRemoteUIController *_accountController;
    GKButton *_createAccountButton;
    GKButton *_iForgotButton;
    UIActivityIndicatorView *_progressIndicator;
    GKLabel *_signInLabel;
    GKLabel *_loginPromptLabel;
    GKLabel *_usernameLabel;
    GKLabel *_passwordLabel;
    GKTextField *_usernameField;
    GKTextField *_passwordField;
    GKFakeTableGroupView *_fakeTableGroupView;
    GKSignInInputView *_signInInputView;
    UIAlertView *_alert;
    int _alertTag;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alertDismissHandler;

    NSString *_lastUsername;
    int _failedSignInCount;
    UIView *_bubbleContainer;
    AAUICredentialRecoveryController *_credentialRecoveryController;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _scrollViewInsets;
}

@property(retain) UIScrollView * scrollView;
@property(retain) GKGame * game;
@property(retain) GKAccountRemoteUIController * accountController;
@property(retain) GKButton * createAccountButton;
@property(retain) GKButton * iForgotButton;
@property(retain) UIActivityIndicatorView * progressIndicator;
@property(retain) GKLabel * signInLabel;
@property(retain) GKLabel * loginPromptLabel;
@property(retain) GKLabel * usernameLabel;
@property(retain) GKLabel * passwordLabel;
@property(retain) GKTextField * usernameField;
@property(retain) GKTextField * passwordField;
@property(retain) GKFakeTableGroupView * fakeTableGroupView;
@property(retain) GKSignInInputView * signInInputView;
@property BOOL constraintsCreated;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } scrollViewInsets;
@property(retain) UIAlertView * alert;
@property int alertTag;
@property(copy) id alertDismissHandler;
@property(retain) NSString * lastUsername;
@property int failedSignInCount;
@property(retain) UIView * bubbleContainer;
@property(retain) AAUICredentialRecoveryController * credentialRecoveryController;
@property(copy) id completionHandler;
@property BOOL disablesSignIn;


- (void)setAlert:(id)arg1;
- (id)alert;
- (void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;
- (void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
- (void)setCredentialRecoveryController:(id)arg1;
- (id)credentialRecoveryController;
- (void)setBubbleContainer:(id)arg1;
- (id)bubbleContainer;
- (void)setFailedSignInCount:(int)arg1;
- (int)failedSignInCount;
- (id)lastUsername;
- (void)setScrollViewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })scrollViewInsets;
- (void)setConstraintsCreated:(BOOL)arg1;
- (BOOL)constraintsCreated;
- (void)setSignInInputView:(id)arg1;
- (id)signInInputView;
- (void)setFakeTableGroupView:(id)arg1;
- (id)fakeTableGroupView;
- (void)setPasswordField:(id)arg1;
- (void)setUsernameField:(id)arg1;
- (void)setPasswordLabel:(id)arg1;
- (id)passwordLabel;
- (void)setUsernameLabel:(id)arg1;
- (id)usernameLabel;
- (void)setLoginPromptLabel:(id)arg1;
- (id)loginPromptLabel;
- (void)setSignInLabel:(id)arg1;
- (id)signInLabel;
- (void)setProgressIndicator:(id)arg1;
- (void)setIForgotButton:(id)arg1;
- (id)iForgotButton;
- (void)setCreateAccountButton:(id)arg1;
- (id)createAccountButton;
- (void)showViewController:(id)arg1;
- (void)setDisablesSignIn:(BOOL)arg1;
- (BOOL)disablesSignIn;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectToKeepVisibleAboveKeyboardWithinView:(id)arg1;
- (void)updateTableInsetsForKeyboardHeight:(float)arg1;
- (id)alertDismissHandler;
- (void)loadAccountRemoteUIForMode:(int)arg1 completionHandler:(id)arg2;
- (void)presentAccountRemoteUIControllerAnimated:(BOOL)arg1;
- (id)accountController;
- (void)setAccountController:(id)arg1;
- (void)accountRemoteUIController:(id)arg1 finishedWithError:(id)arg2;
- (void)presentError:(id)arg1 forAccountRemoteUIController:(id)arg2;
- (BOOL)handleUnderlyingAuthenticationError:(id)arg1;
- (void)setLastUsername:(id)arg1;
- (void)showAccountRemoteUIForMode:(int)arg1;
- (void)setAlertDismissHandler:(id)arg1;
- (void)clearPassword;
- (void)authenticateRequestCompletedWithErrorResponse:(id)arg1 error:(id)arg2;
- (id)progressIndicator;
- (id)usernameField;
- (void)updatePlaceholderTextForEnvironment;
- (void)iForgotSelected;
- (void)createNewAccount;
- (void)createSubviews;
- (void)signIn;
- (void)cancelSignIn;
- (void)keyboardWillHideShow:(id)arg1;
- (BOOL)shouldAdjustInsetsForKeyboard;
- (void)showInputView;
- (void)createConstraints;
- (void)showPasswordChangeAlertWithURL:(id)arg1;
- (void)finishAuthenticationWithError:(id)arg1;
- (id)viewsToAnimateOutWhileDisappearingWithBubbleFlow;
- (id)viewsToAnimateInWhileAppearingWithBubbleFlow;
- (void)viewWillDisappearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
- (void)viewDidAppearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
- (void)viewWillAppearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
- (double)bubbleFlowSubviewFadeOutDelay;
- (double)bubbleFlowSubviewFadeOutDuration;
- (double)bubbleFlowAnimateInDuration;
- (double)bubbleFlowAnimateOutDuration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalScreenFrameInViewCoordinatesForBubbleOfType:(int)arg1;
- (id)bubbleAnimatorForTransitionFromViewController:(id)arg1;
- (BOOL)_gkUsesBubbleFlowModalPresentation;
- (void)stopLoadingIndicator;
- (void)startLoadingIndicator;
- (int)alertTag;
- (void)setAlertTag:(int)arg1;
- (void)showAlertForTag:(unsigned int)arg1;
- (void)cancelAlertWithoutDelegateCallback;
- (void)setGame:(id)arg1;
- (id)game;
- (id)init;
- (void)dealloc;
- (id)passwordField;
- (void)setCompletionHandler:(id)arg1;
- (id)scrollView;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (id)completionHandler;
- (void)setScrollView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end
