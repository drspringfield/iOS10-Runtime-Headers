/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObject, NSSQLRow, NSMutableArray, NSMutableDictionary;

@interface NSSQLOperation : NSObject  {
    unsigned int _databaseOperator;
    NSSQLRow *_rowForUpdate;
    NSMutableArray *_adapterOps;
    NSManagedObject *_object;
    NSSQLRow *_dbSnapshot;
    NSMutableDictionary *_mtmDeltas;
}


- (void)removeAdapterOperation:(id)arg1;
- (unsigned int)databaseOperator;
- (void)addAdapterOperation:(id)arg1;
- (id)manyToManyDeltas;
- (id)dbSnapshot;
- (void)addDelta:(id)arg1 forManyToManyKey:(id)arg2;
- (void)setRowForUpdate:(id)arg1;
- (void)setDBSnapshot:(id)arg1;
- (id)initWithObject:(id)arg1 entity:(id)arg2;
- (void)setDatabaseOperator:(unsigned int)arg1;
- (id)adapterOperations;
- (id)rowForUpdate;
- (id)objectID;
- (id)object;
- (void)dealloc;
- (id)description;

@end
