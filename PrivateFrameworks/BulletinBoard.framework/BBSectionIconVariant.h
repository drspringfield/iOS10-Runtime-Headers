/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSData, NSString;

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding> {
    BOOL _precomposed;
    int _format;
    NSData *_imageData;
    NSString *_imagePath;
}

@property int format;
@property(copy) NSData * imageData;
@property(copy) NSString * imagePath;
@property(getter=isPrecomposed) BOOL precomposed;

+ (id)variantWithFormat:(int)arg1 imagePath:(id)arg2;
+ (id)variantWithFormat:(int)arg1 imageData:(id)arg2;
+ (id)_variantWithFormat:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void)setFormat:(int)arg1;
- (void)setImageData:(id)arg1;
- (id)imageData;
- (id)imagePath;
- (int)format;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPrecomposed:(BOOL)arg1;
- (BOOL)isPrecomposed;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setImagePath:(id)arg1;

@end
