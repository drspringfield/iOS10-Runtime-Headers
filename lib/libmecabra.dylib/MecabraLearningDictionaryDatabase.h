/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libmecabra.dylib
 */

@class NSMutableDictionary;

@interface MecabraLearningDictionaryDatabase : MecabraDatabase  {
    NSMutableDictionary *_cachedEntries;
    BOOL _dirty;
    unsigned int _lastSeedValue;
    unsigned int _lastUpdateTime;
}

@property unsigned int lastSeedValue;
@property unsigned int lastUpdateTime;
@property BOOL sqliteDatabaseMigrated;
@property unsigned int versionNumber;
@property(retain) NSMutableDictionary * cachedEntries;
@property BOOL dirty;

+ (void)moveInternalDictionariesIfPresentAtURL:(id)arg1 type:(id)arg2;
+ (id)sharedDatabases;
+ (id)sharedDatabaseForURL:(id)arg1 type:(id)arg2;

- (void)setCachedEntries:(id)arg1;
- (void)updateSeed:(unsigned int)arg1 forEntry:(id)arg2 uniquingKeys:(id)arg3;
- (void)removeOldEntriesBasedOnMaxCount:(unsigned int)arg1;
- (id)cachedEntries;
- (void)setVersionNumber:(unsigned int)arg1;
- (id)initWithURL:(id)arg1 type:(id)arg2;
- (void)setSqliteDatabaseMigrated:(BOOL)arg1;
- (id)allIdentifiers;
- (void)rebuildCache;
- (id)entryForIdentifier:(int)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (void)setLastSeedValue:(unsigned int)arg1;
- (int)addEntryAndGetIdentifier:(id)arg1;
- (void)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2;
- (id)identifiersForEntry:(id)arg1;
- (BOOL)sqliteDatabaseMigrated;
- (unsigned int)lastSeedValue;
- (BOOL)dirty;
- (void)setDirty:(BOOL)arg1;
- (unsigned int)versionNumber;

@end
