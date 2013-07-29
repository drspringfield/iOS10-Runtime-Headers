/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKFriendRequestComposeViewControllerDelegate>, GKComposeHostedViewController, NSString;

@interface GKFriendRequestComposeViewController : UINavigationController  {
    <GKFriendRequestComposeViewControllerDelegate> *_composeViewDelegateWeak;
    GKComposeHostedViewController *_composeController;
    NSString *_message;
    unsigned int _recipientCount;
}

@property <GKFriendRequestComposeViewControllerDelegate> * composeViewDelegate;
@property(retain) GKComposeHostedViewController * composeController;
@property(retain) NSString * message;
@property unsigned int recipientCount;
@property unsigned int rid;

+ (unsigned int)maxNumberOfRecipients;
+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)setComposeViewDelegate:(id)arg1;
- (BOOL)navigationBarHidden;
- (void)setRecipientCount:(unsigned int)arg1;
- (unsigned int)recipientCount;
- (void)setComposeController:(id)arg1;
- (id)composeViewDelegate;
- (void)prepareForNewRecipients:(id)arg1;
- (id)composeController;
- (void)setRid:(unsigned int)arg1;
- (unsigned int)rid;
- (void)sendFinishedMessageToDelegateCancelled:(BOOL)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (id)message;
- (id)init;
- (void)dealloc;
- (void)setMessage:(id)arg1;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;

@end
