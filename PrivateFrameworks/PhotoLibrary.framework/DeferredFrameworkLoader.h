/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;

@interface DeferredFrameworkLoader : NSObject  {
    NSString *_path;
    void *_frameworkHandle;
    long _frameworkLoadedToken;
}

@property(retain) NSString * path;
@property void* frameworkHandle;
@property long frameworkLoadedToken;

+ (id)PhotosUIFrameworkPath;

- (void)setFrameworkLoadedToken:(long)arg1;
- (long)frameworkLoadedToken;
- (void)setFrameworkHandle:(void*)arg1;
- (void*)frameworkHandle;
- (Class)classFromString:(id)arg1;
- (void)dealloc;
- (void)setPath:(id)arg1;
- (id)path;
- (id)initWithPath:(id)arg1;

@end
