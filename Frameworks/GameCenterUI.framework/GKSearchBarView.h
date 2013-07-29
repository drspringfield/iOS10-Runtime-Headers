/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKSearchBar, NSArray, NSNumber, <UISearchBarDelegate>;

@interface GKSearchBarView : UICollectionReusableView <UISearchBarDelegate> {
    GKSearchBar *_searchBar;
    <UISearchBarDelegate> *_delegate;
    NSNumber *_usePadConstraints;
    NSArray *_searchBarConstraints;
}

@property(retain) GKSearchBar * searchBar;
@property <UISearchBarDelegate> * delegate;
@property NSNumber * usePadConstraints;
@property(retain) NSArray * searchBarConstraints;

+ (void)initialize;
+ (float)defaultHeight;

- (id)searchBarConstraints;
- (id)usePadConstraints;
- (void)setSearchBarConstraints:(id)arg1;
- (void)establishSearchBarConstraints;
- (void)setUsePadConstraints:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (id)searchBar;
- (void)updateConstraints;
- (void)prepareForReuse;

@end
