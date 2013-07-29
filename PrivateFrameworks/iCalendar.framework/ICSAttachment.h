/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSString;

@interface ICSAttachment : ICSProperty  {
}

@property(retain) NSString * fmtype;
@property(retain) NSString * managed_id;
@property(retain) NSString * managed_filename;
@property int size;
@property BOOL x_apple_autoarchived;
@property(retain) NSString * x_apple_filename;
@property(retain) NSString * x_apple_ews_attachmentid;


- (void)setX_apple_ews_attachmentid:(id)arg1;
- (id)x_apple_ews_attachmentid;
- (void)setManaged_filename:(id)arg1;
- (void)setX_apple_autoarchived:(BOOL)arg1;
- (BOOL)x_apple_autoarchived;
- (void)setManaged_id:(id)arg1;
- (id)managed_id;
- (id)x_apple_filename;
- (id)managed_filename;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)setX_apple_filename:(id)arg1;
- (void)setFmtype:(id)arg1;
- (id)fmtype;
- (BOOL)isBinary;
- (int)size;
- (void)setSize:(int)arg1;
- (id)initWithURL:(id)arg1;
- (void)setData:(id)arg1;
- (id)filename;
- (void)setURL:(id)arg1;
- (id)initWithData:(id)arg1;

@end
