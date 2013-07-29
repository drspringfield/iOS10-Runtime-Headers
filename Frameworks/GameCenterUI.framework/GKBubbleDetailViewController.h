/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSLayoutConstraint, NSArray, UIView, UIScrollView;

@interface GKBubbleDetailViewController : GKViewController <UIScrollViewDelegate> {
    UIScrollView *_scrollView;
    UIView *_containerView;
    NSArray *_bubbleViews;
    NSLayoutConstraint *_containerConstraint;
}

@property(retain) UIScrollView * scrollView;
@property(retain) UIView * containerView;
@property(retain) NSArray * bubbleViews;
@property(retain) NSLayoutConstraint * containerConstraint;


- (void)setContainerConstraint:(id)arg1;
- (id)containerConstraint;
- (void)setBubbleViews:(id)arg1;
- (id)bubbleViews;
- (float)heightConstant;
- (float)tabBarHeight;
- (float)navHeight;
- (void)dealloc;
- (void)setContainerView:(id)arg1;
- (id)scrollView;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setScrollView:(id)arg1;
- (id)containerView;

@end
