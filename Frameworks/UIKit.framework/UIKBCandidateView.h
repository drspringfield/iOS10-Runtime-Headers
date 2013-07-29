/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, TIKeyboardCandidateResultSet, UIKeyboardCandidateSortControl, UIKeyboardCandidateGridCollectionViewController;

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate> {
    UIView *_clippingView;
    UIView *_topBorder;
    unsigned int _selectedSortIndex;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    UIKeyboardCandidateSortControl *_scrollViewSortControl;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    } _visualStyling;
}

@property(readonly) TIKeyboardCandidateResultSet * candidateResultSet;
@property unsigned int selectedSortIndex;
@property(retain) UIKeyboardCandidateGridCollectionViewController * collectionViewController;
@property(retain) UIKeyboardCandidateSortControl * scrollViewSortControl;
@property struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;


- (void)addSubview:(id)arg1;
- (id)keyboardBehaviors;
- (id)candidateResultSet;
- (BOOL)hasCandidates;
- (id)currentCandidate;
- (void)displayLayer:(id)arg1;
- (void)dealloc;
- (id).cxx_construct;
- (id)groupedCandidatesFromCandidateSet:(id)arg1 forSortIndex:(unsigned int)arg2;
- (void)setScrollViewSortControl:(id)arg1;
- (void)sortSelectionBarAction:(id)arg1;
- (void)setSelectedSortIndex:(unsigned int)arg1;
- (void)setCollectionViewController:(id)arg1;
- (void)updateCollectionViewController:(BOOL)arg1;
- (id)collectionViewController;
- (id)scrollViewSortControl;
- (void)clearCollectionViewController;
- (void)updateCollectionViewController;
- (BOOL)isTenKey;
- (unsigned int)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (id)headerViewForCandidateSet:(id)arg1;
- (unsigned int)gridCollectionViewNumberOfColumns:(id)arg1;
- (id)candidateList;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (unsigned int)selectedSortIndex;
- (id)statisticsIdentifier;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)isHiddenCandidatesList;
- (BOOL)isExtendedList;
- (void)setRenderConfig:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;

@end
