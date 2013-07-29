/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITableView, UIView, NSArray, NSString, NSMutableArray;

@interface PLSlideshowTransitionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UIView *_containerView;
    UITableView *_table;
    NSMutableArray *_tableCells;
    NSArray *_transitionKeys;
    NSArray *_alternateLocalizations;
    NSString *_selectedTransition;
}

@property(retain) NSString * selectedTransition;
@property(retain) NSArray * alternateLocalizations;
@property(retain) NSArray * transitionKeys;


- (id)alternateLocalizations;
- (id)transitionKeys;
- (void)_configureTableCells;
- (void)setAlternateLocalizations:(id)arg1;
- (void)setTransitionKeys:(id)arg1;
- (id)initWithTransitions:(id)arg1 alternateTransitionLocalizations:(id)arg2;
- (void)setTransitionKeys:(id)arg1 alternateLocalizations:(id)arg2;
- (void)setSelectedTransition:(id)arg1;
- (id)selectedTransition;
- (void)dealloc;
- (void)viewDidUnload;
- (void)loadView;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
