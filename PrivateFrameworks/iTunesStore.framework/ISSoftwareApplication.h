/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSItemContentRating, NSArray, NSString, NSDate, NSNumber;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSString *_deviceIdentifierForVendor;
    NSNumber *_itemIdentifier;
    NSString *_itemName;
    BOOL _profileValidated;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
    NSDate *_receiptExpirationDate;
    unsigned int _vppStateFlags;
}

@property(retain) NSNumber * accountDSID;
@property(copy) NSString * accountIdentifier;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundleShortVersionString;
@property(copy) NSString * bundleVersion;
@property(copy) NSString * containerPath;
@property(copy) SSItemContentRating * contentRating;
@property(copy) NSString * deviceIdentifierForVendor;
@property(retain) NSNumber * itemIdentifier;
@property(copy) NSString * itemName;
@property(getter=isProfileValidated) BOOL profileValidated;
@property(copy) NSString * softwareType;
@property(retain) NSNumber * storeFrontIdentifier;
@property(retain) NSNumber * versionIdentifier;
@property(copy) NSArray * versionOrdering;
@property(readonly) NSDate * receiptExpirationDate;
@property(readonly) unsigned int vppStateFlags;

+ (id)lookupAttributeKeys;

- (id)versionOrdering;
- (id)receiptExpirationDate;
- (id)itemName;
- (void)setDeviceIdentifierForVendor:(id)arg1;
- (unsigned int)vppStateFlags;
- (void)resetVPPStateFlags;
- (id)initWithMobileInstallationDictionary:(id)arg1;
- (id)accountDSID;
- (void)setVersionOrdering:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (void)setSoftwareType:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setProfileValidated:(BOOL)arg1;
- (void)_loadMetadataFromContainer:(id)arg1;
- (void)setAccountDSID:(id)arg1;
- (void)setBundleShortVersionString:(id)arg1;
- (id)bundleShortVersionString;
- (id)versionIdentifier;
- (BOOL)isProfileValidated;
- (void)setStoreFrontIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)itemIdentifier;
- (void)setContentRating:(id)arg1;
- (id)contentRating;
- (id)softwareType;
- (void)setItemIdentifier:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (id)bundleVersion;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContainerPath:(id)arg1;
- (id)containerPath;
- (void)dealloc;
- (id)description;
- (id)bundleIdentifier;
- (id)deviceIdentifierForVendor;

@end
