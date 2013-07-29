/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFFromAddressViewController, <MFComposeRecipientViewDelegate>, MFMailComposeContactsSearchController, <MFMailComposeViewDelegate>, MFComposeSubjectView, NSArray, <MFMailPopoverManagerDelegate>, UITableView, UIView, MFComposeFromView, MFComposeMultiView, MFComposeScrollView, MFComposeTextContentView, MFMailComposeRecipientView, UIPickerView, NSInvocation, MFComposeBodyField, MFComposeImageSizeView, UIResponder;

@interface MFMailComposeView : UITransitionView <UITextContentViewDelegate, UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, MFMailComposeContactsSearchControllerDelegate, MFComposeBodyFieldDelegate, MFDragContext> {
    <MFMailPopoverManagerDelegate> *_popoverOwner;
    <MFMailComposeViewDelegate> *_mailComposeViewDelegate;
    <MFComposeRecipientViewDelegate> *_composeRecipientViewDelegate;
    UIView *_headerView;
    UIView *_contentView;
    UIView *_shadowView;
    MFComposeBodyField *_bodyField;
    MFComposeScrollView *_bodyScroller;
    MFComposeTextContentView *_textView;
    MFMailComposeRecipientView *_toField;
    MFMailComposeRecipientView *_ccField;
    MFMailComposeRecipientView *_bccField;
    MFMailComposeRecipientView *_lastChangedRecipientView;
    MFMailComposeRecipientView *_activeRecipientView;
    MFComposeSubjectView *_subjectField;
    MFComposeFromView *_fromField;
    MFComposeMultiView *_multiField;
    MFComposeImageSizeView *_imageSizeField;
    UIPickerView *_fromAddressPickerView;
    MFFromAddressViewController *_fromAddressViewController;
    UIView *_fromAddressPickerBackgroundView;
    UIResponder *_firstResponderBeforeSheet;
    UIResponder *_pinningResponder;
    NSInvocation *_delayedPopoverInvocation;
    MFMailComposeContactsSearchController *_searchController;
    NSArray *_searchResults;
    UITableView *_searchResultsTable;
    float _offsetBeforeSearch;
    float _keyboardIntersection;
    unsigned int _options;
    struct CGSize { 
        float width; 
        float height; 
    } _currentContentSize;
    unsigned int _isChangingRecipients : 1;
    unsigned int _isLoading : 1;
    unsigned int _isShowingPeoplePicker : 1;
    unsigned int _isRotating : 1;
    unsigned int _isClosing : 1;
    unsigned int _isShowingFromAddressPickerWheel : 1;
    unsigned int _isForEditing : 1;
    unsigned int _isAnimationDisabled : 1;
    unsigned int _shouldShowOptionalHeaders : 1;
    unsigned int _isDraggingRecipients : 1;
    unsigned int _hasAppeared : 1;
    unsigned int _notifyingBodyField;
}

@property <MFMailComposeViewDelegate> * composeViewDelegate;
@property <MFComposeRecipientViewDelegate> * composeRecipientDelegate;
@property <MFMailPopoverManagerDelegate> * popoverOwner;
@property BOOL isForEditing;
@property(getter=isAnimationDisabled) BOOL animationDisabled;
@property(getter=isChangingRecipients) BOOL changingRecipients;
@property(getter=isShowingPeoplePicker) BOOL showingPeoplePicker;
@property(getter=isLoading) BOOL loading;
@property(getter=isSearching,readonly) BOOL searching;
@property(readonly) MFMailComposeRecipientView * toField;
@property(readonly) MFMailComposeRecipientView * ccField;
@property(readonly) MFMailComposeRecipientView * bccField;
@property(readonly) MFComposeSubjectView * subjectField;
@property(readonly) MFComposeFromView * fromField;
@property(readonly) MFComposeImageSizeView * imageSizeField;
@property(readonly) MFComposeMultiView * multiField;
@property(readonly) MFComposeBodyField * bodyField;
@property(readonly) MFComposeScrollView * bodyScroller;
@property(readonly) MFComposeTextContentView * bodyTextView;


