/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PUActionSheet : UIActionSheet <UIActionSheetDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property(copy) id completionHandler;


- (void)showFromViewController:(id)arg1 withCompletionHandler:(id)arg2;
- (void)showFromObject:(id)arg1 animated:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitles:(id)arg4;
- (void)_tearDown;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end
