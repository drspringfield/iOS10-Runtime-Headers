/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMStickerRegistry : NSObject {
    NSMutableDictionary * _GUIDToStickerPackMap;
}

@property (nonatomic, readonly) NSMutableDictionary *GUIDToStickerPackMap;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)GUIDToStickerPackMap;
- (void)_clearStickerPackMap;
- (void)addOrUpdateStickersWithHostAppBundleIdentifier:(id)arg1 version:(id)arg2 bundleURL:(id)arg3;
- (id)allDownloadedStickerPacks;
- (id)allDownloadedStickers;
- (void)downloadStickerPackWithGUID:(id)arg1 isIncomingMessage:(bool)arg2 ignoreCache:(bool)arg3;
- (void)downloadStickerWithGUID:(struct NSString { Class x1; }*)arg1;
- (void)handleIncomingStickerPacks:(id)arg1;
- (void)handleIncomingStickers:(id)arg1;
- (id)init;
- (void)removeStickersWithHostAppBundleIdentifier:(id)arg1;
- (id)stickerPackForGUID:(struct NSString { Class x1; }*)arg1;
- (void)stickerPackRemoved:(id)arg1;
- (void)stickerPackUpdated:(id)arg1;

@end
