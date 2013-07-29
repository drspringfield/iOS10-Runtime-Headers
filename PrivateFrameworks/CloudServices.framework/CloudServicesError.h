/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

@interface CloudServicesError : NSObject  {
}

+ (id)errorForHTTPURLResponse:(id)arg1 error:(id)arg2;
+ (id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 format:(id)arg3;
+ (id)errorWithCode:(int)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4;
+ (id)errorWithCode:(int)arg1 format:(id)arg2;
+ (id)sanitizedError:(id)arg1;
+ (id)errorWithCode:(int)arg1 error:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(int)arg1 URL:(id)arg2 format:(id)arg3;
+ (long)codeForErrno:(long)arg1;
+ (long)codeForNSError:(id)arg1;


@end
