/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexPath : NSObject <NSCopying, NSCoding> {
    unsigned int *_indexes;
    unsigned int _length;
    void *_reserved;
}

@property(readonly) unsigned int gridColumn;
@property(readonly) unsigned int gridRow;
@property(readonly) unsigned int gridSection;
@property(readonly) int ab_group;
@property(readonly) int ab_item;
@property(readonly) int item;
@property(readonly) int section;
@property(readonly) int row;

+ (id)indexPathWithIndex:(unsigned int)arg1;
+ (id)indexPath;
+ (id)indexPathWithIndexes:(const unsigned int*)arg1 length:(unsigned int)arg2;
+ (id)indexPathForRow:(int)arg1 inSection:(int)arg2;
+ (id)indexPathForItem:(int)arg1 inSection:(int)arg2;
+ (id)indexPathForItem:(int)arg1 inGroup:(int)arg2;
+ (id)indexPathForRow:(unsigned int)arg1 column:(unsigned int)arg2 inSection:(unsigned int)arg3;
+ (id)pu_indexPathsForItems:(id)arg1 inSection:(int)arg2;

- (id)init;
- (unsigned int)length;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)indexPathByAddingIndex:(unsigned int)arg1;
- (id)indexPathByRemovingLastIndex;
- (void)getIndexes:(unsigned int*)arg1;
- (id)initWithIndex:(unsigned int)arg1;
- (unsigned int)indexAtPosition:(unsigned int)arg1;
- (void)getIndexes:(unsigned int*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithIndexes:(const unsigned int*)arg1 length:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)row;
- (int)section;
- (int)item;
- (int)ab_item;
- (int)ab_group;
- (BOOL)_gkIsGlobal;
- (id)indexPathBySettingSection:(unsigned int)arg1;
- (unsigned int)gridColumn;
- (unsigned int)gridRow;
- (unsigned int)gridSection;
- (id)pu_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)pu_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1;

@end
