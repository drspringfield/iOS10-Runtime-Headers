/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray;

@interface PLCameraImportQueue : NSObject  {
    NSMutableArray *_items;
    unsigned int _index;
}


- (void)didCompleteItem:(id)arg1;
- (id)completedItems;
- (id)itemsNotCompleted;
- (BOOL)isCompleted;
- (void)_removeItem:(id)arg1;
- (id)items;
- (void)dealloc;
- (id)description;
- (id)currentItem;
- (id)initWithItems:(id)arg1;
- (void)setItems:(id)arg1;

@end
