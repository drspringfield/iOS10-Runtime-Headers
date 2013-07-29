/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSMutableSet, NSString, NSOrderedSet, <PUPhotoStreamsAlbumsTableViewControllerDelegate>;

@interface PUPhotoStreamAlbumsTableViewController : UITableViewController  {
    NSOrderedSet *_albumsOrderedSet;
    NSMutableSet *_selectedAlbumGuids;
    BOOL _allowsMutlipleSelection;
    <PUPhotoStreamsAlbumsTableViewControllerDelegate> *_pickerDelegate;
    NSString *_selectedCloudGuid;
}

@property BOOL allowsMutlipleSelection;
@property <PUPhotoStreamsAlbumsTableViewControllerDelegate> * pickerDelegate;
@property(retain) NSString * selectedCloudGuid;

+ (id)_albumsComparator;
+ (struct NSObject { Class x1; }*)albumListForContentMode:(int)arg1;

- (id)selectedCloudGuid;
- (void)setPickerDelegate:(id)arg1;
- (void)setAllowsMutlipleSelection:(BOOL)arg1;
- (BOOL)allowsMutlipleSelection;
- (void)reloadActions;
- (void)setSelectedCloudGuid:(id)arg1;
- (id)pickerDelegate;
- (id)posterImageForAlbum:(struct NSObject { Class x1; }*)arg1 cell:(id)arg2;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (id)initWithStyle:(int)arg1;
- (void)didReceiveMemoryWarning;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
