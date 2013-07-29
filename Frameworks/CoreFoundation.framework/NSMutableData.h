/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableData : NSData  {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithCapacity:(unsigned int)arg1;
+ (id)dataWithLength:(unsigned int)arg1;

- (id)initWithCapacity:(unsigned int)arg1;
- (void)replaceBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withBytes:(const void*)arg2 length:(unsigned int)arg3;
- (void)appendBytes:(const void*)arg1 length:(unsigned int)arg2;
- (void)increaseLengthBy:(unsigned int)arg1;
- (void)setLength:(unsigned int)arg1;
- (void*)mutableBytes;
- (void)setData:(id)arg1;
- (void)resetBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)appendData:(id)arg1;
- (void)replaceBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withBytes:(const void*)arg2;
- (Class)classForCoder;
- (id)initWithLength:(unsigned int)arg1;
- (void)abAppendString:(id)arg1;
- (void)mf_appendRFC2231CompliantValue:(id)arg1 forKey:(id)arg2;
- (void)mf_convertNetworkLineEndingsToUnix;
- (void)mf_convertNetworkLineEndingsToUnixInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)mf_appendCString:(const char *)arg1;
- (void)mf_makeImmutable;
- (void)appendString:(id)arg1 encoding:(unsigned int)arg2;
- (void)appendLEShort:(short)arg1;
- (void)replaceBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withLELong:(long)arg2;
- (void)appendLELong:(long)arg1;

@end