- (id)bodyField;
- (id)multiField;
- (id)imageSizeField;
- (id)fromField;
- (id)bccField;
- (id)ccField;
- (void)setPopoverOwner:(id)arg1;
- (id)popoverOwner;
- (id)composeRecipientDelegate;
- (void)willDisappear;
- (void)didAppear;
- (void)findCorecipientsWithRecipientView:(id)arg1;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (void)beginSearchForText:(id)arg1 recipientView:(id)arg2;
- (void)dismissSearchResults;
- (BOOL)presentSearchResults;
- (BOOL)chooseSelectedSearchResult;
- (void)selectPreviousSearchResult;
- (void)selectNextSearchResult;
- (void)updateOptionalHeaderVisibility;
- (void)viewDidBecomeFirstResponder:(id)arg1;
- (void)layoutForChangedComposeRecipientView:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)focusFirstResponderAfterRecipientView:(id)arg1;
- (void)restoreFirstResponder;
- (void)saveFirstResponder;
- (void)fromAddressPickerNeedsToBeRefreshed;
- (void)fromAddressPickerPopoverWasDismissed;
- (void)cancelDelayedPopover;
- (BOOL)isShowingPeoplePicker;
- (void)setShowingPeoplePicker:(BOOL)arg1;
- (BOOL)isAnimationDisabled;
- (void)setAnimationDisabled:(BOOL)arg1;
- (void)setIsForEditing:(BOOL)arg1;
- (BOOL)isForEditing;
- (void)searchResultsPopoverWasDismissed;
- (void)setRecipientFieldsEditable:(BOOL)arg1;
- (void)toggleImageSizeFieldIfNecessary;
- (void)resetContentSize;
- (void)setComposeRecipientDelegate:(id)arg1;
- (void)setComposeViewDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 options:(unsigned int)arg2;
- (id)dragScrollView;
- (id)dragWindow;
- (void)dragEnded;
- (void)dragBeganInWindow:(id)arg1;
- (void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)composeBodyFieldDidDraw:(id)arg1;
- (void)composeBodyFieldFrameChanged:(id)arg1;
- (void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 finishedWithResults:(BOOL)arg2;
- (void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2;
- (id)sendingAddressForComposeContactsSearchController:(id)arg1;
- (void)parentDidClose;
- (void)parentWillClose;
- (void)setChangingRecipients:(BOOL)arg1;
- (BOOL)presentSearchResults:(id)arg1;
- (void)selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (void)_updateKeyboardIntersection:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFromAddressPickerVisible:(BOOL)arg1;
- (void)saveFirstResponderWithKeyboardPinning:(BOOL)arg1;
- (void)setKeyboardVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)restoreFirstResponderWithKeyboardPinning:(BOOL)arg1;
- (void)_adjustHeaderFieldsPreferredContentSize;
- (void)_finishUpRotationToInterfaceOrientation:(int)arg1;
- (void)_adjustScrollerForBottomView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForFromAddressPicker;
- (id)bodyScroller;
- (void)_updateOptionalHeaderVisibilityForceVisible:(BOOL)arg1;
- (void)clearSearchForRecipientView:(id)arg1 reflow:(BOOL)arg2 clear:(BOOL)arg3;
- (id)subjectField;
- (void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 enclosingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 changingView:(id)arg3 frameToPin:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 wasSearching:(BOOL)arg5;
- (BOOL)isChangingRecipients;
- (void)_layoutMultiFieldWithChangingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_layoutFromFieldWithChangingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_layoutSubviewsWithActiveRecipientView:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3 searchResultsWereDismissed:(BOOL)arg4;
- (void)_presentDelayedPopover;
- (void)_cancelDelayedPopover;
- (id)_searchResultsTable;
- (BOOL)isSearchResultsPopoverVisible;
- (void)_adjustScrollerContentSize;
- (float)_heightForBottomView;
- (void)_multiFieldClicked;
- (void)setFromAddressPickerVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isKeyboardVisible;
- (BOOL)isFromAddressPickerVisible;
- (void)_cancelAnimations;
- (void)automaticKeyboardFinishedDisappearing:(id)arg1;
- (void)automaticKeyboardFinishedAppearing:(id)arg1;
- (void)menuDidHide;
- (void)_setupField:(id*)arg1 withLabel:(id)arg2 navTitle:(id)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)composeHeaderViewClicked:(id)arg1;
- (void)cancelSearch;
- (void)setLoading:(BOOL)arg1;
- (BOOL)isSearching;
- (id)toField;
- (id)composeViewDelegate;
- (void)removeFromSuperview;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (BOOL)isLoading;
- (void)dealloc;
- (id)bodyTextView;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { float x1; float x2; })arg2;
- (id)bottomView;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)endEditing:(BOOL)arg1;
- (void)setScrollsToTop:(BOOL)arg1;
- (void)_collectKeyViews:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
