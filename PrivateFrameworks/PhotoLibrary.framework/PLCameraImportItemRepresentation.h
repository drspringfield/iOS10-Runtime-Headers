/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class ICCameraFile, NSString, NSDictionary;

@interface PLCameraImportItemRepresentation : NSObject  {
    ICCameraFile *_cameraFile;
    NSDictionary *_metadata;
    BOOL _canRequestMetadata;
    BOOL _canRequestThumbnail;
    NSString *_path;
    BOOL _inDatabase;
}

@property(retain) ICCameraFile * cameraFile;
@property(retain) NSDictionary * metadata;
@property BOOL canRequestMetadata;
@property BOOL canRequestThumbnail;
@property(copy) NSString * path;
@property BOOL inDatabase;


- (BOOL)isRaw;
- (BOOL)inDatabase;
- (void)setCameraFile:(id)arg1;
- (void)setInDatabase:(BOOL)arg1;
- (BOOL)canRequestMetadata;
- (id)initWithCameraFile:(id)arg1;
- (BOOL)isInDatabaseForce:(BOOL)arg1;
- (BOOL)isMovie;
- (id)cameraFile;
- (void)setCanRequestThumbnail:(BOOL)arg1;
- (BOOL)canRequestThumbnail;
- (void)setCanRequestMetadata:(BOOL)arg1;
- (id)fileExtension;
- (BOOL)isAudio;
- (BOOL)isJPEG;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (id)description;
- (void)setPath:(id)arg1;
- (id)path;

@end
